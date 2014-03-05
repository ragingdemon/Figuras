#include "figura.h"

int Figura::count = 0;

Figura::Figura()
{
    count++;
}

Figura::Figura(const Figura &)
{
    count++;
}

Figura::~Figura()
{
    count--;
}

int Figura::getCount()
{
    return count;
}
