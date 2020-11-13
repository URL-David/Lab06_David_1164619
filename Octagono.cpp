#include "Octagono.h"
#include <math.h>

double Octagono::GetArea() {
	int a = (width * (pow(3, 1 / 2))) / 2;
	return ((width * 8) * (a)) / 2;
}

double Octagono::GetPerimeter() {
	return width * 8;
}