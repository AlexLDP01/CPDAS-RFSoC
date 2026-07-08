# ===========================
# ADC Tile 225 Clock (adc1_clk)
# ===========================
set_property PACKAGE_PIN AD5 [get_ports adc1_clk_clk_p]
set_property PACKAGE_PIN AD4 [get_ports adc1_clk_clk_n]

# ===========================
# DAC Tile 227 Clock (dac0_clk)
# ===========================
set_property PACKAGE_PIN L5 [get_ports dac0_clk_clk_p]
set_property PACKAGE_PIN L4 [get_ports dac0_clk_clk_n]

# ===========================
# SYSREF desde Si5381 (vía MUX_AMS_SYSREF)
# ===========================
set_property PACKAGE_PIN N5 [get_ports sysref_in_diff_p]
set_property PACKAGE_PIN N4 [get_ports sysref_in_diff_n]