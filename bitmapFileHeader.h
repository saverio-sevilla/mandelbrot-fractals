#pragma once 
#include <cstdint>


#pragma pack(2)
struct BitmapFileHeader {
	char header[2]{ 'B','M' };
	int32_t fileSize{};
	int32_t reserved{ 0 }; // Not used
	int32_t dataOffset{ 0 }; // How long into the file the data starts
};

