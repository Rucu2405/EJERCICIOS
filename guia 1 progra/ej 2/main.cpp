#include <iostream>

using namespace std;

int main()
{
int a, b, aux;

cout << "Ingresar valores para A y B: ";
cin >> a;
cin >> b;

cout << "Los valores antes de intercambiar son:" << endl;
cout << "a: " << a << endl;
cout << "b: " << b << endl;

cout << "Realizando intercambio de variables..." << endl;
aux = a;
a = b;
b = aux;

cout << "Los valores despues de intercambiar son:" << endl;
cout << "a: " << a << endl;
cout << "b: " << b << endl;

    return 0;
}
