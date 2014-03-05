#pragma once
#include "tridimensional.h"
class TetraedroRegular : public Tridimensional
{
    double lado,distancia;
public:
    TetraedroRegular(double lado = 1);
    TetraedroRegular(const TetraedroRegular & t);
    virtual ~TetraedroRegular();
    virtual double getArea()const;
    virtual double getVolumen()const;
    virtual std::string toString()const;
};

