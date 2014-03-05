#include "esfera.h"
#include <sstream>
#include <cmath>


Esfera::Esfera(double radio): Tridimensional(), radio(radio)
{

}

Esfera::Esfera(const Esfera &e) : Tridimensional(e), radio(e.radio)
{

}

Esfera::~Esfera()
{

}

double Esfera::getArea() const
{
    return 4 * M_PI * pow(radio,2);
}

double Esfera::getVolumen() const
{
    return (4.0/3.0) * M_PI * pow(radio,3);
}

std::string Esfera::toString() const
{
    std::stringstream ss;
    ss<<"Esfera: "<<'['<<radio<<']'<<" area = "<<getArea()<<','<<" volumen = "<<getVolumen();
    return ss.str();
}
