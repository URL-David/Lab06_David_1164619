#pragma once
#include "Poligonos.h"
class Triangulo :
    public Poligonos
{
public:
    Triangulo() {};
    ~Triangulo() {};
    double GetArea() override;
    double GetPerimeter() override;

};

