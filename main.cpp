#include <iostream>
#include <vector>
#include "figura.h"
#include "bidimensional.h"
#include "tridimensional.h"
#include "rectangulo.h"
#include "triangulo.h"
#include "circulo.h"
#include "cubo.h"
#include "esfera.h"
#include "tetraedroregular.h"
using namespace std;

int main()
{
    vector<Figura*> figuras;
    figuras.push_back(new Rectangulo());
    figuras.push_back(new Triangulo());
    figuras.push_back(new Circulo());
    figuras.push_back(new Cubo());
    figuras.push_back(new Esfera());
    figuras.push_back(new TetraedroRegular());
    for (int i = 0; i < figuras.size(); ++i) {
        Bidimensional *bidimensional;
        Tridimensional *tridimensional;
        if (bidimensional = dynamic_cast<Bidimensional*>(figuras[i])) {
            cout<<bidimensional->toString()<<endl;
        } else if (tridimensional = dynamic_cast<Tridimensional*>(figuras[i])){
            cout<<tridimensional->toString()<<endl;
        }
    }

    for (int i = 0; i < figuras.size(); ++i) {
        delete figuras[i];
    }
    return 0;
}

