#pragma once
#include "Poligonos.h"
class Hexagono :
    public Poligonos
{
public:
    Hexagono() {};
    ~Hexagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

