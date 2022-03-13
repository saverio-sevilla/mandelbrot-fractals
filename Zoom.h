#pragma once

struct Zoom
{
	int x{};
	int y{};
	double scale{0.0};

	Zoom() {}
	Zoom(int x, int y, double scale) : x{ x }, y{ y }, scale{ scale } {};

};

