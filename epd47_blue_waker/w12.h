const uint32_t w12_width = 70;
const uint32_t w12_height = 60;
const uint8_t w12_data[(70*60)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x43, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x53, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3A, 0x33, 0x33, 0x43, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x33, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0x33, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x33, 0xFA, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEE, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0x3A, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xEF, 0x33, 0xFD, 0xFF, 0xEF, 0x37, 0x53, 0xFE, 0xFF, 0xFF, 0x35, 0xFA, 0xFF, 0xFF, 0x4A, 0x43, 0xFC, 0xFF, 0xFF, 0x37, 0xF7, 0xFF, 0xFF, 0xCF, 0x34, 0x94, 0xFF, 0xFF, 0xCF, 0x43, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x4D, 0x33, 0xD4, 0xFF, 0xFF, 0xBE, 0xE9, 0xFF, 0xFF, 0x5F, 0x33, 0xA3, 0xFF, 0xFF, 0xCF, 0xD9, 0xFF, 0xFF, 0x8F, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0x9D, 0xFB, 0xFF, 0xFF, 0x3C, 0x33, 0xE4, 0xFF, 0xFF, 
	0xFF, 0xEF, 0x34, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x43, 0xFF, 0xFF, 
	0xFF, 0x4F, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xF6, 0xFF, 
	0xFF, 0x3B, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x33, 0x33, 0xE3, 0xFF, 
	0xFF, 0x39, 0x33, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x33, 0xD3, 0xFF, 
	0xFF, 0x3C, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3A, 0x33, 0x33, 0x33, 0xE3, 0xFF, 
	0xFF, 0x5F, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xF8, 0xFF, 
	0xFF, 0xEF, 0x34, 0x33, 0x43, 0xFE, 0xFF, 0xDF, 0xFD, 0xFF, 0xFF, 0x36, 0x33, 0x43, 0xFC, 0xFF, 0xEF, 0xFC, 0xFF, 0xFF, 0x3A, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xCF, 0xFE, 0xFF, 0xDF, 0x34, 0x33, 0x53, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x7F, 0x33, 0xF7, 0xFF, 0xFF, 0x4D, 0xA3, 0xFF, 0xFF, 0xAF, 0x34, 0xE5, 0xFF, 0xFF, 0x5E, 0x73, 0xFF, 0xFF, 0xCF, 0x34, 0xC4, 0xFF, 0xFF, 0xFF, 0x38, 0xE4, 0xFF, 0xFF, 0x6E, 0x43, 0xF9, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xEF, 0xCC, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0xFA, 0xFF, 0xFF, 0xBC, 0xFE, 0xFF, 0xEF, 0x35, 0x33, 0xF7, 0xFF, 0xFF, 0xBD, 0xFD, 0xFF, 0xFF, 0x8F, 0x33, 0x43, 0xFE, 0xFF, 0xEF, 0xCB, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x33, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x34, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x33, 0x33, 0x33, 0x33, 0xFA, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0x33, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x33, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x43, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xBB, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xAF, 0x34, 0x33, 0xC4, 0xFF, 0xFF, 0x9E, 0xFE, 0xFF, 0xFF, 0x4D, 0x33, 0x43, 0xF9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xAF, 0x33, 0xFA, 0xFF, 0xFF, 0x4A, 0x84, 0xFF, 0xFF, 0xDF, 0x34, 0xF7, 0xFF, 0xFF, 0x5C, 0x64, 0xFE, 0xFF, 0xEF, 0x35, 0xE4, 0xFF, 0xFF, 0xEF, 0x46, 0xC5, 0xFF, 0xFF, 0x7F, 0x33, 0xFC, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x3A, 0x33, 0xA3, 0xFF, 0xFF, 0xDF, 0xFD, 0xFF, 0xFF, 0x4C, 0x33, 0x73, 0xFF, 0xFF, 0xEF, 0xED, 0xFF, 0xFF, 0x5E, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xDE, 0xFE, 0xFF, 0xFF, 0x37, 0x33, 0xC3, 0xFF, 0xFF, 
	0xFF, 0xBF, 0x33, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x35, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0xFD, 0xFF, 
	0xFF, 0x3E, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0x33, 0x33, 0x33, 0xF5, 0xFF, 
	0xFF, 0x3A, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x33, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0xD3, 0xFF, 
	0xFF, 0x39, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 0x33, 0x33, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x33, 0xD3, 0xFF, 
	0xFF, 0x3D, 0x33, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x33, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x33, 0xF4, 0xFF, 
	0xFF, 0x8F, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xFB, 0xFF, 
	0xFF, 0xFF, 0x48, 0x33, 0x84, 0xFF, 0xFF, 0x9F, 0xF7, 0xFF, 0xFF, 0x4B, 0x33, 0x63, 0xFE, 0xFF, 0xCF, 0xE6, 0xFF, 0xFF, 0x5D, 0x33, 0x53, 0xFC, 0xFF, 0xFF, 0x6E, 0xFB, 0xFF, 0xEF, 0x36, 0x33, 0xA4, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xAF, 0x44, 0xFB, 0xFF, 0xFF, 0x39, 0x63, 0xFF, 0xFF, 0xDF, 0x45, 0xF8, 0xFF, 0xFF, 0x4C, 0x43, 0xFE, 0xFF, 0xEF, 0x47, 0xE6, 0xFF, 0xFF, 0xEF, 0x35, 0xC4, 0xFF, 0xFF, 0x9F, 0x54, 0xFC, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEE, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0xF6, 0xFF, 0xFF, 0xEE, 0xFF, 0xFF, 0xCF, 0x34, 0x33, 0xD4, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0x5E, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xEE, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x53, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x35, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x33, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x33, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0x33, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x33, 0x33, 0x33, 0x33, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x33, 0x33, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0x33, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x33, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x36, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xBF, 0x34, 0x43, 0xFA, 0xFF, 0xFF, 0x59, 0xFE, 0xFF, 0xDF, 0x35, 0x33, 0xE7, 0xFF, 0xFF, 0x4C, 0xFB, 0xFF, 0xFF, 0x7E, 0x33, 0x53, 0xFD, 0xFF, 0xEF, 0x85, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x6F, 0x33, 0xF6, 0xFF, 0xFF, 0x6C, 0xB5, 0xFF, 0xFF, 0x9F, 0x33, 0xE4, 0xFF, 0xFF, 0x7E, 0x95, 0xFF, 0xFF, 0xCF, 0x34, 0xC4, 0xFF, 0xFF, 0xFF, 0x59, 0xE7, 0xFF, 0xFF, 0x4E, 0x33, 0xF8, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x36, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x34, 0x33, 0x83, 0xFF, 0xFF, 
	0xFF, 0x7F, 0x33, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x33, 0x33, 0x33, 0xE5, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xFA, 0xFF, 
	0xFF, 0x3D, 0x33, 0x33, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x33, 0x33, 0x33, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x33, 0x33, 0x33, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x33, 0x33, 0x33, 0xE4, 0xFF, 
	0xFF, 0x3A, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x33, 0x33, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x33, 0x33, 0x33, 0x43, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x33, 0x33, 0x33, 0xD3, 0xFF, 
	0xFF, 0x3A, 0x33, 0x33, 0x33, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0x33, 0x33, 0x33, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x33, 0x33, 0x33, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x33, 0x33, 0x33, 0xD3, 0xFF, 
	0xFF, 0x3E, 0x33, 0x33, 0x33, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x33, 0x33, 0x33, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x33, 0x33, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0x33, 0x33, 0x33, 0xF5, 0xFF, 
	0xFF, 0xBF, 0x33, 0x33, 0x33, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x34, 0x33, 0x33, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x35, 0x33, 0x33, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x33, 0x33, 0x33, 0xFD, 0xFF, 
	0xFF, 0xFF, 0x5C, 0x33, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0x33, 0xA4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x83, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B, 0x33, 0xE5, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xDF, 0x77, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x68, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6A, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x76, 0xFE, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};
