#include "Heptagono.h"
#include <math.h>

double Heptagono::GetArea() {
	int a = (width * (pow(3, 1 / 2)))/2;
	return ((width * 7) * (a)) / 2;
}

double Heptagono::GetPerimeter() {
	return width * 7;
}
