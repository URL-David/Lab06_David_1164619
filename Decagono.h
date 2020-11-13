#pragma once
#include "Poligonos.h"
class Decagono :
    public Poligonos
{
public:
    Decagono() {};
    ~Decagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

