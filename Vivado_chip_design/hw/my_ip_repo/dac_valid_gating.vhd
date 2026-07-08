library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity dac_valid_gating is
    port (
        reset_n            : in  std_logic;
        clk                : in  std_logic;
        fifo_m_axis_tvalid : in  std_logic;
        fifo_m_axis_tlast  : in  std_logic;
        dac_s_axis_tready  : in  std_logic;
        fifo_full          : in  std_logic;
        tvalid             : out std_logic;
        tready             : out std_logic
    );
end dac_valid_gating;

architecture rtl of dac_valid_gating is
    signal dac_enable  : std_logic := '0';
    signal handshake_ok : std_logic;
begin

    handshake_ok <= fifo_m_axis_tvalid and dac_s_axis_tready and dac_enable;

    process (reset_n, clk)
    begin
        if reset_n = '1' then
            dac_enable <= '0';
        elsif rising_edge(clk) then
            if fifo_full = '1' then
                dac_enable <= '1';
            elsif fifo_m_axis_tlast = '1' and handshake_ok = '1' then
                dac_enable <= '0';
            end if;
        end if;
    end process;

    tvalid <= dac_enable and fifo_m_axis_tvalid;
    tready <= dac_enable and dac_s_axis_tready;

end rtl;