#pragma once

#include <iostream>
#include <memory>
#include <math.h>
#include "bitmapFileHeader.h"
#include "bitmapInfoHeader.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include <cstdint>
#include "ZoomList.h"
#include <string>
#include "RGB.h"

using namespace std;

class FractalCreator
{
private:
	int m_width;
	int m_height;
	int m_total;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
public:
	FractalCreator(int width, int height);
	void calculateIteration();
	void calculateTotalIterations();
	void drawFractal();
	void addZoom(const Zoom& zoom);
	void writeBitmap(string name);
};

