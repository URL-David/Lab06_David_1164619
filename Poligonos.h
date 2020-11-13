#pragma once
class Poligonos
{
public:
	double width;
	double height;
	int type;
	double area;
	double perimeter;

	Poligonos() { width = 0; height = 0; type = 0; area = 0; perimeter = 0; };
	~Poligonos() {};
	virtual double GetArea();
	virtual double GetPerimeter();
};

