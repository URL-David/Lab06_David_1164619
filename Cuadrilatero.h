#pragma once
#include "Poligonos.h"
class Cuadrilatero :
    public Poligonos
{
public:
    Cuadrilatero() {};
    ~Cuadrilatero() {};
    double GetArea() override;
    double GetPerimeter() override;
};

