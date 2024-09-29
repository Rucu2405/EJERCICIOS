/*Hacer un programa para ingresar 10 números
y guardarlos en un vector.
Determinar e informar cuál es la suma de los valores del vector. */

#include <iostream>

using namespace std;

int main()
{
    int n, x, vecnum[10];

    for(x=0; x<10 ; x++)
    {
        cout << "Ingrese numero " << x + 1 << ": ";
        cin >> n;

        vecnum[x] = n;
    }

    int acu = 0;

    for(x=0; x<10; x++)
    {
        acu += vecnum[x];
    }
    cout << endl;
    cout << "La suma de los valores del vector es: " << acu << endl;

    return 0;
}
