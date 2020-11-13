#include "Hexagono.h"
#include <math.h>

double Hexagono::GetArea() {
	int a = (width * (pow(3, 1 / 2))) / 2;
	return ((width*6)*(a))/2;
}

double Hexagono::GetPerimeter() {
	return width * 6;
}