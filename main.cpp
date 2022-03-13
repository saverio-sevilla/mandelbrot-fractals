#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"

using namespace std;

int main() {
	int height = 5200;


	FractalCreator fractalCreator(2600, 2600);
	//fractalCreator.addZoom(Zoom(2060, height - 1750, 0.04));
	fractalCreator.calculateIteration();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();
	fractalCreator.writeBitmap("test.bmp");

	cout << "Build finished" << endl;
}