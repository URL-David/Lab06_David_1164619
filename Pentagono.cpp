#include "Pentagono.h"
#include <math.h>

double Pentagono::GetArea() {
	int a = (width * (pow(3, 1 / 2))) / 2;
	return ((width*5)*(a))/2;
}

double Pentagono::GetPerimeter() {
	return width * 5;
}