#ifndef FIGURA_H
#define FIGURA_H
#include <string>
using std::string;

class Figura
{
    static int count;
public:
    Figura();
    Figura(const Figura&);
    virtual ~Figura();
    virtual string toString()const;
    static int getCount();

};

#endif // FIGURA_H
