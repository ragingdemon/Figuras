#pragma once
#include "tridimensional.h"
#include <string>
class Esfera : public Tridimensional
{
    double radio;
public:
    Esfera(double radio = 1);
    Esfera(const Esfera & e);
    virtual ~Esfera();
    virtual double getArea()const;
    virtual double getVolumen()const;
    virtual std::string toString()const;
};
