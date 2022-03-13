#pragma once

#include <string>
#include <cstdint>
#include <memory>

using namespace std;

class Bitmap
{
private:
	int m_width{};
	int m_height{};
	unique_ptr<uint8_t[]> m_pPixels{ nullptr };
public:
	Bitmap(int width, int height);
	virtual ~Bitmap();
	bool write(string filename);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);


};

