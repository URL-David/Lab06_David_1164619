#pragma once
#include "Poligonos.h"
class Eneagono :
    public Poligonos
{
public:
    Eneagono() {};
    ~Eneagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

