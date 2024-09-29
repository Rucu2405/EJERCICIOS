#include <iostream>
#include "Dado.h"


using namespace std;

int main()
{
    Dado obj;
    cout << "Valor inicial: " << obj.getValor();
    cout << endl;

    system("pause");

    cout << endl;
    cout << "Lanzando dado..." << endl;
    obj.lanzar();

    cout << "Nuevo valor del dado: " << obj.getValor();
    cout << endl;
    cout << "Es el valor maximo? (0=false, 1=true): " << obj.esMaximo();
    cout << endl;
    cout << "Es el valor minimo? (0=false, 1=true): " << obj.esMinimo();
    cout << endl;

    return 0;
}
