#pragma once
#include "Pentagono.h"
class Octagono :
    public Pentagono
{
public:
    Octagono() {};
    ~Octagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

