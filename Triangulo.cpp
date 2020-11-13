#include "Triangulo.h"
#include <math.h>

double Triangulo::GetArea() {
	int a = (width * (pow(3, 1 / 2))) / 2;
	return (width * a);
}

double Triangulo::GetPerimeter() {
	return width * 3;
}