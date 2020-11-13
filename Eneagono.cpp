#include "Eneagono.h"
#include <math.h>

double Eneagono::GetArea() {
	int a = (width * (pow(3, 1 / 2))) / 2;
	return ((width * 9) * (a)) / 2;
}

double Eneagono::GetPerimeter() {
	return width * 9;
}