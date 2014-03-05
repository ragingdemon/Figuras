#include "circulo.h"
#include <cmath>
#include <sstream>
Circulo::Circulo(double radio) : radio(radio)
{
}

Circulo::Circulo(const Circulo &c) : Bidimensional(c)
{

}

Circulo::~Circulo()
{

}

double Circulo::getPerimetro() const
{
    return 2 * radio * M_PI;
}

double Circulo::getArea() const
{
    return M_PI * pow(radio,2);
}

std::string Circulo::toString() const
{
    std::stringstream ss;
    ss<<"Criculo: "<<'['<<radio<<']'<<" area = "<<getArea()<<','<<" perimetro = "<<getPerimetro();
    return ss.str();
}
