#include "cubo.h"
#include <sstream>
#include <cmath>

Cubo::Cubo(double longitud) : Tridimensional(), longitud(longitud)
{

}

Cubo::Cubo(const Cubo &c) : Tridimensional(c), longitud(c.longitud)
{

}

Cubo::~Cubo()
{

}

double Cubo::getArea() const
{
    return 6 * pow(longitud,2);
}

double Cubo::getVolumen() const
{
    return pow(longitud,3);
}

std::string Cubo::toString() const
{
    std::stringstream ss;
    ss<<"Cubo: "<<'['<<longitud<<']'<<" area = "<<getArea()<<','<<" Volumen = "<<getVolumen();
    return ss.str();
}
