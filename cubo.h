#pragma once
#include "tridimensional.h"
#include <string>

class Cubo : public Tridimensional
{
    double longitud;
public:
    Cubo(double longitud = 1);
    Cubo(const Cubo & c);
    virtual ~Cubo();
    virtual double getArea()const;
    virtual double getVolumen()const;
    virtual std::string toString()const;
};

