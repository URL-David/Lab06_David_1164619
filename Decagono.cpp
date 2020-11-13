#include "Decagono.h"
#include <math.h>

double Decagono::GetArea() {
	int a = (width * (pow(3, 1 / 2))) / 2;
	return ((width * 10) * (a)) / 2;
}

double Decagono::GetPerimeter() {
	return width * 10;
}