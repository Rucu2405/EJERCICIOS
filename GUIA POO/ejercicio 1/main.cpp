#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    float n1, n2;
    float valorPerimetro, valorArea;
    Rectangulo rect;

    cout << "Ingrese base del rectangulo: ";
    cin >> n1;

    cout << "Ingrese altura del rectangulo: ";
    cin >> n2;

    rect.setBase(n1);
    rect.setAltura(n2);
    valorPerimetro = rect.calcularPerimetro();
    valorArea = rect.calcularArea();

    cout << endl;
    cout << "Perimetro: " << valorPerimetro << endl;
    cout << "Area: " << valorArea << endl;
    cout << rect.getBase();

    return 0;
}
