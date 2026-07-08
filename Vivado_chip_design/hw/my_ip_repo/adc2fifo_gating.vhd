library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity adc2fifo_gating is
    generic (
        g_fifo_num_words : natural := 512
    );
    port (
        reset_n              : in  std_logic;
        clk                  : in  std_logic;

        fifo2_s_axis_tready  : in  std_logic;
        adc_tvalid_i         : in  std_logic;
        dac_fifo_full        : in  std_logic;
        fifo2_wr_data_count  : in  std_logic_vector(31 downto 0);

        fifo2_tready       : out std_logic;
        adc_tvalid         : out std_logic
    );
end adc2fifo_gating;

architecture rtl of adc2fifo_gating is

    signal capture_enable      : std_logic := '0';
    signal dac_fifo_full_d1    : std_logic := '0';
    signal dac_fifo_full_d2    : std_logic := '0';
    signal start_capture_event : std_logic;
    signal fifo2_stop_reached  : std_logic;

begin

    start_capture_event <= dac_fifo_full_d2 and not dac_fifo_full_d1;

    fifo2_stop_reached <= '1' when unsigned(fifo2_wr_data_count) >= to_unsigned(g_fifo_num_words, fifo2_wr_data_count'length)else '0';

    process (clk, reset_n)
    begin
        if reset_n = '0' then
            dac_fifo_full_d1 <= '0';
            dac_fifo_full_d2 <= '0';
            capture_enable   <= '0';

        elsif rising_edge(clk) then
            dac_fifo_full_d1 <= dac_fifo_full;
            dac_fifo_full_d2 <= dac_fifo_full_d1;

            if start_capture_event = '1' then
                capture_enable <= '1';

            elsif fifo2_stop_reached = '1' then
                capture_enable <= '0';
            end if;
        end if;
    end process;

    fifo2_tready <= fifo2_s_axis_tready and capture_enable;
    adc_tvalid   <= adc_tvalid_i and capture_enable;

end rtl;