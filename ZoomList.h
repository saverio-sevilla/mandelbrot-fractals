#pragma once

#include <vector>
#include <utility>
#include "Zoom.h"

class ZoomList
{
private:
	int m_height{ 0 };
	int m_width{ 0 };
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};
	std::vector<Zoom> zooms;

public:
	ZoomList();
	ZoomList(int width, int height);

	void setWidth(int width);

	void setHeight(int height);

	void add(const Zoom& zoom);
	std::pair <double, double>doZoom(int x, int y);
};

