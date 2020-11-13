#pragma once
#include "Poligonos.h"

class Pentagono :
    public Poligonos
{
public:
    Pentagono() {};
    ~Pentagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

