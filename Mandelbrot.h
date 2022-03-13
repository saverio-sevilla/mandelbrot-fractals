#pragma once
class Mandelbrot
{
public:
	static const int MAX_ITERATIONS = 120;
public:
	Mandelbrot();
	virtual ~Mandelbrot();
	static int getIterations(double x, double y);
};

