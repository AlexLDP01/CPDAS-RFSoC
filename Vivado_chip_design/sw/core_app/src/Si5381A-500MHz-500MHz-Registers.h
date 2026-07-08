/*
 * Si5381A Rev E Configuration Register Export Header File
 *
 * This file represents a series of Skyworks Si5381A Rev E 
 * register writes that can be performed to load a single configuration 
 * on a device. It was created by a Skyworks ClockBuilder Pro
 * export tool.
 *
 * Part:		                                       Si5381A Rev E
 * Design ID:                                          ZCU670_c
 * Includes Pre/Post Download Control Register Writes: Yes
 * Created By:                                         ClockBuilder Pro v4.11.0.1 [2023-09-14]
 * Timestamp:                                          2024-05-15 12:36:13 GMT+02:00
 *
 * A complete design report corresponding to this export is included at the end 
 * of this header file.
 *
 */

#ifndef SI5381A_REVE_REG_CONFIG_HEADER
#define SI5381A_REVE_REG_CONFIG_HEADER

#define SI5381A_REVE_REG_CONFIG_NUM_REGS				839

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5381a_reve_register_t;

si5381a_reve_register_t const si5381a_reve_registers[SI5381A_REVE_REG_CONFIG_NUM_REGS] =
{

	/* Start configuration preamble */
	{ 0x0B24, 0xC0 },
	{ 0x0B25, 0x04 },
	{ 0x0540, 0x01 },
	/* End configuration preamble */

	/* Delay 625 msec */
	/*    Delay is worst case time for device to complete any calibration */
	/*    that is running due to device state change previous to this script */
	/*    being processed. */

	/* Start configuration registers */
	{ 0x0006, 0x00 },
	{ 0x0007, 0x00 },
	{ 0x0008, 0x00 },
	{ 0x000B, 0x68 },
	{ 0x0016, 0x0F },
	{ 0x0017, 0xDC },
	{ 0x0018, 0xCC },
	{ 0x0019, 0xDD },
	{ 0x001A, 0xDF },
	{ 0x0020, 0x02 },
	{ 0x0023, 0xFF },
	{ 0x0024, 0x0F },
	{ 0x0025, 0x00 },
	{ 0x0026, 0x00 },
	{ 0x0027, 0x00 },
	{ 0x0028, 0x00 },
	{ 0x002B, 0x02 },
	{ 0x002C, 0x03 },
	{ 0x002D, 0x00 },
	{ 0x002E, 0x3E },
	{ 0x002F, 0x00 },
	{ 0x0030, 0x3E },
	{ 0x0031, 0x00 },
	{ 0x0032, 0x00 },
	{ 0x0033, 0x00 },
	{ 0x0034, 0x00 },
	{ 0x0035, 0x00 },
	{ 0x0036, 0x02 },
	{ 0x0037, 0x00 },
	{ 0x0038, 0x02 },
	{ 0x0039, 0x00 },
	{ 0x003A, 0x00 },
	{ 0x003B, 0x00 },
	{ 0x003C, 0x00 },
	{ 0x003D, 0x00 },
	{ 0x003E, 0x30 },
	{ 0x003F, 0x33 },
	{ 0x0040, 0x04 },
	{ 0x0041, 0x09 },
	{ 0x0042, 0x0D },
	{ 0x0043, 0x00 },
	{ 0x0044, 0x00 },
	{ 0x0045, 0x0C },
	{ 0x0046, 0x32 },
	{ 0x0047, 0x32 },
	{ 0x0048, 0x00 },
	{ 0x0049, 0x00 },
	{ 0x004A, 0x32 },
	{ 0x004B, 0x32 },
	{ 0x004C, 0x00 },
	{ 0x004D, 0x00 },
	{ 0x004E, 0x55 },
	{ 0x004F, 0x00 },
	{ 0x0050, 0x0F },
	{ 0x0051, 0x03 },
	{ 0x0052, 0x03 },
	{ 0x0053, 0x00 },
	{ 0x0054, 0x00 },
	{ 0x0055, 0x03 },
	{ 0x0056, 0x03 },
	{ 0x0057, 0x00 },
	{ 0x0058, 0x00 },
	{ 0x0059, 0x05 },
	{ 0x005A, 0x67 },
	{ 0x005B, 0x45 },
	{ 0x005C, 0x23 },
	{ 0x005D, 0x01 },
	{ 0x005E, 0x67 },
	{ 0x005F, 0x45 },
	{ 0x0060, 0x23 },
	{ 0x0061, 0x01 },
	{ 0x0062, 0x00 },
	{ 0x0063, 0x00 },
	{ 0x0064, 0x00 },
	{ 0x0065, 0x00 },
	{ 0x0066, 0x00 },
	{ 0x0067, 0x00 },
	{ 0x0068, 0x00 },
	{ 0x0069, 0x00 },
	{ 0x0092, 0x02 },
	{ 0x0093, 0xA0 },
	{ 0x0094, 0x00 },
	{ 0x0095, 0x00 },
	{ 0x0096, 0x80 },
	{ 0x0097, 0x00 },
	{ 0x0098, 0x60 },
	{ 0x0099, 0x00 },
	{ 0x009A, 0x02 },
	{ 0x009B, 0x40 },
	{ 0x009C, 0x00 },
	{ 0x009D, 0x0C },
	{ 0x009E, 0x40 },
	{ 0x009F, 0x00 },
	{ 0x00A0, 0x20 },
	{ 0x00A1, 0x00 },
	{ 0x00A2, 0x00 },
	{ 0x00A4, 0x00 },
	{ 0x00A5, 0x00 },
	{ 0x00A6, 0x00 },
	{ 0x00A7, 0x00 },
	{ 0x00A9, 0x01 },
	{ 0x00AA, 0x06 },
	{ 0x00AB, 0x18 },
	{ 0x00AC, 0x00 },
	{ 0x00AE, 0x00 },
	{ 0x00AF, 0x00 },
	{ 0x00B0, 0x00 },
	{ 0x00B1, 0x00 },
	{ 0x00B3, 0x00 },
	{ 0x00B4, 0x00 },
	{ 0x00B5, 0x00 },
	{ 0x00B6, 0x00 },
	{ 0x00E5, 0x00 },
	{ 0x00E6, 0x00 },
	{ 0x00E7, 0x00 },
	{ 0x00E8, 0x00 },
	{ 0x00E9, 0x00 },
	{ 0x00EA, 0xAB },
	{ 0x00EB, 0x02 },
	{ 0x00EC, 0x18 },
	{ 0x00ED, 0x00 },
	{ 0x00EE, 0x00 },
	{ 0x00EF, 0x00 },
	{ 0x00F0, 0x00 },
	{ 0x00F1, 0x00 },
	{ 0x00F2, 0x00 },
	{ 0x00F3, 0x00 },
	{ 0x00F4, 0x00 },
	{ 0x00F5, 0x00 },
	{ 0x0102, 0x01 },
	{ 0x0103, 0x06 },
	{ 0x0104, 0x09 },
	{ 0x0105, 0x7D },
	{ 0x0106, 0x19 },
	{ 0x0107, 0x02 },
	{ 0x0108, 0x01 },
	{ 0x0109, 0x09 },
	{ 0x010A, 0x3E },
	{ 0x010B, 0x18 },
	{ 0x010C, 0x02 },
	{ 0x010D, 0x01 },
	{ 0x010E, 0x09 },
	{ 0x010F, 0x3E },
	{ 0x0110, 0x18 },
	{ 0x0111, 0x02 },
	{ 0x0112, 0x01 },
	{ 0x0113, 0x09 },
	{ 0x0114, 0x3B },
	{ 0x0115, 0x28 },
	{ 0x0116, 0x02 },
	{ 0x0117, 0x06 },
	{ 0x0118, 0x09 },
	{ 0x0119, 0x7D },
	{ 0x011A, 0x19 },
	{ 0x011B, 0x02 },
	{ 0x011C, 0x01 },
	{ 0x011D, 0x09 },
	{ 0x011E, 0x3E },
	{ 0x011F, 0x18 },
	{ 0x0120, 0x02 },
	{ 0x0121, 0x01 },
	{ 0x0122, 0x09 },
	{ 0x0123, 0x3E },
	{ 0x0124, 0x18 },
	{ 0x0125, 0x02 },
	{ 0x0126, 0x02 },
	{ 0x0127, 0x09 },
	{ 0x0128, 0x3E },
	{ 0x0129, 0x1A },
	{ 0x012A, 0x03 },
	{ 0x012B, 0x01 },
	{ 0x012C, 0x09 },
	{ 0x012D, 0x3E },
	{ 0x012E, 0x18 },
	{ 0x012F, 0x02 },
	{ 0x0130, 0x01 },
	{ 0x0131, 0xCC },
	{ 0x0132, 0x00 },
	{ 0x0133, 0x18 },
	{ 0x0134, 0x02 },
	{ 0x0135, 0x01 },
	{ 0x0136, 0x09 },
	{ 0x0137, 0x3E },
	{ 0x0138, 0x18 },
	{ 0x0139, 0x02 },
	{ 0x013A, 0x01 },
	{ 0x013B, 0x09 },
	{ 0x013C, 0x3E },
	{ 0x013D, 0x18 },
	{ 0x013E, 0x02 },
	{ 0x013F, 0x00 },
	{ 0x0140, 0x00 },
	{ 0x0141, 0x40 },
	{ 0x0142, 0xFF },
	{ 0x0208, 0x04 },
	{ 0x0209, 0x00 },
	{ 0x020A, 0x00 },
	{ 0x020B, 0x00 },
	{ 0x020C, 0x00 },
	{ 0x020D, 0x00 },
	{ 0x020E, 0x01 },
	{ 0x020F, 0x00 },
	{ 0x0210, 0x00 },
	{ 0x0211, 0x00 },
	{ 0x0212, 0x40 },
	{ 0x0213, 0x00 },
	{ 0x0214, 0x00 },
	{ 0x0215, 0x00 },
	{ 0x0216, 0x00 },
	{ 0x0217, 0x00 },
	{ 0x0218, 0x01 },
	{ 0x0219, 0x00 },
	{ 0x021A, 0x00 },
	{ 0x021B, 0x00 },
	{ 0x021C, 0x00 },
	{ 0x021D, 0x00 },
	{ 0x021E, 0x00 },
	{ 0x021F, 0x00 },
	{ 0x0220, 0x00 },
	{ 0x0221, 0x00 },
	{ 0x0222, 0x00 },
	{ 0x0223, 0x00 },
	{ 0x0224, 0x00 },
	{ 0x0225, 0x00 },
	{ 0x0226, 0x00 },
	{ 0x0227, 0x00 },
	{ 0x0228, 0x00 },
	{ 0x0229, 0x00 },
	{ 0x022A, 0x00 },
	{ 0x022B, 0x00 },
	{ 0x022C, 0x00 },
	{ 0x022D, 0x00 },
	{ 0x022E, 0x00 },
	{ 0x022F, 0x00 },
	{ 0x0231, 0x0B },
	{ 0x0232, 0x0B },
	{ 0x0233, 0x0B },
	{ 0x0234, 0x0B },
	{ 0x0235, 0x00 },
	{ 0x0236, 0x00 },
	{ 0x0237, 0x00 },
	{ 0x0238, 0x00 },
	{ 0x0239, 0x00 },
	{ 0x023A, 0x01 },
	{ 0x023B, 0x00 },
	{ 0x023C, 0x00 },
	{ 0x023D, 0x00 },
	{ 0x023E, 0xF0 },
	{ 0x0247, 0x00 },
	{ 0x0248, 0x00 },
	{ 0x0249, 0x00 },
	{ 0x024A, 0x00 },
	{ 0x024B, 0x00 },
	{ 0x024C, 0x00 },
	{ 0x024D, 0x00 },
	{ 0x024E, 0x00 },
	{ 0x024F, 0x00 },
	{ 0x0250, 0x00 },
	{ 0x0251, 0x00 },
	{ 0x0252, 0x00 },
	{ 0x0253, 0x00 },
	{ 0x0254, 0x00 },
	{ 0x0255, 0x00 },
	{ 0x0256, 0x00 },
	{ 0x0257, 0x00 },
	{ 0x0258, 0x00 },
	{ 0x0259, 0x00 },
	{ 0x025A, 0x00 },
	{ 0x025B, 0x00 },
	{ 0x025C, 0x0D },
	{ 0x025D, 0x00 },
	{ 0x025E, 0x00 },
	{ 0x025F, 0x00 },
	{ 0x0260, 0x00 },
	{ 0x0261, 0x00 },
	{ 0x0262, 0x00 },
	{ 0x0263, 0x00 },
	{ 0x0264, 0x00 },
	{ 0x0265, 0x00 },
	{ 0x0266, 0x00 },
	{ 0x0267, 0x00 },
	{ 0x0268, 0x00 },
	{ 0x0269, 0x00 },
	{ 0x026A, 0x00 },
	{ 0x026B, 0x5A },
	{ 0x026C, 0x43 },
	{ 0x026D, 0x55 },
	{ 0x026E, 0x36 },
	{ 0x026F, 0x37 },
	{ 0x0270, 0x30 },
	{ 0x0271, 0x5F },
	{ 0x0272, 0x63 },
	{ 0x028A, 0x00 },
	{ 0x028B, 0x00 },
	{ 0x028C, 0x00 },
	{ 0x028D, 0x00 },
	{ 0x028E, 0x00 },
	{ 0x028F, 0x00 },
	{ 0x0290, 0x00 },
	{ 0x0291, 0x00 },
	{ 0x0292, 0x3F },
	{ 0x0293, 0xFF },
	{ 0x0294, 0x68 },
	{ 0x0295, 0x88 },
	{ 0x0296, 0x02 },
	{ 0x0297, 0x02 },
	{ 0x0299, 0x02 },
	{ 0x029A, 0x00 },
	{ 0x029B, 0x00 },
	{ 0x029C, 0x00 },
	{ 0x029D, 0x28 },
	{ 0x029E, 0x74 },
	{ 0x029F, 0x00 },
	{ 0x02A0, 0x00 },
	{ 0x02A1, 0x00 },
	{ 0x02A2, 0x00 },
	{ 0x02A3, 0x00 },
	{ 0x02A4, 0x00 },
	{ 0x02A5, 0x00 },
	{ 0x02A6, 0x00 },
	{ 0x02A7, 0x00 },
	{ 0x02A8, 0x00 },
	{ 0x02A9, 0x33 },
	{ 0x02AA, 0x33 },
	{ 0x02AB, 0x01 },
	{ 0x02AC, 0x00 },
	{ 0x02AD, 0x00 },
	{ 0x02AE, 0x00 },
	{ 0x02AF, 0x00 },
	{ 0x02B0, 0x00 },
	{ 0x02B1, 0x00 },
	{ 0x02B7, 0xFF },
	{ 0x02BC, 0x00 },
	{ 0x0302, 0x00 },
	{ 0x0303, 0x00 },
	{ 0x0304, 0x00 },
	{ 0x0305, 0x00 },
	{ 0x0306, 0x00 },
	{ 0x0307, 0x00 },
	{ 0x0308, 0x00 },
	{ 0x0309, 0x00 },
	{ 0x030A, 0x00 },
	{ 0x030B, 0x00 },
	{ 0x030C, 0x00 },
	{ 0x030D, 0x00 },
	{ 0x030E, 0x00 },
	{ 0x030F, 0x00 },
	{ 0x0310, 0x00 },
	{ 0x0311, 0x09 },
	{ 0x0312, 0x00 },
	{ 0x0313, 0x00 },
	{ 0x0314, 0x00 },
	{ 0x0315, 0x40 },
	{ 0x0316, 0x9C },
	{ 0x0317, 0x00 },
	{ 0x0318, 0x00 },
	{ 0x0319, 0x00 },
	{ 0x031A, 0x00 },
	{ 0x031B, 0x00 },
	{ 0x031C, 0x12 },
	{ 0x031D, 0x00 },
	{ 0x031E, 0x00 },
	{ 0x031F, 0x00 },
	{ 0x0320, 0x80 },
	{ 0x0321, 0xE3 },
	{ 0x0322, 0x00 },
	{ 0x0323, 0x00 },
	{ 0x0324, 0x00 },
	{ 0x0325, 0x00 },
	{ 0x0326, 0x00 },
	{ 0x0327, 0x00 },
	{ 0x0328, 0x00 },
	{ 0x0329, 0x00 },
	{ 0x032A, 0x00 },
	{ 0x032B, 0x00 },
	{ 0x032C, 0x00 },
	{ 0x032D, 0x00 },
	{ 0x032E, 0x00 },
	{ 0x032F, 0x00 },
	{ 0x0330, 0x00 },
	{ 0x0331, 0x00 },
	{ 0x0332, 0x00 },
	{ 0x0333, 0x00 },
	{ 0x0334, 0x00 },
	{ 0x0335, 0x00 },
	{ 0x0336, 0x00 },
	{ 0x0337, 0x00 },
	{ 0x0338, 0x00 },
	{ 0x033B, 0x00 },
	{ 0x033C, 0x00 },
	{ 0x033D, 0x00 },
	{ 0x033E, 0x00 },
	{ 0x033F, 0x00 },
	{ 0x0340, 0x00 },
	{ 0x0347, 0x00 },
	{ 0x0348, 0x00 },
	{ 0x0349, 0x00 },
	{ 0x034A, 0x00 },
	{ 0x034B, 0x00 },
	{ 0x034C, 0x00 },
	{ 0x034D, 0x00 },
	{ 0x034E, 0x00 },
	{ 0x034F, 0x00 },
	{ 0x0350, 0x00 },
	{ 0x0351, 0x00 },
	{ 0x0352, 0x00 },
	{ 0x035B, 0x00 },
	{ 0x035C, 0x00 },
	{ 0x0361, 0x00 },
	{ 0x0362, 0x00 },
	{ 0x0408, 0x00 },
	{ 0x0409, 0x00 },
	{ 0x040A, 0x00 },
	{ 0x040B, 0x00 },
	{ 0x040C, 0x00 },
	{ 0x040D, 0x00 },
	{ 0x040E, 0x00 },
	{ 0x040F, 0x00 },
	{ 0x0410, 0x00 },
	{ 0x0411, 0x00 },
	{ 0x0412, 0x00 },
	{ 0x0413, 0x00 },
	{ 0x0415, 0x00 },
	{ 0x0416, 0x00 },
	{ 0x0417, 0x00 },
	{ 0x0418, 0x00 },
	{ 0x0419, 0x00 },
	{ 0x041A, 0x00 },
	{ 0x041B, 0x00 },
	{ 0x041C, 0x00 },
	{ 0x041D, 0x00 },
	{ 0x041E, 0x00 },
	{ 0x041F, 0x00 },
	{ 0x0421, 0x2B },
	{ 0x0422, 0x01 },
	{ 0x0423, 0x00 },
	{ 0x0424, 0x00 },
	{ 0x0425, 0x00 },
	{ 0x0426, 0x00 },
	{ 0x0427, 0x00 },
	{ 0x0428, 0x00 },
	{ 0x0429, 0x00 },
	{ 0x042A, 0x00 },
	{ 0x042B, 0x01 },
	{ 0x042C, 0x0F },
	{ 0x042D, 0x03 },
	{ 0x042E, 0x00 },
	{ 0x042F, 0x00 },
	{ 0x0431, 0x00 },
	{ 0x0432, 0x00 },
	{ 0x0433, 0x04 },
	{ 0x0434, 0x00 },
	{ 0x0436, 0x06 },
	{ 0x0437, 0x00 },
	{ 0x0438, 0x00 },
	{ 0x0439, 0x00 },
	{ 0x043D, 0x0A },
	{ 0x043E, 0x06 },
	{ 0x0487, 0x00 },
	{ 0x0488, 0x00 },
	{ 0x0489, 0x00 },
	{ 0x048A, 0x00 },
	{ 0x048B, 0x00 },
	{ 0x048C, 0x00 },
	{ 0x048D, 0x00 },
	{ 0x049B, 0x18 },
	{ 0x049C, 0x4C },
	{ 0x049D, 0x00 },
	{ 0x049E, 0x00 },
	{ 0x049F, 0x00 },
	{ 0x04A0, 0x00 },
	{ 0x04A1, 0x00 },
	{ 0x04A2, 0x00 },
	{ 0x04A4, 0x20 },
	{ 0x04A5, 0x00 },
	{ 0x04A6, 0x00 },
	{ 0x04AC, 0x00 },
	{ 0x04AD, 0x00 },
	{ 0x04AE, 0x00 },
	{ 0x04B1, 0x00 },
	{ 0x04B2, 0x00 },
	{ 0x0508, 0x0E },
	{ 0x0509, 0x1C },
	{ 0x050A, 0x0D },
	{ 0x050B, 0x0C },
	{ 0x050C, 0x3F },
	{ 0x050D, 0x1F },
	{ 0x050E, 0x12 },
	{ 0x050F, 0x26 },
	{ 0x0510, 0x09 },
	{ 0x0511, 0x08 },
	{ 0x0512, 0x3F },
	{ 0x0513, 0x1F },
	{ 0x0515, 0x00 },
	{ 0x0516, 0x00 },
	{ 0x0517, 0x00 },
	{ 0x0518, 0x00 },
	{ 0x0519, 0x00 },
	{ 0x051A, 0x03 },
	{ 0x051B, 0x00 },
	{ 0x051C, 0x00 },
	{ 0x051D, 0x00 },
	{ 0x051E, 0x00 },
	{ 0x051F, 0x80 },
	{ 0x0521, 0x0B },
	{ 0x052A, 0x00 },
	{ 0x052B, 0x00 },
	{ 0x052C, 0x87 },
	{ 0x052D, 0x03 },
	{ 0x052E, 0x19 },
	{ 0x052F, 0x19 },
	{ 0x0531, 0x00 },
	{ 0x0532, 0x65 },
	{ 0x0533, 0x03 },
	{ 0x0534, 0x00 },
	{ 0x0536, 0x02 },
	{ 0x0537, 0x00 },
	{ 0x0538, 0x21 },
	{ 0x0539, 0x00 },
	{ 0x053A, 0x01 },
	{ 0x053B, 0x03 },
	{ 0x053C, 0x00 },
	{ 0x053D, 0x04 },
	{ 0x053E, 0x02 },
	{ 0x0588, 0x07 },
	{ 0x0589, 0x0D },
	{ 0x058A, 0x00 },
	{ 0x058B, 0x95 },
	{ 0x058C, 0xAE },
	{ 0x058D, 0x00 },
	{ 0x059B, 0x7A },
	{ 0x059C, 0x8C },
	{ 0x059D, 0x0E },
	{ 0x059E, 0x1E },
	{ 0x059F, 0x0D },
	{ 0x05A0, 0x0C },
	{ 0x05A1, 0x3F },
	{ 0x05A2, 0x1F },
	{ 0x05A4, 0x08 },
	{ 0x05A5, 0x00 },
	{ 0x05A6, 0x03 },
	{ 0x05AC, 0x09 },
	{ 0x05AD, 0xE7 },
	{ 0x05AE, 0x45 },
	{ 0x05B1, 0xDD },
	{ 0x05B2, 0x02 },
	{ 0x0602, 0x01 },
	{ 0x0608, 0x00 },
	{ 0x0609, 0x00 },
	{ 0x060A, 0x00 },
	{ 0x060B, 0x00 },
	{ 0x060C, 0x00 },
	{ 0x060D, 0x00 },
	{ 0x060E, 0x00 },
	{ 0x060F, 0x00 },
	{ 0x0610, 0x00 },
	{ 0x0611, 0x00 },
	{ 0x0612, 0x00 },
	{ 0x0613, 0x00 },
	{ 0x0615, 0x00 },
	{ 0x0616, 0x00 },
	{ 0x0617, 0x00 },
	{ 0x0618, 0x00 },
	{ 0x0619, 0x00 },
	{ 0x061A, 0x00 },
	{ 0x061B, 0x00 },
	{ 0x061C, 0x00 },
	{ 0x061D, 0x00 },
	{ 0x061E, 0x00 },
	{ 0x061F, 0x00 },
	{ 0x0621, 0x2B },
	{ 0x0622, 0x01 },
	{ 0x0623, 0x00 },
	{ 0x0624, 0x00 },
	{ 0x0625, 0x00 },
	{ 0x0626, 0x00 },
	{ 0x0627, 0x00 },
	{ 0x0628, 0x00 },
	{ 0x0629, 0x00 },
	{ 0x062A, 0x02 },
	{ 0x062B, 0x01 },
	{ 0x062C, 0x0F },
	{ 0x062D, 0x03 },
	{ 0x062E, 0x00 },
	{ 0x062F, 0x00 },
	{ 0x0631, 0x00 },
	{ 0x0632, 0x00 },
	{ 0x0633, 0x04 },
	{ 0x0634, 0x00 },
	{ 0x0635, 0x01 },
	{ 0x0636, 0x04 },
	{ 0x0637, 0x00 },
	{ 0x0638, 0x00 },
	{ 0x0639, 0x00 },
	{ 0x063D, 0x0A },
	{ 0x063E, 0x06 },
	{ 0x0688, 0x00 },
	{ 0x0689, 0x0C },
	{ 0x068A, 0x00 },
	{ 0x068B, 0x00 },
	{ 0x068C, 0x00 },
	{ 0x068D, 0x00 },
	{ 0x069B, 0x18 },
	{ 0x069C, 0x0C },
	{ 0x069D, 0x00 },
	{ 0x069E, 0x00 },
	{ 0x069F, 0x00 },
	{ 0x06A0, 0x00 },
	{ 0x06A1, 0x00 },
	{ 0x06A2, 0x00 },
	{ 0x06A4, 0x20 },
	{ 0x06A5, 0x00 },
	{ 0x06A6, 0x00 },
	{ 0x06AC, 0x00 },
	{ 0x06AD, 0x00 },
	{ 0x06AE, 0x00 },
	{ 0x06B1, 0x00 },
	{ 0x06B2, 0x00 },
	{ 0x0702, 0x01 },
	{ 0x0709, 0x00 },
	{ 0x070A, 0x00 },
	{ 0x070B, 0x00 },
	{ 0x070C, 0x00 },
	{ 0x070D, 0x00 },
	{ 0x070E, 0x00 },
	{ 0x070F, 0x00 },
	{ 0x0710, 0x00 },
	{ 0x0711, 0x00 },
	{ 0x0712, 0x00 },
	{ 0x0713, 0x00 },
	{ 0x0714, 0x00 },
	{ 0x0716, 0x00 },
	{ 0x0717, 0x00 },
	{ 0x0718, 0x00 },
	{ 0x0719, 0x00 },
	{ 0x071A, 0x00 },
	{ 0x071B, 0x00 },
	{ 0x071C, 0x00 },
	{ 0x071D, 0x00 },
	{ 0x071E, 0x00 },
	{ 0x071F, 0x00 },
	{ 0x0720, 0x00 },
	{ 0x0722, 0x2B },
	{ 0x0723, 0x01 },
	{ 0x0724, 0x00 },
	{ 0x0725, 0x00 },
	{ 0x0726, 0x00 },
	{ 0x0727, 0x00 },
	{ 0x0728, 0x00 },
	{ 0x0729, 0x00 },
	{ 0x072A, 0x00 },
	{ 0x072B, 0x00 },
	{ 0x072C, 0x01 },
	{ 0x072D, 0x0F },
	{ 0x072E, 0x03 },
	{ 0x072F, 0x00 },
	{ 0x0730, 0x00 },
	{ 0x0732, 0x00 },
	{ 0x0733, 0x00 },
	{ 0x0734, 0x04 },
	{ 0x0735, 0x00 },
	{ 0x0737, 0x06 },
	{ 0x0738, 0x00 },
	{ 0x0739, 0x00 },
	{ 0x073A, 0x00 },
	{ 0x073E, 0x0A },
	{ 0x073F, 0x06 },
	{ 0x0788, 0x00 },
	{ 0x0789, 0x0C },
	{ 0x078A, 0x00 },
	{ 0x078B, 0x00 },
	{ 0x078C, 0x00 },
	{ 0x078D, 0x00 },
	{ 0x079B, 0x18 },
	{ 0x079C, 0x0C },
	{ 0x079D, 0x00 },
	{ 0x079E, 0x00 },
	{ 0x079F, 0x00 },
	{ 0x07A0, 0x00 },
	{ 0x07A1, 0x00 },
	{ 0x07A2, 0x00 },
	{ 0x07A4, 0x20 },
	{ 0x07A5, 0x00 },
	{ 0x07A6, 0x00 },
	{ 0x07AC, 0x00 },
	{ 0x07AD, 0x00 },
	{ 0x07AE, 0x00 },
	{ 0x07B1, 0x00 },
	{ 0x07B2, 0x00 },
	{ 0x0802, 0x35 },
	{ 0x0803, 0x06 },
	{ 0x0804, 0x01 },
	{ 0x0805, 0x53 },
	{ 0x0806, 0x0B },
	{ 0x0807, 0x10 },
	{ 0x0808, 0x00 },
	{ 0x0809, 0x00 },
	{ 0x080A, 0x00 },
	{ 0x080B, 0x00 },
	{ 0x080C, 0x00 },
	{ 0x080D, 0x00 },
	{ 0x080E, 0x00 },
	{ 0x080F, 0x00 },
	{ 0x0810, 0x00 },
	{ 0x0811, 0x00 },
	{ 0x0812, 0x00 },
	{ 0x0813, 0x00 },
	{ 0x0814, 0x00 },
	{ 0x0815, 0x00 },
	{ 0x0816, 0x00 },
	{ 0x0817, 0x00 },
	{ 0x0818, 0x00 },
	{ 0x0819, 0x00 },
	{ 0x081A, 0x00 },
	{ 0x081B, 0x00 },
	{ 0x081C, 0x00 },
	{ 0x081D, 0x00 },
	{ 0x081E, 0x00 },
	{ 0x081F, 0x00 },
	{ 0x0820, 0x00 },
	{ 0x0821, 0x00 },
	{ 0x0822, 0x00 },
	{ 0x0823, 0x00 },
	{ 0x0824, 0x00 },
	{ 0x0825, 0x00 },
	{ 0x0826, 0x00 },
	{ 0x0827, 0x00 },
	{ 0x0828, 0x00 },
	{ 0x0829, 0x00 },
	{ 0x082A, 0x00 },
	{ 0x082B, 0x00 },
	{ 0x082C, 0x00 },
	{ 0x082D, 0x00 },
	{ 0x082E, 0x00 },
	{ 0x082F, 0x00 },
	{ 0x0830, 0x00 },
	{ 0x0831, 0x00 },
	{ 0x0832, 0x00 },
	{ 0x0833, 0x00 },
	{ 0x0834, 0x00 },
	{ 0x0835, 0x00 },
	{ 0x0836, 0x00 },
	{ 0x0837, 0x00 },
	{ 0x0838, 0x00 },
	{ 0x0839, 0x00 },
	{ 0x083A, 0x00 },
	{ 0x083B, 0x00 },
	{ 0x083C, 0x00 },
	{ 0x083D, 0x00 },
	{ 0x083E, 0x00 },
	{ 0x083F, 0x00 },
	{ 0x0840, 0x00 },
	{ 0x0841, 0x00 },
	{ 0x0842, 0x00 },
	{ 0x0843, 0x00 },
	{ 0x0844, 0x00 },
	{ 0x0845, 0x00 },
	{ 0x0846, 0x00 },
	{ 0x0847, 0x00 },
	{ 0x0848, 0x00 },
	{ 0x0849, 0x00 },
	{ 0x084A, 0x00 },
	{ 0x084B, 0x00 },
	{ 0x084C, 0x00 },
	{ 0x084D, 0x00 },
	{ 0x084E, 0x00 },
	{ 0x084F, 0x00 },
	{ 0x0850, 0x00 },
	{ 0x0851, 0x00 },
	{ 0x0852, 0x00 },
	{ 0x0853, 0x00 },
	{ 0x0854, 0x00 },
	{ 0x0855, 0x00 },
	{ 0x0856, 0x00 },
	{ 0x0857, 0x00 },
	{ 0x0858, 0x00 },
	{ 0x0859, 0x00 },
	{ 0x085A, 0x00 },
	{ 0x085B, 0x00 },
	{ 0x085C, 0x00 },
	{ 0x085D, 0x00 },
	{ 0x085E, 0x00 },
	{ 0x085F, 0x00 },
	{ 0x0860, 0x00 },
	{ 0x0861, 0x00 },
	{ 0x090E, 0x03 },
	{ 0x0943, 0x01 },
	{ 0x0949, 0x03 },
	{ 0x094A, 0x03 },
	{ 0x094E, 0x49 },
	{ 0x094F, 0xF2 },
	{ 0x095E, 0x00 },
	{ 0x0A02, 0x00 },
	{ 0x0A03, 0x06 },
	{ 0x0A04, 0x00 },
	{ 0x0A05, 0x06 },
	{ 0x0A1A, 0x00 },
	{ 0x0A2C, 0x00 },
	{ 0x0A3C, 0x00 },
	{ 0x0A3D, 0x00 },
	{ 0x0A3E, 0x00 },
	{ 0x0A48, 0x00 },
	{ 0x0A49, 0x00 },
	{ 0x0A4A, 0x00 },
	{ 0x0A50, 0x00 },
	{ 0x0A51, 0x00 },
	{ 0x0A52, 0x00 },
	{ 0x0A53, 0x00 },
	{ 0x0A5C, 0x00 },
	{ 0x0A5D, 0x00 },
	{ 0x0A5E, 0x00 },
	{ 0x0A5F, 0x00 },
	{ 0x0B44, 0x2F },
	{ 0x0B45, 0x09 },
	{ 0x0B46, 0x00 },
	{ 0x0B47, 0x0C },
	{ 0x0B48, 0x0C },
	{ 0x0B4A, 0x19 },
	{ 0x0B53, 0x10 },
	{ 0x0B57, 0xF0 },
	{ 0x0B58, 0x00 },
	{ 0x0C02, 0x03 },
	{ 0x0C03, 0x03 },
	{ 0x0C05, 0x00 },
	{ 0x0C06, 0x00 },
	{ 0x0C07, 0x01 },
	{ 0x0C08, 0x01 },
	{ 0x0C09, 0x00 },
	{ 0x0C0A, 0x00 },
	{ 0x0C0B, 0x00 },
	{ 0x0C0C, 0x00 },
	/* End configuration registers */

	/* Start configuration postamble */
	{ 0x0514, 0x01 },
	{ 0x001C, 0x01 },
	{ 0x0540, 0x00 },
	{ 0x0B24, 0xC3 },
	{ 0x0B25, 0x06 },
	/* End configuration postamble */

};

/*
 * Design Report
 *
 * Overview
 * ========
 * 
 * Part:               Si5381A Rev E
 * Project File:       D:\ZCU670\Proyectos\Si5381_clock_test\Si5381A-zcu670_Test.slabtimeproj
 * Design ID:          ZCU670_c
 * Created By:         ClockBuilder Pro v4.11.0.1 [2023-09-14]
 * Timestamp:          2024-05-15 12:36:12 GMT+02:00
 * 
 * Design Rule Check
 * =================
 * 
 * Errors:
 * - No errors
 * 
 * Warnings:
 * - No warnings
 * 
 * Design
 * ======
 * Host Interface:
 *    I/O Power Supply: VDDA (3.3V)
 *    SPI Mode: 4-Wire
 *    I2C Address Range: 104d to 107d / 0x68 to 0x6B (selected via A0/A1 pins)
 * 
 * Reference:
 *    54 MHz (XO - Oscillator)
 * 
 * Inputs:
 *     IN0: 7.68 MHz
 *          Standard Differential and Single-ended
 *          DSPLL B
 *     IN1: 122.88 MHz
 *          Standard Differential and Single-ended
 *          DSPLL B
 *     IN2: Unused
 *     IN3: Unused
 * 
 * Outputs:
 *   OUT0A: 500 MHz
 *          Enabled, Custom 1.8 V, Normal Differential, CM 0.8 V, AMPL 920 mVpp_se
 *          DSPLL B
 *    OUT0: Unused
 *    OUT1: Unused
 *    OUT2: Unused
 *    OUT3: 500 MHz
 *          Enabled, Custom 1.8 V, Normal Differential, CM 0.8 V, AMPL 920 mVpp_se
 *          DSPLL B
 *    OUT4: Unused
 *    OUT5: Unused
 *    OUT6: 26 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL C (Free Run)
 *    OUT7: Unused
 *    OUT8: Unused
 *    OUT9: Unused
 *   OUT9A: Unused
 * 
 * Output Enable:
 *   OUT0A: OE0
 *    OUT0: OE0
 *    OUT1: OE0
 *    OUT2: OE0
 *    OUT3: OE0
 *    OUT4: OE0
 *    OUT5: OE0
 *    OUT6: OE0
 *    OUT7: OE0
 *    OUT8: OE0
 *    OUT9: OE0
 *   OUT9A: OE0
 * 
 * Frequency Plan
 * ==============
 * 
 * Fvco = 14.7456 GHz
 * Fms1 = 1 GHz
 * MXAXB = 273.0666666666666666... [ 273 + 1/15 ]
 * 
 * DSPLL A is not used
 * DSPLL B:
 *    Fpfd = 1.92 MHz
 *    MB = 1536
 *    N1 = 14.7456
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  42.959 Hz
 *      Coefficients:
 *         BW0:  14
 *         BW1:  28
 *         BW2:  13
 *         BW3:  12
 *         BW4:  63
 *         BW5:  31
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  688.086 Hz
 *      Coefficients:
 *         BW0:  18
 *         BW1:  38
 *         BW2:  9
 *         BW3:  8
 *         BW4:  63
 *         BW5:  31
 *    Holdover Bandwidth:
 *       N/A (Ramped Exit from Holdover)
 * DSPLL C:
 *    Free run only mode enabled
 *    Fdco = 728 MHz
 * DSPLL D is not used
 * 
 * P dividers:
 *    P0  = 4
 *    P1  = 64
 *    P2  = Unused
 *    P3  = Unused
 *    Pxaxb = 1
 * 
 * N dividers:
 *    N0:
 *       Unused
 *    N1:
 *       Value: 14.7456
 *       OUT0A: 500 MHz on DSPLL B
 *       OUT3: 500 MHz on DSPLL B
 *    N2:
 *       Value: 20.2549450549450549... [ 20 + 116/455 ]
 *       OUT6: 26 MHz on DSPLL C
 *    N3:
 *       Unused
 *    N4:
 *       Unused
 * 
 * R dividers:
 *    R0A = 2
 *    R0 = Unused
 *    R1 = Unused
 *    R2 = Unused
 *    R3 = 2
 *    R4 = Unused
 *    R5 = Unused
 *    R6 = 28
 *    R7 = Unused
 *    R8 = Unused
 *    R9 = Unused
 *    R9A = Unused
 * 
 * Dividers listed above show effective values. These values are translated to register settings by ClockBuilder Pro. For the actual register values, see below. Refer to the Family Reference Manual for information on registers related to frequency plan.
 * 
 * Hitless Input Switching Assistant
 * =================================
 * DSPLL A: Assistant N/A
 * 
 * DSPLL B: Assistant Disabled
 * 
 * DSPLL C: Assistant N/A
 * 
 * DSPLL D: Assistant N/A
 * 
 * Output Skew Control
 * ===================
 * N1: 14.7456
 * 
 *    OUT0A 500 MHz
 *          Static O/O Skew Adjust:   0.000 ps
 *          Relative Static O/O Skew: 0 ps 
 *    OUT3  500 MHz
 *          Static O/O Skew Adjust:   0.000 ps
 *          Relative Static O/O Skew: 0 ps 
 * 
 *    N1_DELAY:                      0x0 0d (Twos compliment div 256)
 *    N1_IODELAY_STEP:               0x0 0d
 *    N1_IODELAY_COUNT:              0x0 0d
 *    N1_IODELAY_INC:                0x0
 *    N1_IODELAY_DEC:                0x0
 * 
 *    Desired Dynamic Skew Step:  ±0.000 ps
 *    Actual Dynamic Skew Step:   ±0 ps
 *    N1_PHASE_STEP:                 0x0 0d
 *    N1_PHASE_COUNT:                0x0 0d
 * 
 *    Use N1_PHASE_INC and N1_PHASE_DEC to perform phase step.
 * 
 * N4 Not Used
 * 
 * CBPro will, within device limits, align outputs to a common clock edge. The 
 * static offset value entered in CBPro is relative to this automatic alignment 
 * and is therefore labeled output-to-output offset.
 * 
 * When aligning outputs, CBPro takes into account VCO frequency, input buffer 
 * mode, output format, assigned N divider, and R divider values. Due to the 
 * automatic alignment, static skew registers Nx_DELAY, Nx_IODELAY_STEP, and 
 * Nx_IODELAY_COUNT will normally be non-zero even when you have 0.0 output-to-
 * output skew configured.
 * 
 * Estimated Power & Junction Temperature
 * ======================================
 * Assumptions:
 * 
 * VDD:      1.8 V
 * Ta:       25 °C
 * Theta-JA: 18.30 °C/W (JEDEC Board with 2 m/s airflow)
 * 
 *                                  Overall  On Chip
 * Condition                        Power    Power    Ta    Tj
 * -------------------------------  -------  -------  ----  -----
 * Typical Ta, Voltage, Current     918 mW   873 mW   25 C  40 C
 * Worst-Case Ta, Voltage, Current  1.247 W  1.200 W  85 C  106 C
 * 
 *                                   -----------------------  -----------------------
 *                                           Typical                Worst-Case       
 *                                   -----------------------  -----------------------
 *                                   Voltage  Current  Power  Voltage  Current  Power  Current
 *        Output  Frequency  Format    (V)     (mA)    (mW)     (V)     (mA)    (mW)    Delta 
 *        ------  ---------  ------  -------  -------  -----  -------  -------  -----  -------
 * VDD                                  1.80      197    355     1.89      329    622    66.9%
 * VDDA                                 3.30      131    432     3.47      139    482     6.2%
 * VDDO0  OUT0A     500 MHz  Custom Differential     1.80       28     51     1.89       29     56     3.5%
 *        OUT0       Unused             3.5%
 * VDDO1  OUT1       Unused        
 * VDDO2  OUT2       Unused        
 * VDDO3  OUT3      500 MHz  Custom Differential     1.80       28     51     1.89       29     56     3.5%
 * VDDO4  OUT4       Unused        
 * VDDO5  OUT5       Unused        
 * VDDO6  OUT6       26 MHz    LVDS     1.80       16     28     1.89       16     31     4.6%
 * VDDO7  OUT7       Unused        
 * VDDO8  OUT8       Unused        
 * VDDO9  OUT9       Unused        
 *        OUT9A      Unused        
 *                                   -------  -------  -----  -------  -------  -----  -------
 *                                      1.80      270    485     1.89      404    764    50.0%
 *                                      3.30      131    432     3.47      139    482     6.2%
 *                                   -------  -------  -----  -------  -------  -----  -------
 *                                     Total             918    Total           1,247
 *                                   -------  -------  -----  -------  -------  -----  -------
 * 
 * Note:
 * 
 * - Tj is junction temperature. Tj must be less than 125 °C (on Si5381 Revision
 *   E) for device to comply with datasheet specifications. Tj = Ta +
 *   Theta_JA*On_Chip_Power.
 * - Overall power includes on-chip power dissipation and adds differential load
 *   power dissipation to estimate total power requirements.
 * - Above are estimates only: power and temperature should be measured on your
 *   PCB.
 * - Selection of appropriate Theta-JA is required for most accurate estimate.
 *   Ideally, select 'User Specified Theta-JA' and enter a Theta-JA value based
 *   on the thermal properties of your PCB.
 * - The 'Worst - Case' condition assumes the maximum Ta = 85 °C operating
 *   temperature with all supplies at Nominal+5% voltage. It also takes into
 *   account increased leakage current possible at the extremes of normal process
 *   variation. It is expected that this combination of conditions will be very
 *   unlikely to occur, and is provided to give guidance for maximum current
 *   requirements.
 * 
 * Settings
 * ========
 * 
 * Location      Setting Name                Decimal Value      Hex Value        
 * ------------  --------------------------  -----------------  -----------------
 * 0x0006[23:0]  TOOL_VERSION                0                  0x000000         
 * 0x000B[6:0]   I2C_ADDR                    104                0x68             
 * 0x0016[0]     LOL_ON_HOLD_PLLA            1                  0x1              
 * 0x0016[1]     LOL_ON_HOLD_PLLB            1                  0x1              
 * 0x0016[2]     LOL_ON_HOLD_PLLC            1                  0x1              
 * 0x0016[3]     LOL_ON_HOLD_PLLD            1                  0x1              
 * 0x0017[0]     SYSINCAL_INTR_MSK           0                  0x0              
 * 0x0017[1]     LOSXAXB_INTR_MSK            0                  0x0              
 * 0x0017[2]     LOSREF_INTR_MSK             1                  0x1              
 * 0x0017[3]     XAXB_ERR_INTR_MSK           1                  0x1              
 * 0x0017[5]     SMB_TMOUT_INTR_MSK          0                  0x0              
 * 0x0018[3:0]   LOS_INTR_MSK                12                 0xC              
 * 0x0018[7:4]   OOF_INTR_MSK                12                 0xC              
 * 0x0019[0]     LOL_INTR_MSK_PLLA           1                  0x1              
 * 0x0019[1]     LOL_INTR_MSK_PLLB           0                  0x0              
 * 0x0019[2]     LOL_INTR_MSK_PLLC           1                  0x1              
 * 0x0019[3]     LOL_INTR_MSK_PLLD           1                  0x1              
 * 0x0019[4]     HOLD_INTR_MSK_PLLA          1                  0x1              
 * 0x0019[5]     HOLD_INTR_MSK_PLLB          0                  0x0              
 * 0x0019[6]     HOLD_INTR_MSK_PLLC          1                  0x1              
 * 0x0019[7]     HOLD_INTR_MSK_PLLD          1                  0x1              
 * 0x001A[4]     CAL_INTR_MSK_PLLA           1                  0x1              
 * 0x001A[5]     CAL_INTR_MSK_PLLB           0                  0x0              
 * 0x001A[6]     CAL_INTR_MSK_PLLC           1                  0x1              
 * 0x001A[7]     CAL_INTR_MSK_PLLD           1                  0x1              
 * 0x0020[1]     FSTEP_PLL_REGCTRL           1                  0x1              
 * 0x0020[3:2]   FSTEP_PLL                   0                  0x0              
 * 0x0023[11:0]  OE0_PIN_MSK                 4095               0xFFF            
 * 0x0025[11:0]  SLAB_OE1_PIN2DRV            0                  0x000            
 * 0x0027[11:0]  SLAB_OE2_PIN2DRV            0                  0x000            
 * 0x002B[3]     SPI_3WIRE                   0                  0x0              
 * 0x002C[3:0]   LOS_EN                      3                  0x3              
 * 0x002C[4]     LOSXAXB_DIS                 0                  0x0              
 * 0x002D[1:0]   LOS0_VAL_TIME               0                  0x0              
 * 0x002D[3:2]   LOS1_VAL_TIME               0                  0x0              
 * 0x002D[5:4]   LOS2_VAL_TIME               0                  0x0              
 * 0x002D[7:6]   LOS3_VAL_TIME               0                  0x0              
 * 0x002E[15:0]  LOS0_TRG_THR                62                 0x003E           
 * 0x0030[15:0]  LOS1_TRG_THR                62                 0x003E           
 * 0x0032[15:0]  LOS2_TRG_THR                0                  0x0000           
 * 0x0034[15:0]  LOS3_TRG_THR                0                  0x0000           
 * 0x0036[15:0]  LOS0_CLR_THR                2                  0x0002           
 * 0x0038[15:0]  LOS1_CLR_THR                2                  0x0002           
 * 0x003A[15:0]  LOS2_CLR_THR                0                  0x0000           
 * 0x003C[15:0]  LOS3_CLR_THR                0                  0x0000           
 * 0x003E[7:4]   LOS_MIN_PERIOD_EN           3                  0x3              
 * 0x003F[3:0]   OOF_EN                      3                  0x3              
 * 0x003F[7:4]   FAST_OOF_EN                 3                  0x3              
 * 0x0040[2:0]   OOF_REF_SEL                 4                  0x4              
 * 0x0041[4:0]   OOF0_DIV_SEL                9                  0x09             
 * 0x0042[4:0]   OOF1_DIV_SEL                13                 0x0D             
 * 0x0043[4:0]   OOF2_DIV_SEL                0                  0x00             
 * 0x0044[4:0]   OOF3_DIV_SEL                0                  0x00             
 * 0x0045[4:0]   OOFXO_DIV_SEL               12                 0x0C             
 * 0x0046[7:0]   OOF0_SET_THR                50                 0x32             
 * 0x0047[7:0]   OOF1_SET_THR                50                 0x32             
 * 0x0048[7:0]   OOF2_SET_THR                0                  0x00             
 * 0x0049[7:0]   OOF3_SET_THR                0                  0x00             
 * 0x004A[7:0]   OOF0_CLR_THR                50                 0x32             
 * 0x004B[7:0]   OOF1_CLR_THR                50                 0x32             
 * 0x004C[7:0]   OOF2_CLR_THR                0                  0x00             
 * 0x004D[7:0]   OOF3_CLR_THR                0                  0x00             
 * 0x004E[2:0]   OOF0_DETWIN_SEL             5                  0x5              
 * 0x004E[6:4]   OOF1_DETWIN_SEL             5                  0x5              
 * 0x004F[2:0]   OOF2_DETWIN_SEL             0                  0x0              
 * 0x004F[6:4]   OOF3_DETWIN_SEL             0                  0x0              
 * 0x0050[3:0]   OOF_ON_LOS                  15                 0xF              
 * 0x0051[3:0]   FAST_OOF0_SET_THR           3                  0x3              
 * 0x0052[3:0]   FAST_OOF1_SET_THR           3                  0x3              
 * 0x0053[3:0]   FAST_OOF2_SET_THR           0                  0x0              
 * 0x0054[3:0]   FAST_OOF3_SET_THR           0                  0x0              
 * 0x0055[3:0]   FAST_OOF0_CLR_THR           3                  0x3              
 * 0x0056[3:0]   FAST_OOF1_CLR_THR           3                  0x3              
 * 0x0057[3:0]   FAST_OOF2_CLR_THR           0                  0x0              
 * 0x0058[3:0]   FAST_OOF3_CLR_THR           0                  0x0              
 * 0x0059[1:0]   FAST_OOF0_DETWIN_SEL        1                  0x1              
 * 0x0059[3:2]   FAST_OOF1_DETWIN_SEL        1                  0x1              
 * 0x0059[5:4]   FAST_OOF2_DETWIN_SEL        0                  0x0              
 * 0x0059[7:6]   FAST_OOF3_DETWIN_SEL        0                  0x0              
 * 0x005A[25:0]  OOF0_RATIO_REF              19088743           0x1234567        
 * 0x005E[25:0]  OOF1_RATIO_REF              19088743           0x1234567        
 * 0x0062[25:0]  OOF2_RATIO_REF              0                  0x0000000        
 * 0x0066[25:0]  OOF3_RATIO_REF              0                  0x0000000        
 * 0x0092[0]     LOL_FST_EN_PLLA             0                  0x0              
 * 0x0092[1]     LOL_FST_EN_PLLB             1                  0x1              
 * 0x0092[2]     LOL_FST_EN_PLLC             0                  0x0              
 * 0x0092[3]     LOL_FST_EN_PLLD             0                  0x0              
 * 0x0093[3:0]   LOL_FST_DETWIN_SEL_PLLA     0                  0x0              
 * 0x0093[7:4]   LOL_FST_DETWIN_SEL_PLLB     10                 0xA              
 * 0x0094[3:0]   LOL_FST_DETWIN_SEL_PLLC     0                  0x0              
 * 0x0094[7:4]   LOL_FST_DETWIN_SEL_PLLD     0                  0x0              
 * 0x0095[1:0]   LOL_FST_VALWIN_SEL_PLLA     0                  0x0              
 * 0x0095[3:2]   LOL_FST_VALWIN_SEL_PLLB     0                  0x0              
 * 0x0095[5:4]   LOL_FST_VALWIN_SEL_PLLC     0                  0x0              
 * 0x0095[7:6]   LOL_FST_VALWIN_SEL_PLLD     0                  0x0              
 * 0x0096[3:0]   LOL_FST_SET_THR_SEL_PLLA    0                  0x0              
 * 0x0096[7:4]   LOL_FST_SET_THR_SEL_PLLB    8                  0x8              
 * 0x0097[3:0]   LOL_FST_SET_THR_SEL_PLLC    0                  0x0              
 * 0x0097[7:4]   LOL_FST_SET_THR_SEL_PLLD    0                  0x0              
 * 0x0098[3:0]   LOL_FST_CLR_THR_SEL_PLLA    0                  0x0              
 * 0x0098[7:4]   LOL_FST_CLR_THR_SEL_PLLB    6                  0x6              
 * 0x0099[3:0]   LOL_FST_CLR_THR_SEL_PLLC    0                  0x0              
 * 0x0099[7:4]   LOL_FST_CLR_THR_SEL_PLLD    0                  0x0              
 * 0x009A[0]     LOL_SLOW_EN_PLLA            0                  0x0              
 * 0x009A[1]     LOL_SLOW_EN_PLLB            1                  0x1              
 * 0x009A[2]     LOL_SLOW_EN_PLLC            0                  0x0              
 * 0x009A[3]     LOL_SLOW_EN_PLLD            0                  0x0              
 * 0x009B[3:0]   LOL_SLW_DETWIN_SEL_PLLA     0                  0x0              
 * 0x009B[7:4]   LOL_SLW_DETWIN_SEL_PLLB     4                  0x4              
 * 0x009C[3:0]   LOL_SLW_DETWIN_SEL_PLLC     0                  0x0              
 * 0x009C[7:4]   LOL_SLW_DETWIN_SEL_PLLD     0                  0x0              
 * 0x009D[1:0]   LOL_SLW_VALWIN_SEL_PLLA     0                  0x0              
 * 0x009D[3:2]   LOL_SLW_VALWIN_SEL_PLLB     3                  0x3              
 * 0x009D[5:4]   LOL_SLW_VALWIN_SEL_PLLC     0                  0x0              
 * 0x009D[7:6]   LOL_SLW_VALWIN_SEL_PLLD     0                  0x0              
 * 0x009E[3:0]   LOL_SLW_SET_THR_PLLA        0                  0x0              
 * 0x009E[7:4]   LOL_SLW_SET_THR_PLLB        4                  0x4              
 * 0x009F[3:0]   LOL_SLW_SET_THR_PLLC        0                  0x0              
 * 0x009F[7:4]   LOL_SLW_SET_THR_PLLD        0                  0x0              
 * 0x00A0[3:0]   LOL_SLW_CLR_THR_PLLA        0                  0x0              
 * 0x00A0[7:4]   LOL_SLW_CLR_THR_PLLB        2                  0x2              
 * 0x00A1[3:0]   LOL_SLW_CLR_THR_PLLC        0                  0x0              
 * 0x00A1[7:4]   LOL_SLW_CLR_THR_PLLD        0                  0x0              
 * 0x00A2[0]     LOL_TIMER_EN_PLLA           0                  0x0              
 * 0x00A2[1]     LOL_TIMER_EN_PLLB           0                  0x0              
 * 0x00A2[2]     LOL_TIMER_EN_PLLC           0                  0x0              
 * 0x00A2[3]     LOL_TIMER_EN_PLLD           0                  0x0              
 * 0x00A4[28:0]  LOL_CLR_DELAY_DIV256_PLLA   0                  0x00000000       
 * 0x00A9[28:0]  LOL_CLR_DELAY_DIV256_PLLB   1574401            0x00180601       
 * 0x00AE[28:0]  LOL_CLR_DELAY_DIV256_PLLC   0                  0x00000000       
 * 0x00B3[28:0]  LOL_CLR_DELAY_DIV256_PLLD   0                  0x00000000       
 * 0x00E5[0]     FASTLOCK_EXTEND_MASTER_DIS  0                  0x0              
 * 0x00E5[4]     FASTLOCK_EXTEND_EN_PLLA     0                  0x0              
 * 0x00E5[5]     FASTLOCK_EXTEND_EN_PLLB     0                  0x0              
 * 0x00E5[6]     FASTLOCK_EXTEND_EN_PLLC     0                  0x0              
 * 0x00E5[7]     FASTLOCK_EXTEND_EN_PLLD     0                  0x0              
 * 0x00E6[28:0]  FASTLOCK_EXTEND_PLLA        0                  0x00000000       
 * 0x00EA[28:0]  FASTLOCK_EXTEND_PLLB        1573547            0x001802AB       
 * 0x00EE[28:0]  FASTLOCK_EXTEND_PLLC        0                  0x00000000       
 * 0x00F2[28:0]  FASTLOCK_EXTEND_PLLD        0                  0x00000000       
 * 0x0102[0]     OUTALL_DISABLE_LOW          1                  0x1              
 * 0x0103[0]     OUT0A_PDN                   0                  0x0              
 * 0x0103[1]     OUT0A_OE                    1                  0x1              
 * 0x0103[2]     OUT0A_RDIV_FORCE            1                  0x1              
 * 0x0103[3]     OUT0A_DIV2_BYP              0                  0x0              
 * 0x0104[2:0]   OUT0A_FORMAT                1                  0x1              
 * 0x0104[3]     OUT0A_SYNC_EN               1                  0x1              
 * 0x0104[5:4]   OUT0A_DIS_STATE             0                  0x0              
 * 0x0104[7:6]   OUT0A_CMOS_DRV              0                  0x0              
 * 0x0105[3:0]   OUT0A_CM                    13                 0xD              
 * 0x0105[6:4]   OUT0A_AMPL                  7                  0x7              
 * 0x0106[2:0]   OUT0A_MUX_SEL               1                  0x1              
 * 0x0106[5:4]   OUT0A_VDD_SEL               1                  0x1              
 * 0x0106[3]     OUT0A_VDD_SEL_EN            1                  0x1              
 * 0x0106[7:6]   OUT0A_INV                   0                  0x0              
 * 0x0107[2:0]   OUT0A_DIS_SRC               2                  0x2              
 * 0x0108[0]     OUT0_PDN                    1                  0x1              
 * 0x0108[1]     OUT0_OE                     0                  0x0              
 * 0x0108[2]     OUT0_RDIV_FORCE             0                  0x0              
 * 0x0108[3]     OUT0_DIV2_BYP               0                  0x0              
 * 0x0109[2:0]   OUT0_FORMAT                 1                  0x1              
 * 0x0109[3]     OUT0_SYNC_EN                1                  0x1              
 * 0x0109[5:4]   OUT0_DIS_STATE              0                  0x0              
 * 0x0109[7:6]   OUT0_CMOS_DRV               0                  0x0              
 * 0x010A[3:0]   OUT0_CM                     14                 0xE              
 * 0x010A[6:4]   OUT0_AMPL                   3                  0x3              
 * 0x010B[2:0]   OUT0_MUX_SEL                0                  0x0              
 * 0x010B[5:4]   OUT0_VDD_SEL                1                  0x1              
 * 0x010B[3]     OUT0_VDD_SEL_EN             1                  0x1              
 * 0x010B[7:6]   OUT0_INV                    0                  0x0              
 * 0x010C[2:0]   OUT0_DIS_SRC                2                  0x2              
 * 0x010D[0]     OUT1_PDN                    1                  0x1              
 * 0x010D[1]     OUT1_OE                     0                  0x0              
 * 0x010D[2]     OUT1_RDIV_FORCE2            0                  0x0              
 * 0x010D[3]     OUT1_DIV2_BYP               0                  0x0              
 * 0x010E[2:0]   OUT1_FORMAT                 1                  0x1              
 * 0x010E[3]     OUT1_SYNC_EN                1                  0x1              
 * 0x010E[5:4]   OUT1_DIS_STATE              0                  0x0              
 * 0x010E[7:6]   OUT1_CMOS_DRV               0                  0x0              
 * 0x010F[3:0]   OUT1_CM                     14                 0xE              
 * 0x010F[6:4]   OUT1_AMPL                   3                  0x3              
 * 0x0110[2:0]   OUT1_MUX_SEL                0                  0x0              
 * 0x0110[5:4]   OUT1_VDD_SEL                1                  0x1              
 * 0x0110[3]     OUT1_VDD_SEL_EN             1                  0x1              
 * 0x0110[7:6]   OUT1_INV                    0                  0x0              
 * 0x0111[2:0]   OUT1_DIS_SRC                2                  0x2              
 * 0x0112[0]     OUT2_PDN                    1                  0x1              
 * 0x0112[1]     OUT2_OE                     0                  0x0              
 * 0x0112[2]     OUT2_RDIV_FORCE2            0                  0x0              
 * 0x0112[3]     OUT2_DIV2_BYP               0                  0x0              
 * 0x0113[2:0]   OUT2_FORMAT                 1                  0x1              
 * 0x0113[3]     OUT2_SYNC_EN                1                  0x1              
 * 0x0113[5:4]   OUT2_DIS_STATE              0                  0x0              
 * 0x0113[7:6]   OUT2_CMOS_DRV               0                  0x0              
 * 0x0114[3:0]   OUT2_CM                     11                 0xB              
 * 0x0114[6:4]   OUT2_AMPL                   3                  0x3              
 * 0x0115[2:0]   OUT2_MUX_SEL                0                  0x0              
 * 0x0115[5:4]   OUT2_VDD_SEL                2                  0x2              
 * 0x0115[3]     OUT2_VDD_SEL_EN             1                  0x1              
 * 0x0115[7:6]   OUT2_INV                    0                  0x0              
 * 0x0116[2:0]   OUT2_DIS_SRC                2                  0x2              
 * 0x0117[0]     OUT3_PDN                    0                  0x0              
 * 0x0117[1]     OUT3_OE                     1                  0x1              
 * 0x0117[2]     OUT3_RDIV_FORCE2            1                  0x1              
 * 0x0117[3]     OUT3_DIV2_BYP               0                  0x0              
 * 0x0118[2:0]   OUT3_FORMAT                 1                  0x1              
 * 0x0118[3]     OUT3_SYNC_EN                1                  0x1              
 * 0x0118[5:4]   OUT3_DIS_STATE              0                  0x0              
 * 0x0118[7:6]   OUT3_CMOS_DRV               0                  0x0              
 * 0x0119[3:0]   OUT3_CM                     13                 0xD              
 * 0x0119[6:4]   OUT3_AMPL                   7                  0x7              
 * 0x011A[2:0]   OUT3_MUX_SEL                1                  0x1              
 * 0x011A[5:4]   OUT3_VDD_SEL                1                  0x1              
 * 0x011A[3]     OUT3_VDD_SEL_EN             1                  0x1              
 * 0x011A[7:6]   OUT3_INV                    0                  0x0              
 * 0x011B[2:0]   OUT3_DIS_SRC                2                  0x2              
 * 0x011C[0]     OUT4_PDN                    1                  0x1              
 * 0x011C[1]     OUT4_OE                     0                  0x0              
 * 0x011C[2]     OUT4_RDIV_FORCE2            0                  0x0              
 * 0x011C[3]     OUT4_DIV2_BYP               0                  0x0              
 * 0x011D[2:0]   OUT4_FORMAT                 1                  0x1              
 * 0x011D[3]     OUT4_SYNC_EN                1                  0x1              
 * 0x011D[5:4]   OUT4_DIS_STATE              0                  0x0              
 * 0x011D[7:6]   OUT4_CMOS_DRV               0                  0x0              
 * 0x011E[3:0]   OUT4_CM                     14                 0xE              
 * 0x011E[6:4]   OUT4_AMPL                   3                  0x3              
 * 0x011F[2:0]   OUT4_MUX_SEL                0                  0x0              
 * 0x011F[5:4]   OUT4_VDD_SEL                1                  0x1              
 * 0x011F[3]     OUT4_VDD_SEL_EN             1                  0x1              
 * 0x011F[7:6]   OUT4_INV                    0                  0x0              
 * 0x0120[2:0]   OUT4_DIS_SRC                2                  0x2              
 * 0x0121[0]     OUT5_PDN                    1                  0x1              
 * 0x0121[1]     OUT5_OE                     0                  0x0              
 * 0x0121[2]     OUT5_RDIV_FORCE2            0                  0x0              
 * 0x0121[3]     OUT5_DIV2_BYP               0                  0x0              
 * 0x0122[2:0]   OUT5_FORMAT                 1                  0x1              
 * 0x0122[3]     OUT5_SYNC_EN                1                  0x1              
 * 0x0122[5:4]   OUT5_DIS_STATE              0                  0x0              
 * 0x0122[7:6]   OUT5_CMOS_DRV               0                  0x0              
 * 0x0123[3:0]   OUT5_CM                     14                 0xE              
 * 0x0123[6:4]   OUT5_AMPL                   3                  0x3              
 * 0x0124[2:0]   OUT5_MUX_SEL                0                  0x0              
 * 0x0124[5:4]   OUT5_VDD_SEL                1                  0x1              
 * 0x0124[3]     OUT5_VDD_SEL_EN             1                  0x1              
 * 0x0124[7:6]   OUT5_INV                    0                  0x0              
 * 0x0125[2:0]   OUT5_DIS_SRC                2                  0x2              
 * 0x0126[0]     OUT6_PDN                    0                  0x0              
 * 0x0126[1]     OUT6_OE                     1                  0x1              
 * 0x0126[2]     OUT6_RDIV_FORCE2            0                  0x0              
 * 0x0126[3]     OUT6_DIV2_BYP               0                  0x0              
 * 0x0127[2:0]   OUT6_FORMAT                 1                  0x1              
 * 0x0127[3]     OUT6_SYNC_EN                1                  0x1              
 * 0x0127[5:4]   OUT6_DIS_STATE              0                  0x0              
 * 0x0127[7:6]   OUT6_CMOS_DRV               0                  0x0              
 * 0x0128[3:0]   OUT6_CM                     14                 0xE              
 * 0x0128[6:4]   OUT6_AMPL                   3                  0x3              
 * 0x0129[2:0]   OUT6_MUX_SEL                2                  0x2              
 * 0x0129[5:4]   OUT6_VDD_SEL                1                  0x1              
 * 0x0129[3]     OUT6_VDD_SEL_EN             1                  0x1              
 * 0x0129[7:6]   OUT6_INV                    0                  0x0              
 * 0x012A[2:0]   OUT6_DIS_SRC                3                  0x3              
 * 0x012B[0]     OUT7_PDN                    1                  0x1              
 * 0x012B[1]     OUT7_OE                     0                  0x0              
 * 0x012B[2]     OUT7_RDIV_FORCE2            0                  0x0              
 * 0x012B[3]     OUT7_DIV2_BYP               0                  0x0              
 * 0x012C[2:0]   OUT7_FORMAT                 1                  0x1              
 * 0x012C[3]     OUT7_SYNC_EN                1                  0x1              
 * 0x012C[5:4]   OUT7_DIS_STATE              0                  0x0              
 * 0x012C[7:6]   OUT7_CMOS_DRV               0                  0x0              
 * 0x012D[3:0]   OUT7_CM                     14                 0xE              
 * 0x012D[6:4]   OUT7_AMPL                   3                  0x3              
 * 0x012E[2:0]   OUT7_MUX_SEL                0                  0x0              
 * 0x012E[5:4]   OUT7_VDD_SEL                1                  0x1              
 * 0x012E[3]     OUT7_VDD_SEL_EN             1                  0x1              
 * 0x012E[7:6]   OUT7_INV                    0                  0x0              
 * 0x012F[2:0]   OUT7_DIS_SRC                2                  0x2              
 * 0x0130[0]     OUT8_PDN                    1                  0x1              
 * 0x0130[1]     OUT8_OE                     0                  0x0              
 * 0x0130[2]     OUT8_RDIV_FORCE2            0                  0x0              
 * 0x0130[3]     OUT8_DIV2_BYP               0                  0x0              
 * 0x0131[2:0]   OUT8_FORMAT                 4                  0x4              
 * 0x0131[3]     OUT8_SYNC_EN                1                  0x1              
 * 0x0131[5:4]   OUT8_DIS_STATE              0                  0x0              
 * 0x0131[7:6]   OUT8_CMOS_DRV               3                  0x3              
 * 0x0132[3:0]   OUT8_CM                     0                  0x0              
 * 0x0132[6:4]   OUT8_AMPL                   0                  0x0              
 * 0x0133[2:0]   OUT8_MUX_SEL                0                  0x0              
 * 0x0133[5:4]   OUT8_VDD_SEL                1                  0x1              
 * 0x0133[3]     OUT8_VDD_SEL_EN             1                  0x1              
 * 0x0133[7:6]   OUT8_INV                    0                  0x0              
 * 0x0134[2:0]   OUT8_DIS_SRC                2                  0x2              
 * 0x0135[0]     OUT9_PDN                    1                  0x1              
 * 0x0135[1]     OUT9_OE                     0                  0x0              
 * 0x0135[2]     OUT9_RDIV_FORCE2            0                  0x0              
 * 0x0135[3]     OUT9_DIV2_BYP               0                  0x0              
 * 0x0136[2:0]   OUT9_FORMAT                 1                  0x1              
 * 0x0136[3]     OUT9_SYNC_EN                1                  0x1              
 * 0x0136[5:4]   OUT9_DIS_STATE              0                  0x0              
 * 0x0136[7:6]   OUT9_CMOS_DRV               0                  0x0              
 * 0x0137[3:0]   OUT9_CM                     14                 0xE              
 * 0x0137[6:4]   OUT9_AMPL                   3                  0x3              
 * 0x0138[2:0]   OUT9_MUX_SEL                0                  0x0              
 * 0x0138[5:4]   OUT9_VDD_SEL                1                  0x1              
 * 0x0138[3]     OUT9_VDD_SEL_EN             1                  0x1              
 * 0x0138[7:6]   OUT9_INV                    0                  0x0              
 * 0x0139[2:0]   OUT9_DIS_SRC                2                  0x2              
 * 0x013A[0]     OUT9A_PDN                   1                  0x1              
 * 0x013A[1]     OUT9A_OE                    0                  0x0              
 * 0x013A[2]     OUT9A_RDIV_FORCE2           0                  0x0              
 * 0x013A[3]     OUT9A_DIV2_BYP              0                  0x0              
 * 0x013B[2:0]   OUT9A_FORMAT                1                  0x1              
 * 0x013B[3]     OUT9A_SYNC_EN               1                  0x1              
 * 0x013B[5:4]   OUT9A_DIS_STATE             0                  0x0              
 * 0x013B[7:6]   OUT9A_CMOS_DRV              0                  0x0              
 * 0x013C[3:0]   OUT9A_CM                    14                 0xE              
 * 0x013C[6:4]   OUT9A_AMPL                  3                  0x3              
 * 0x013D[2:0]   OUT9A_MUX_SEL               0                  0x0              
 * 0x013D[5:4]   OUT9A_VDD_SEL               1                  0x1              
 * 0x013D[3]     OUT9A_VDD_SEL_EN            1                  0x1              
 * 0x013D[7:6]   OUT9A_INV                   0                  0x0              
 * 0x013E[2:0]   OUT9A_DIS_SRC               2                  0x2              
 * 0x013F[11:0]  OUTX_ALWAYS_ON              0                  0x000            
 * 0x0141[0]     OUT_DIS_MSK_PLLA            0                  0x0              
 * 0x0141[1]     OUT_DIS_MSK_PLLB            0                  0x0              
 * 0x0141[2]     OUT_DIS_MSK_PLLC            0                  0x0              
 * 0x0141[3]     OUT_DIS_MSK_PLLD            0                  0x0              
 * 0x0141[5]     OUT_DIS_LOL_MSK             0                  0x0              
 * 0x0141[6]     OUT_DIS_LOSXAXB_MSK         1                  0x1              
 * 0x0141[7]     OUT_DIS_MSK_LOS_PFD         0                  0x0              
 * 0x0142[0]     OUT_DIS_MSK_LOL_PLLA        1                  0x1              
 * 0x0142[1]     OUT_DIS_MSK_LOL_PLLB        1                  0x1              
 * 0x0142[2]     OUT_DIS_MSK_LOL_PLLC        1                  0x1              
 * 0x0142[3]     OUT_DIS_MSK_LOL_PLLD        1                  0x1              
 * 0x0142[4]     OUT_DIS_MSK_HOLD_PLLA       1                  0x1              
 * 0x0142[5]     OUT_DIS_MSK_HOLD_PLLB       1                  0x1              
 * 0x0142[6]     OUT_DIS_MSK_HOLD_PLLC       1                  0x1              
 * 0x0142[7]     OUT_DIS_MSK_HOLD_PLLD       1                  0x1              
 * 0x0208[47:0]  P0_NUM                      4                  0x000000000004   
 * 0x020E[31:0]  P0_DEN                      1                  0x00000001       
 * 0x0212[47:0]  P1_NUM                      64                 0x000000000040   
 * 0x0218[31:0]  P1_DEN                      1                  0x00000001       
 * 0x021C[47:0]  P2_NUM                      0                  0x000000000000   
 * 0x0222[31:0]  P2_DEN                      0                  0x00000000       
 * 0x0226[47:0]  P3_NUM                      0                  0x000000000000   
 * 0x022C[31:0]  P3_DEN                      0                  0x00000000       
 * 0x0231[4]     P0_FRACN_EN                 0                  0x0              
 * 0x0232[4]     P1_FRACN_EN                 0                  0x0              
 * 0x0233[4]     P2_FRACN_EN                 0                  0x0              
 * 0x0234[4]     P3_FRACN_EN                 0                  0x0              
 * 0x0235[43:0]  MXAXB_NUM                   1099511627776      0x10000000000    
 * 0x023B[31:0]  MXAXB_DEN                   4026531840         0xF0000000       
 * 0x0247[23:0]  R0A_REG                     0                  0x000000         
 * 0x024A[23:0]  R0_REG                      0                  0x000000         
 * 0x024D[23:0]  R1_REG                      0                  0x000000         
 * 0x0250[23:0]  R2_REG                      0                  0x000000         
 * 0x0253[23:0]  R3_REG                      0                  0x000000         
 * 0x0256[23:0]  R4_REG                      0                  0x000000         
 * 0x0259[23:0]  R5_REG                      0                  0x000000         
 * 0x025C[23:0]  R6_REG                      13                 0x00000D         
 * 0x025F[23:0]  R7_REG                      0                  0x000000         
 * 0x0262[23:0]  R8_REG                      0                  0x000000         
 * 0x0265[23:0]  R9_REG                      0                  0x000000         
 * 0x0268[23:0]  R9A_REG                     0                  0x000000         
 * 0x026B[7:0]   DESIGN_ID0                  90                 0x5A             
 * 0x026C[7:0]   DESIGN_ID1                  67                 0x43             
 * 0x026D[7:0]   DESIGN_ID2                  85                 0x55             
 * 0x026E[7:0]   DESIGN_ID3                  54                 0x36             
 * 0x026F[7:0]   DESIGN_ID4                  55                 0x37             
 * 0x0270[7:0]   DESIGN_ID5                  48                 0x30             
 * 0x0271[7:0]   DESIGN_ID6                  95                 0x5F             
 * 0x0272[7:0]   DESIGN_ID7                  99                 0x63             
 * 0x028A[4:0]   OOF0_TRG_THR_EXT            0                  0x00             
 * 0x028B[4:0]   OOF1_TRG_THR_EXT            0                  0x00             
 * 0x028C[4:0]   OOF2_TRG_THR_EXT            0                  0x00             
 * 0x028D[4:0]   OOF3_TRG_THR_EXT            0                  0x00             
 * 0x028E[4:0]   OOF0_CLR_THR_EXT            0                  0x00             
 * 0x028F[4:0]   OOF1_CLR_THR_EXT            0                  0x00             
 * 0x0290[4:0]   OOF2_CLR_THR_EXT            0                  0x00             
 * 0x0291[4:0]   OOF3_CLR_THR_EXT            0                  0x00             
 * 0x0292[3:0]   OOF_STOP_ON_LOS             15                 0xF              
 * 0x0293[3:0]   OOF_CLEAR_ON_LOS            15                 0xF              
 * 0x0294[3:0]   FASTLOCK_EXTEND_SCL_PLLA    8                  0x8              
 * 0x0294[7:4]   FASTLOCK_EXTEND_SCL_PLLB    6                  0x6              
 * 0x0295[3:0]   FASTLOCK_EXTEND_SCL_PLLC    8                  0x8              
 * 0x0295[7:4]   FASTLOCK_EXTEND_SCL_PLLD    8                  0x8              
 * 0x0296[0]     LOL_SLW_VALWIN_SELX_PLLA    0                  0x0              
 * 0x0296[1]     LOL_SLW_VALWIN_SELX_PLLB    1                  0x1              
 * 0x0296[2]     LOL_SLW_VALWIN_SELX_PLLC    0                  0x0              
 * 0x0296[3]     LOL_SLW_VALWIN_SELX_PLLD    0                  0x0              
 * 0x0297[0]     FASTLOCK_DLY_ONSW_EN_PLLA   0                  0x0              
 * 0x0297[1]     FASTLOCK_DLY_ONSW_EN_PLLB   1                  0x1              
 * 0x0297[2]     FASTLOCK_DLY_ONSW_EN_PLLC   0                  0x0              
 * 0x0297[3]     FASTLOCK_DLY_ONSW_EN_PLLD   0                  0x0              
 * 0x0299[0]     FASTLOCK_DLY_ONLOL_EN_PLLA  0                  0x0              
 * 0x0299[1]     FASTLOCK_DLY_ONLOL_EN_PLLB  1                  0x1              
 * 0x0299[2]     FASTLOCK_DLY_ONLOL_EN_PLLC  0                  0x0              
 * 0x0299[3]     FASTLOCK_DLY_ONLOL_EN_PLLD  0                  0x0              
 * 0x029A[19:0]  FASTLOCK_DLY_ONLOL_PLLA     0                  0x00000          
 * 0x029D[19:0]  FASTLOCK_DLY_ONLOL_PLLB     29736              0x07428          
 * 0x02A0[19:0]  FASTLOCK_DLY_ONLOL_PLLC     0                  0x00000          
 * 0x02A3[19:0]  FASTLOCK_DLY_ONLOL_PLLD     0                  0x00000          
 * 0x02A6[19:0]  FASTLOCK_DLY_ONSW_PLLA      0                  0x00000          
 * 0x02A9[19:0]  FASTLOCK_DLY_ONSW_PLLB      78643              0x13333          
 * 0x02AC[19:0]  FASTLOCK_DLY_ONSW_PLLC      0                  0x00000          
 * 0x02AF[19:0]  FASTLOCK_DLY_ONSW_PLLD      0                  0x00000          
 * 0x02B7[1:0]   LOL_NOSIG_TIME_PLLA         3                  0x3              
 * 0x02B7[3:2]   LOL_NOSIG_TIME_PLLB         3                  0x3              
 * 0x02B7[5:4]   LOL_NOSIG_TIME_PLLC         3                  0x3              
 * 0x02B7[7:6]   LOL_NOSIG_TIME_PLLD         3                  0x3              
 * 0x02BC[7:6]   LOS_CMOS_MIN_PER_EN         0                  0x0              
 * 0x0302[43:0]  N0_NUM                      0                  0x00000000000    
 * 0x0308[31:0]  N0_DEN                      0                  0x00000000       
 * 0x030C[0]     N0_UPDATE                   0                  0x0              
 * 0x030D[43:0]  N1_NUM                      38654705664        0x00900000000    
 * 0x0313[31:0]  N1_DEN                      2621440000         0x9C400000       
 * 0x0317[0]     N1_UPDATE                   0                  0x0              
 * 0x0318[43:0]  N2_NUM                      77309411328        0x01200000000    
 * 0x031E[31:0]  N2_DEN                      3816816640         0xE3800000       
 * 0x0322[0]     N2_UPDATE                   0                  0x0              
 * 0x0323[43:0]  N3_NUM                      0                  0x00000000000    
 * 0x0329[31:0]  N3_DEN                      0                  0x00000000       
 * 0x032D[0]     N3_UPDATE                   0                  0x0              
 * 0x032E[43:0]  N4_NUM                      0                  0x00000000000    
 * 0x0334[31:0]  N4_DEN                      0                  0x00000000       
 * 0x0338[0]     N4_UPDATE                   0                  0x0              
 * 0x0338[1]     N_UPDATE                    0                  0x0              
 * 0x033B[43:0]  N0_FSTEPW                   0                  0x00000000000    
 * 0x0347[43:0]  N2_FSTEPW                   0                  0x00000000000    
 * 0x034D[43:0]  N3_FSTEPW                   0                  0x00000000000    
 * 0x035B[15:0]  N1_DELAY                    0                  0x0000           
 * 0x0361[15:0]  N4_DELAY                    0                  0x0000           
 * 0x0408[5:0]   BW0_PLLA                    0                  0x00             
 * 0x0409[5:0]   BW1_PLLA                    0                  0x00             
 * 0x040A[5:0]   BW2_PLLA                    0                  0x00             
 * 0x040B[5:0]   BW3_PLLA                    0                  0x00             
 * 0x040C[5:0]   BW4_PLLA                    0                  0x00             
 * 0x040D[5:0]   BW5_PLLA                    0                  0x00             
 * 0x040E[5:0]   FASTLOCK_BW0_PLLA           0                  0x00             
 * 0x040F[5:0]   FASTLOCK_BW1_PLLA           0                  0x00             
 * 0x0410[5:0]   FASTLOCK_BW2_PLLA           0                  0x00             
 * 0x0411[5:0]   FASTLOCK_BW3_PLLA           0                  0x00             
 * 0x0412[5:0]   FASTLOCK_BW4_PLLA           0                  0x00             
 * 0x0413[5:0]   FASTLOCK_BW5_PLLA           0                  0x00             
 * 0x0415[55:0]  M_NUM_PLLA                  0                  0x00000000000000 
 * 0x041C[31:0]  M_DEN_PLLA                  0                  0x00000000       
 * 0x0421[3:0]   M_FRAC_MODE_PLLA            11                 0xB              
 * 0x0421[4]     M_FRAC_EN_PLLA              0                  0x0              
 * 0x0422[0]     M_FSTEP_MSK_PLLA            1                  0x1              
 * 0x0422[1]     M_FSTEPW_DEN_PLLA           0                  0x0              
 * 0x0423[55:0]  M_FSTEPW_PLLA               0                  0x00000000000000 
 * 0x042A[2:0]   IN_SEL_PLLA                 0                  0x0              
 * 0x042B[0]     FASTLOCK_AUTO_EN_PLLA       1                  0x1              
 * 0x042B[1]     FASTLOCK_MAN_PLLA           0                  0x0              
 * 0x042C[0]     HOLD_EN_PLLA                1                  0x1              
 * 0x042C[3]     HOLD_RAMP_BYP_PLLA          1                  0x1              
 * 0x042C[4]     HOLDEXIT_BW_SEL1_PLLA       0                  0x0              
 * 0x042C[7:5]   RAMP_STEP_INTERVAL_PLLA     0                  0x0              
 * 0x042D[1]     HOLD_RAMPBYP_NOHIST_PLLA    1                  0x1              
 * 0x042E[4:0]   HOLD_HIST_LEN_PLLA          0                  0x00             
 * 0x042F[4:0]   HOLD_HIST_DELAY_PLLA        0                  0x00             
 * 0x0431[4:0]   HOLD_REF_COUNT_FRC_PLLA     0                  0x00             
 * 0x0432[23:0]  HOLD_15M_CYC_COUNT_PLLA     1024               0x000400         
 * 0x0436[1:0]   CLK_SWITCH_MODE_PLLA        2                  0x2              
 * 0x0436[2]     HSW_EN_PLLA                 1                  0x1              
 * 0x0437[3:0]   IN_LOS_MSK_PLLA             0                  0x0              
 * 0x0437[7:4]   IN_OOF_MSK_PLLA             0                  0x0              
 * 0x0438[2:0]   IN0_PRIORITY_PLLA           0                  0x0              
 * 0x0438[6:4]   IN1_PRIORITY_PLLA           0                  0x0              
 * 0x0439[2:0]   IN2_PRIORITY_PLLA           0                  0x0              
 * 0x0439[6:4]   IN3_PRIORITY_PLLA           0                  0x0              
 * 0x043D[4:0]   HSW_COARSE_PM_LEN_PLLA      10                 0x0A             
 * 0x043E[4:0]   HSW_COARSE_PM_DLY_PLLA      6                  0x06             
 * 0x0487[0]     ZDM_EN                      0                  0x0              
 * 0x0487[2:1]   ZDM_IN_SEL                  0                  0x0              
 * 0x0487[4]     ZDM_AUTOSW_EN               0                  0x0              
 * 0x0488[3:0]   HSW_FINE_PM_LEN_PLLA        0                  0x0              
 * 0x0489[12:0]  PFD_EN_DELAY_PLLA           0                  0x0000           
 * 0x048B[19:0]  HSW_MEAS_SETTLE_PLLA        0                  0x00000          
 * 0x049B[1]     INIT_LP_CLOSE_HO_PLLA       0                  0x0              
 * 0x049B[4]     HOLD_PRESERVE_HIST_PLLA     1                  0x1              
 * 0x049B[5]     HOLD_FRZ_WITH_INTONLY_PLLA  0                  0x0              
 * 0x049B[6]     HOLDEXIT_BW_SEL0_PLLA       0                  0x0              
 * 0x049B[7]     HOLDEXIT_STD_BO_PLLA        0                  0x0              
 * 0x049C[6]     HOLDEXIT_ST_BO_PLLA         1                  0x1              
 * 0x049C[7]     HOLD_RAMPBP_NOHIST_PLLA     0                  0x0              
 * 0x049D[5:0]   BW0_HO_PLLA                 0                  0x00             
 * 0x049E[5:0]   BW1_HO_PLLA                 0                  0x00             
 * 0x049F[5:0]   BW2_HO_PLLA                 0                  0x00             
 * 0x04A0[5:0]   BW3_HO_PLLA                 0                  0x00             
 * 0x04A1[5:0]   BW4_HO_PLLA                 0                  0x00             
 * 0x04A2[5:0]   BW5_HO_PLLA                 0                  0x00             
 * 0x04A4[7:0]   HSW_LIMIT_PLLA              32                 0x20             
 * 0x04A5[0]     HSW_LIMIT_ACTION_PLLA       0                  0x0              
 * 0x04A6[2:0]   RAMP_STEP_SIZE_PLLA         0                  0x0              
 * 0x04A6[3]     RAMP_SWITCH_EN_PLLA         0                  0x0              
 * 0x04AC[0]     OUT_MAX_LIMIT_EN_PLLA       0                  0x0              
 * 0x04AC[3]     HOLD_SETTLE_DET_EN_PLLA     0                  0x0              
 * 0x04AD[15:0]  OUT_MAX_LIMIT_LMT_PLLA      0                  0x0000           
 * 0x04B1[15:0]  HOLD_SETTLE_TARGET_PLLA     0                  0x0000           
 * 0x0508[5:0]   BW0_PLLB                    14                 0x0E             
 * 0x0509[5:0]   BW1_PLLB                    28                 0x1C             
 * 0x050A[5:0]   BW2_PLLB                    13                 0x0D             
 * 0x050B[5:0]   BW3_PLLB                    12                 0x0C             
 * 0x050C[5:0]   BW4_PLLB                    63                 0x3F             
 * 0x050D[5:0]   BW5_PLLB                    31                 0x1F             
 * 0x050E[5:0]   FASTLOCK_BW0_PLLB           18                 0x12             
 * 0x050F[5:0]   FASTLOCK_BW1_PLLB           38                 0x26             
 * 0x0510[5:0]   FASTLOCK_BW2_PLLB           9                  0x09             
 * 0x0511[5:0]   FASTLOCK_BW3_PLLB           8                  0x08             
 * 0x0512[5:0]   FASTLOCK_BW4_PLLB           63                 0x3F             
 * 0x0513[5:0]   FASTLOCK_BW5_PLLB           31                 0x1F             
 * 0x0515[55:0]  M_NUM_PLLB                  3298534883328      0x00030000000000 
 * 0x051C[31:0]  M_DEN_PLLB                  2147483648         0x80000000       
 * 0x0521[3:0]   M_FRAC_MODE_PLLB            11                 0xB              
 * 0x0521[4]     M_FRAC_EN_PLLB              0                  0x0              
 * 0x0521[5]     OUT_RATE_SEL_PLLB           0                  0x0              
 * 0x052A[0]     IN_SEL_REGCTRL_PLLB         0                  0x0              
 * 0x052A[3:1]   IN_SEL_PLLB                 0                  0x0              
 * 0x052B[0]     FASTLOCK_AUTO_EN_PLLB       0                  0x0              
 * 0x052B[1]     FASTLOCK_MAN_PLLB           0                  0x0              
 * 0x052C[0]     HOLD_EN_PLLB                1                  0x1              
 * 0x052C[3]     HOLD_RAMP_BYP_PLLB          0                  0x0              
 * 0x052C[4]     HOLDEXIT_BW_SEL1_PLLB       0                  0x0              
 * 0x052C[7:5]   RAMP_STEP_INTERVAL_PLLB     4                  0x4              
 * 0x052D[1]     HOLD_RAMPBYP_NOHIST_PLLB    1                  0x1              
 * 0x052E[4:0]   HOLD_HIST_LEN_PLLB          25                 0x19             
 * 0x052F[4:0]   HOLD_HIST_DELAY_PLLB        25                 0x19             
 * 0x0531[4:0]   HOLD_REF_COUNT_FRC_PLLB     0                  0x00             
 * 0x0532[23:0]  HOLD_15M_CYC_COUNT_PLLB     869                0x000365         
 * 0x0536[1:0]   CLK_SWITCH_MODE_PLLB        2                  0x2              
 * 0x0536[2]     HSW_EN_PLLB                 0                  0x0              
 * 0x0537[3:0]   IN_LOS_MSK_PLLB             0                  0x0              
 * 0x0537[7:4]   IN_OOF_MSK_PLLB             0                  0x0              
 * 0x0538[2:0]   IN0_PRIORITY_PLLB           1                  0x1              
 * 0x0538[6:4]   IN1_PRIORITY_PLLB           2                  0x2              
 * 0x0539[2:0]   IN2_PRIORITY_PLLB           0                  0x0              
 * 0x0539[6:4]   IN3_PRIORITY_PLLB           0                  0x0              
 * 0x053A[1:0]   HSW_MODE_PLLB               1                  0x1              
 * 0x053A[3:2]   HSW_PHMEAS_CTRL_PLLB        0                  0x0              
 * 0x053B[9:0]   HSW_PHMEAS_THR_PLLB         3                  0x003            
 * 0x053D[4:0]   HSW_COARSE_PM_LEN_PLLB      4                  0x04             
 * 0x053E[4:0]   HSW_COARSE_PM_DLY_PLLB      2                  0x02             
 * 0x0588[3:0]   HSW_FINE_PM_LEN_PLLB        7                  0x7              
 * 0x0589[12:0]  PFD_EN_DELAY_PLLB           13                 0x000D           
 * 0x058B[19:0]  HSW_MEAS_SETTLE_PLLB        44693              0x0AE95          
 * 0x059B[1]     INIT_LP_CLOSE_HO_PLLB       1                  0x1              
 * 0x059B[4]     HOLD_PRESERVE_HIST_PLLB     1                  0x1              
 * 0x059B[5]     HOLD_FRZ_WITH_INTONLY_PLLB  1                  0x1              
 * 0x059B[6]     HOLDEXIT_BW_SEL0_PLLB       1                  0x1              
 * 0x059B[7]     HOLDEXIT_STD_BO_PLLB        0                  0x0              
 * 0x059C[6]     HOLDEXIT_ST_BO_PLLB         0                  0x0              
 * 0x059C[7]     HOLD_RAMPBP_NOHIST_PLLB     1                  0x1              
 * 0x059D[5:0]   HOLDEXIT_BW0_PLLB           14                 0x0E             
 * 0x059E[5:0]   HOLDEXIT_BW1_PLLB           30                 0x1E             
 * 0x059F[5:0]   HOLDEXIT_BW2_PLLB           13                 0x0D             
 * 0x05A0[5:0]   HOLDEXIT_BW3_PLLB           12                 0x0C             
 * 0x05A1[5:0]   HOLDEXIT_BW4_PLLB           63                 0x3F             
 * 0x05A2[5:0]   HOLDEXIT_BW5_PLLB           31                 0x1F             
 * 0x05A4[7:0]   HSW_LIMIT_PLLB              8                  0x08             
 * 0x05A5[0]     HSW_LIMIT_ACTION_PLLB       0                  0x0              
 * 0x05A6[2:0]   RAMP_STEP_SIZE_PLLB         3                  0x3              
 * 0x05A6[3]     RAMP_SWITCH_EN_PLLB         0                  0x0              
 * 0x05AC[0]     OUT_MAX_LIMIT_EN_PLLB       1                  0x1              
 * 0x05AC[3]     HOLD_SETTLE_DET_EN_DSPLLB   1                  0x1              
 * 0x05AD[15:0]  OUT_MAX_LIMIT_LMT_PLLB      17895              0x45E7           
 * 0x05B1[15:0]  HOLD_SETTLE_TARGET_PLLB     733                0x02DD           
 * 0x0602[4]     ADD_DIV256_PLLC             0                  0x0              
 * 0x0608[5:0]   BW0_PLLC                    0                  0x00             
 * 0x0609[5:0]   BW1_PLLC                    0                  0x00             
 * 0x060A[5:0]   BW2_PLLC                    0                  0x00             
 * 0x060B[5:0]   BW3_PLLC                    0                  0x00             
 * 0x060C[5:0]   BW4_PLLC                    0                  0x00             
 * 0x060D[5:0]   BW5_PLLC                    0                  0x00             
 * 0x060E[5:0]   FASTLOCK_BW0_PLLC           0                  0x00             
 * 0x060F[5:0]   FASTLOCK_BW1_PLLC           0                  0x00             
 * 0x0610[5:0]   FASTLOCK_BW2_PLLC           0                  0x00             
 * 0x0611[5:0]   FASTLOCK_BW3_PLLC           0                  0x00             
 * 0x0612[5:0]   FASTLOCK_BW4_PLLC           0                  0x00             
 * 0x0613[5:0]   FASTLOCK_BW5_PLLC           0                  0x00             
 * 0x0615[55:0]  M_NUM_PLLC                  0                  0x00000000000000 
 * 0x061C[31:0]  M_DEN_PLLC                  0                  0x00000000       
 * 0x0621[3:0]   M_FRAC_MODE_PLLC            11                 0xB              
 * 0x0621[4]     M_FRAC_EN_PLLC              0                  0x0              
 * 0x0621[5]     OUT_RATE_SEL_PLLC           1                  0x1              
 * 0x0622[0]     M_FSTEP_MSK_PLLC            1                  0x1              
 * 0x0622[1]     M_FSTEPW_DEN_PLLC           0                  0x0              
 * 0x0623[55:0]  M_FSTEPW_PLLC               0                  0x00000000000000 
 * 0x062A[2:0]   IN_SEL_PLLC                 2                  0x2              
 * 0x062B[0]     FASTLOCK_AUTO_EN_PLLC       1                  0x1              
 * 0x062B[1]     FASTLOCK_MAN_PLLC           0                  0x0              
 * 0x062C[0]     HOLD_EN_PLLC                1                  0x1              
 * 0x062C[3]     HOLD_RAMP_BYP_PLLC          1                  0x1              
 * 0x062C[4]     HOLDEXIT_BW_SEL1_PLLC       0                  0x0              
 * 0x062C[7:5]   RAMP_STEP_INTERVAL_PLLC     0                  0x0              
 * 0x062D[1]     HOLD_RAMPBYP_NOHIST_PLLC    1                  0x1              
 * 0x062E[4:0]   HOLD_HIST_LEN_PLLC          0                  0x00             
 * 0x062F[4:0]   HOLD_HIST_DELAY_PLLC        0                  0x00             
 * 0x0631[4:0]   HOLD_REF_COUNT_FRC_PLLC     0                  0x00             
 * 0x0632[23:0]  HOLD_15M_CYC_COUNT_PLLC     1024               0x000400         
 * 0x0635[0]     FORCE_HOLD_PLLC             1                  0x1              
 * 0x0636[1:0]   CLK_SWITCH_MODE_PLLC        0                  0x0              
 * 0x0636[2]     HSW_EN_PLLC                 1                  0x1              
 * 0x0637[3:0]   IN_LOS_MSK_PLLC             0                  0x0              
 * 0x0637[7:4]   IN_OOF_MSK_PLLC             0                  0x0              
 * 0x0638[2:0]   IN0_PRIORITY_PLLC           0                  0x0              
 * 0x0638[6:4]   IN1_PRIORITY_PLLC           0                  0x0              
 * 0x0639[2:0]   IN2_PRIORITY_PLLC           0                  0x0              
 * 0x0639[6:4]   IN3_PRIORITY_PLLC           0                  0x0              
 * 0x063D[4:0]   HSW_COARSE_PM_LEN_PLLC      10                 0x0A             
 * 0x063E[4:0]   HSW_COARSE_PM_DLY_PLLC      6                  0x06             
 * 0x0688[3:0]   HSW_FINE_PM_LEN_PLLC        0                  0x0              
 * 0x0689[12:0]  PFD_EN_DELAY_PLLC           12                 0x000C           
 * 0x068B[19:0]  HSW_MEAS_SETTLE_PLLC        0                  0x00000          
 * 0x069B[1]     INIT_LP_CLOSE_HO_PLLC       0                  0x0              
 * 0x069B[4]     HOLD_PRESERVE_HIST_PLLC     1                  0x1              
 * 0x069B[5]     HOLD_FRZ_WITH_INTONLY_PLLC  0                  0x0              
 * 0x069B[6]     HOLDEXIT_BW_SEL0_PLLC       0                  0x0              
 * 0x069B[7]     HOLDEXIT_STD_BO_PLLC        0                  0x0              
 * 0x069C[6]     HOLDEXIT_ST_BO_PLLC         0                  0x0              
 * 0x069C[7]     HOLD_RAMPPB_NOHIST_PLLC     0                  0x0              
 * 0x069D[5:0]   HOLDEXIT_BW0_PLLC           0                  0x00             
 * 0x069E[5:0]   HOLDEXIT_BW1_PLLC           0                  0x00             
 * 0x069F[5:0]   HOLDEXIT_BW2_PLLC           0                  0x00             
 * 0x06A0[5:0]   HOLDEXIT_BW3_PLLC           0                  0x00             
 * 0x06A1[5:0]   HOLDEXIT_BW4_PLLC           0                  0x00             
 * 0x06A2[5:0]   HOLDEXIT_BW5_PLLC           0                  0x00             
 * 0x06A4[7:0]   HSW_LIMIT_PLLC              32                 0x20             
 * 0x06A5[0]     HSW_LIMIT_ACTION_PLLC       0                  0x0              
 * 0x06A6[2:0]   RAMP_STEP_SIZE_PLLC         0                  0x0              
 * 0x06A6[3]     RAMP_SWITCH_EN_PLLC         0                  0x0              
 * 0x06AC[0]     OUT_MAX_LIMIT_EN_PLLC       0                  0x0              
 * 0x06AC[3]     HOLD_SETTLE_DET_EN_DSPLLC   0                  0x0              
 * 0x06AD[15:0]  OUT_MAX_LIMIT_LMT_DPSLLC    0                  0x0000           
 * 0x06B1[15:0]  HOLD_SETTLE_TARGET_DSPLLC   0                  0x0000           
 * 0x0702[4]     ADD_DIV256_PLLD             0                  0x0              
 * 0x0709[5:0]   BW0_PLLD                    0                  0x00             
 * 0x070A[5:0]   BW1_PLLD                    0                  0x00             
 * 0x070B[5:0]   BW2_PLLD                    0                  0x00             
 * 0x070C[5:0]   BW3_PLLD                    0                  0x00             
 * 0x070D[5:0]   BW4_PLLD                    0                  0x00             
 * 0x070E[5:0]   BW5_PLLD                    0                  0x00             
 * 0x070F[5:0]   FASTLOCK_BW0_PLLD           0                  0x00             
 * 0x0710[5:0]   FASTLOCK_BW1_PLLD           0                  0x00             
 * 0x0711[5:0]   FASTLOCK_BW2_PLLD           0                  0x00             
 * 0x0712[5:0]   FASTLOCK_BW3_PLLD           0                  0x00             
 * 0x0713[5:0]   FASTLOCK_BW4_PLLD           0                  0x00             
 * 0x0714[5:0]   FASTLOCK_BW5_PLLD           0                  0x00             
 * 0x0716[55:0]  M_NUM_PLLD                  0                  0x00000000000000 
 * 0x071D[31:0]  M_DEN_PLLD                  0                  0x00000000       
 * 0x0722[3:0]   M_FRAC_MODE_PLLD            11                 0xB              
 * 0x0722[4]     M_FRAC_EN_PLLD              0                  0x0              
 * 0x0722[5]     OUT_RATE_SEL_PLLD           1                  0x1              
 * 0x0723[0]     M_FSTEP_MSK_PLLD            1                  0x1              
 * 0x0723[1]     M_FSTEPW_DEN_PLLD           0                  0x0              
 * 0x0724[55:0]  M_FSTEPW_PLLD               0                  0x00000000000000 
 * 0x072B[2:0]   IN_SEL_PLLD                 0                  0x0              
 * 0x072C[0]     FASTLOCK_AUTO_EN_PLLD       1                  0x1              
 * 0x072C[1]     FASTLOCK_MAN_PLLD           0                  0x0              
 * 0x072D[0]     HOLD_EN_PLLD                1                  0x1              
 * 0x072D[3]     HOLD_RAMP_BYP_PLLD          1                  0x1              
 * 0x072D[4]     HOLDEXIT_BW_SEL1_PLLD       0                  0x0              
 * 0x072D[7:5]   RAMP_STEP_INTERVAL_PLLD     0                  0x0              
 * 0x072E[1]     HOLD_RAMPBYP_NOHIST_PLLD    1                  0x1              
 * 0x072F[4:0]   HOLD_HIST_LEN_PLLD          0                  0x00             
 * 0x0730[4:0]   HOLD_HIST_DELAY_PLLD        0                  0x00             
 * 0x0732[4:0]   HOLD_REF_COUNT_FRC_PLLD     0                  0x00             
 * 0x0733[23:0]  HOLD_15M_CYC_COUNT_PLLD     1024               0x000400         
 * 0x0737[1:0]   CLK_SWITCH_MODE_PLLD        2                  0x2              
 * 0x0737[2]     HSW_EN_PLLD                 1                  0x1              
 * 0x0738[3:0]   IN_LOS_MSK_PLLD             0                  0x0              
 * 0x0738[7:4]   IN_OOF_MSK_PLLD             0                  0x0              
 * 0x0739[2:0]   IN0_PRIORITY_PLLD           0                  0x0              
 * 0x0739[6:4]   IN1_PRIORITY_PLLD           0                  0x0              
 * 0x073A[2:0]   IN2_PRIORITY_PLLD           0                  0x0              
 * 0x073A[6:4]   IN3_PRIORITY_PLLD           0                  0x0              
 * 0x073E[4:0]   HSW_COARSE_PM_LEN_PLLD      10                 0x0A             
 * 0x073F[4:0]   HSW_COARSE_PM_DLY_PLLD      6                  0x06             
 * 0x0788[3:0]   HSW_FINE_PM_LEN_PLLD        0                  0x0              
 * 0x0789[12:0]  PFD_EN_DELAY_PLLD           12                 0x000C           
 * 0x078B[19:0]  HSW_MEAS_SETTLE_PLLD        0                  0x00000          
 * 0x079B[1]     INIT_LP_CLOSE_HO_PLLD       0                  0x0              
 * 0x079B[4]     HOLD_PRESERVE_HIST_PLLD     1                  0x1              
 * 0x079B[5]     HOLD_FRZ_WITH_INTONLY_PLLD  0                  0x0              
 * 0x079B[6]     HOLDEXIT_BW_SEL0_PLLD       0                  0x0              
 * 0x079B[7]     HOLDEXIT_STD_BO_PLLD        0                  0x0              
 * 0x079C[6]     HOLDEXIT_ST_BO_PLLD         0                  0x0              
 * 0x079C[7]     HOLD_RAMPBP_NOHIST_PLLD     0                  0x0              
 * 0x079D[5:0]   HOLDEXIT_BW0_PLLD           0                  0x00             
 * 0x079E[5:0]   HOLDEXIT_BW1_PLLD           0                  0x00             
 * 0x079F[5:0]   HOLDEXIT_BW2_PLLD           0                  0x00             
 * 0x07A0[5:0]   HOLDEXIT_BW3_PLLD           0                  0x00             
 * 0x07A1[5:0]   HOLDEXIT_BW4_PLLD           0                  0x00             
 * 0x07A2[5:0]   HOLDEXIT_BW5_PLLD           0                  0x00             
 * 0x07A4[7:0]   HSW_LIMIT_PLLD              32                 0x20             
 * 0x07A5[0]     HSW_LIMIT_ACTION_PLLD       0                  0x0              
 * 0x07A6[2:0]   RAMP_STEP_SIZE_PLLD         0                  0x0              
 * 0x07A6[3]     RAMP_SWITCH_EN_PLLD         0                  0x0              
 * 0x07AC[0]     OUT_MAX_LIMIT_EN_PLLD       0                  0x0              
 * 0x07AC[3]     HOLD_SETTLE_DEN_EN_DSPLLD   0                  0x0              
 * 0x07AD[15:0]  OUT_MAX_LIMIT_LMT_PLLD      0                  0x0000           
 * 0x07B1[15:0]  HOLD_SETTLE_TARGET_DSPLLD   0                  0x0000           
 * 0x0802[15:0]  FIXREGSA0                   1589               0x0635           
 * 0x0804[7:0]   FIXREGSD0                   1                  0x01             
 * 0x0805[15:0]  FIXREGSA1                   2899               0x0B53           
 * 0x0807[7:0]   FIXREGSD1                   16                 0x10             
 * 0x0808[15:0]  FIXREGSA2                   0                  0x0000           
 * 0x080A[7:0]   FIXREGSD2                   0                  0x00             
 * 0x080B[15:0]  FIXREGSA3                   0                  0x0000           
 * 0x080D[7:0]   FIXREGSD3                   0                  0x00             
 * 0x080E[15:0]  FIXREGSA4                   0                  0x0000           
 * 0x0810[7:0]   FIXREGSD4                   0                  0x00             
 * 0x0811[15:0]  FIXREGSA5                   0                  0x0000           
 * 0x0813[7:0]   FIXREGSD5                   0                  0x00             
 * 0x0814[15:0]  FIXREGSA6                   0                  0x0000           
 * 0x0816[7:0]   FIXREGSD6                   0                  0x00             
 * 0x0817[15:0]  FIXREGSA7                   0                  0x0000           
 * 0x0819[7:0]   FIXREGSD7                   0                  0x00             
 * 0x081A[15:0]  FIXREGSA8                   0                  0x0000           
 * 0x081C[7:0]   FIXREGSD8                   0                  0x00             
 * 0x081D[15:0]  FIXREGSA9                   0                  0x0000           
 * 0x081F[7:0]   FIXREGSD9                   0                  0x00             
 * 0x0820[15:0]  FIXREGSA10                  0                  0x0000           
 * 0x0822[7:0]   FIXREGSD10                  0                  0x00             
 * 0x0823[15:0]  FIXREGSA11                  0                  0x0000           
 * 0x0825[7:0]   FIXREGSD11                  0                  0x00             
 * 0x0826[15:0]  FIXREGSA12                  0                  0x0000           
 * 0x0828[7:0]   FIXREGSD12                  0                  0x00             
 * 0x0829[15:0]  FIXREGSA13                  0                  0x0000           
 * 0x082B[7:0]   FIXREGSD13                  0                  0x00             
 * 0x082C[15:0]  FIXREGSA14                  0                  0x0000           
 * 0x082E[7:0]   FIXREGSD14                  0                  0x00             
 * 0x082F[15:0]  FIXREGSA15                  0                  0x0000           
 * 0x0831[7:0]   FIXREGSD15                  0                  0x00             
 * 0x0832[15:0]  FIXREGSA16                  0                  0x0000           
 * 0x0834[7:0]   FIXREGSD16                  0                  0x00             
 * 0x0835[15:0]  FIXREGSA17                  0                  0x0000           
 * 0x0837[7:0]   FIXREGSD17                  0                  0x00             
 * 0x0838[15:0]  FIXREGSA18                  0                  0x0000           
 * 0x083A[7:0]   FIXREGSD18                  0                  0x00             
 * 0x083B[15:0]  FIXREGSA19                  0                  0x0000           
 * 0x083D[7:0]   FIXREGSD19                  0                  0x00             
 * 0x083E[15:0]  FIXREGSA20                  0                  0x0000           
 * 0x0840[7:0]   FIXREGSD20                  0                  0x00             
 * 0x0841[15:0]  FIXREGSA21                  0                  0x0000           
 * 0x0843[7:0]   FIXREGSD21                  0                  0x00             
 * 0x0844[15:0]  FIXREGSA22                  0                  0x0000           
 * 0x0846[7:0]   FIXREGSD22                  0                  0x00             
 * 0x0847[15:0]  FIXREGSA23                  0                  0x0000           
 * 0x0849[7:0]   FIXREGSD23                  0                  0x00             
 * 0x084A[15:0]  FIXREGSA24                  0                  0x0000           
 * 0x084C[7:0]   FIXREGSD24                  0                  0x00             
 * 0x084D[15:0]  FIXREGSA25                  0                  0x0000           
 * 0x084F[7:0]   FIXREGSD25                  0                  0x00             
 * 0x0850[15:0]  FIXREGSA26                  0                  0x0000           
 * 0x0852[7:0]   FIXREGSD26                  0                  0x00             
 * 0x0853[15:0]  FIXREGSA27                  0                  0x0000           
 * 0x0855[7:0]   FIXREGSD27                  0                  0x00             
 * 0x0856[15:0]  FIXREGSA28                  0                  0x0000           
 * 0x0858[7:0]   FIXREGSD28                  0                  0x00             
 * 0x0859[15:0]  FIXREGSA29                  0                  0x0000           
 * 0x085B[7:0]   FIXREGSD29                  0                  0x00             
 * 0x085C[15:0]  FIXREGSA30                  0                  0x0000           
 * 0x085E[7:0]   FIXREGSD30                  0                  0x00             
 * 0x085F[15:0]  FIXREGSA31                  0                  0x0000           
 * 0x0861[7:0]   FIXREGSD31                  0                  0x00             
 * 0x090E[0]     XAXB_EXTCLK_EN              1                  0x1              
 * 0x0943[0]     IO_VDD_SEL                  1                  0x1              
 * 0x0949[3:0]   IN_EN                       3                  0x3              
 * 0x0949[7:4]   IN_PULSED_CMOS_EN           0                  0x0              
 * 0x094A[3:0]   INX_TO_PFD_EN               3                  0x3              
 * 0x094E[11:0]  REFCLK_HYS_SEL              585                0x249            
 * 0x094F[7:4]   IN_CMOS_USE1P8              15                 0xF              
 * 0x095E[0]     MXAXB_INTEGER               0                  0x0              
 * 0x0A02[4:0]   N_ADD_0P5                   0                  0x00             
 * 0x0A03[4:0]   N_CLK_TO_OUTX_EN            6                  0x06             
 * 0x0A04[4:0]   N_PIBYP                     0                  0x00             
 * 0x0A05[4:0]   N_PDNB                      6                  0x06             
 * 0x0A1A[3]     N1_LOAD_AUTO_DIS            0                  0x0              
 * 0x0A2C[3]     N4_LOAD_AUTO_DIS            0                  0x0              
 * 0x0A3C[7:0]   N1_PHASE_STEP               0                  0x00             
 * 0x0A3D[15:0]  N1_PHASE_COUNT              0                  0x0000           
 * 0x0A48[7:0]   N4_PHASE_STEP               0                  0x00             
 * 0x0A49[15:0]  N4_PHASE_COUNT              0                  0x0000           
 * 0x0A50[7:0]   N1_IODELAY_STEP             0                  0x00             
 * 0x0A51[15:0]  N1_IODELAY_COUNT            0                  0x0000           
 * 0x0A53[0]     N1_IODELAY_INC              0                  0x0              
 * 0x0A53[1]     N1_IODELAY_DEC              0                  0x0              
 * 0x0A5C[7:0]   N4_IODELAY_STEP             0                  0x00             
 * 0x0A5D[15:0]  N4_IODELAY_COUNT            0                  0x0000           
 * 0x0A5F[0]     N4_IODELAY_INC              0                  0x0              
 * 0x0A5F[1]     N4_IODELAY_DEC              0                  0x0              
 * 0x0B44[3:0]   PDIV_FRACN_CLK_DIS          15                 0xF              
 * 0x0B44[4]     FRACN_CLK_DIS_PLLA          0                  0x0              
 * 0x0B44[5]     FRACN_CLK_DIS_PLLB          1                  0x1              
 * 0x0B44[6]     FRACN_CLK_DIS_PLLC          0                  0x0              
 * 0x0B44[7]     FRACN_CLK_DIS_PLLD          0                  0x0              
 * 0x0B45[0]     CLK_DIS_PLLA                1                  0x1              
 * 0x0B45[1]     CLK_DIS_PLLB                0                  0x0              
 * 0x0B45[2]     CLK_DIS_PLLC                0                  0x0              
 * 0x0B45[3]     CLK_DIS_PLLD                1                  0x1              
 * 0x0B46[3:0]   LOS_CLK_DIS                 0                  0x0              
 * 0x0B47[4:0]   OOF_CLK_DIS                 12                 0x0C             
 * 0x0B48[4:0]   OOF_DIV_CLK_DIS             12                 0x0C             
 * 0x0B4A[4:0]   N_CLK_DIS                   25                 0x19             
 * 0x0B53[4:0]   SR_MASK_STOPCLK             16                 0x10             
 * 0x0B57[11:0]  VCO_RESET_CALCODE           240                0x0F0            
 * 0x0C02[2:0]   VAL_DIV_CTL0                3                  0x3              
 * 0x0C02[4]     VAL_DIV_CTL1                0                  0x0              
 * 0x0C03[3:0]   IN_CLK_VAL_PWR_UP_DIS       3                  0x3              
 * 0x0C05[0]     IN_CLK_VAL_EN_PLLA          0                  0x0              
 * 0x0C06[7:0]   IN_CLK_VAL_TIME_PLLA        0                  0x00             
 * 0x0C07[0]     IN_CLK_VAL_EN_PLLB          1                  0x1              
 * 0x0C08[7:0]   IN_CLK_VAL_TIME_PLLB        1                  0x01             
 * 0x0C09[0]     IN_CLK_VAL_EN_PLLC          0                  0x0              
 * 0x0C0A[7:0]   IN_CLK_VAL_TIME_PLLC        0                  0x00             
 * 0x0C0B[0]     IN_CLK_VAL_EN_PLLD          0                  0x0              
 * 0x0C0C[7:0]   IN_CLK_VAL_TIME_PLLD        0                  0x00
 * 
 *
 */

#endif