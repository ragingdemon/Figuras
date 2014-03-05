#include "bidimensional.h"


Bidimensional::Bidimensional() : Figura()
{
}

Bidimensional::Bidimensional(const Bidimensional &b) : Figura(b)
{
}

Bidimensional::~Bidimensional()
{
}

std::string Bidimensional::toString()const
{
    return "Bidimensional";
}
