/* Leer 10 números y guardarlos en un vector.
Determinar e informar cuál es el valor máximo y su posición dentro del vector. */

#include <iostream>

using namespace std;

int main()
{
    int x, n, v[10];

    for(x=0; x<10; x++)
    {
        cout << "Ingrese numero " << x + 1 << ": ";
        cin >> n;

        v[x] = n;
    }
    int max, pos;

    max = v[0];
    pos = 1;

    for(x=0; x<10; x++)
    {
        if(v[x]>max)
        {
            max = v[x];
            pos = x + 1;
        }
    }
    cout << endl;
    cout << "El maximo es: " << max << " y la posicion es: " << pos << endl;

    return 0;
}
