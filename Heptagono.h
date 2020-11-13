#pragma once
#include "Poligonos.h"
class Heptagono :
    public Poligonos
{
public:
    Heptagono() {};
    ~Heptagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

