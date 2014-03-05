#include "tetraedroregular.h"
#include <cmath>
#include <sstream>

TetraedroRegular::TetraedroRegular(double lado) :
    Tridimensional(), lado(lado)
{

}

TetraedroRegular::TetraedroRegular(const TetraedroRegular &t) :
    Tridimensional(t), lado(t.lado)
{

}

TetraedroRegular::~TetraedroRegular()
{

}

double TetraedroRegular::getArea() const
{
    return (sqrt(3.0)) * pow(lado,2);
}

double TetraedroRegular::getVolumen() const
{
    return (sqrt(2.0)/12.0) * pow(lado,3);
}

std::string TetraedroRegular::toString() const
{
    std::stringstream ss;
    ss<<"Tetraedro Regular: "<<'['<<lado<<']'<<" area = "<<getArea()<<','<<" Volumen = "<<getVolumen();
    return ss.str();
}
