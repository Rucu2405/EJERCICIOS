/* Leer 10 números y guardarlos en un vector.
Calcular el promedio y luego mostrar por pantalla
los valores que son mayores al promedio. */

#include <iostream>

using namespace std;

int main()
{
    int x, vecnum[10];
    float n;

    for(x=0; x<10; x++)
    {
        cout << "Ingrese numero " << x + 1 << ": ";
        cin >> n;

        vecnum[x] = n;
    }
    float acu = 0;
    float prom = 0;

    for(x=0; x<10; x++)
    {
        acu += vecnum[x];
    }

    cout << endl;
    prom = acu/10;
    cout << "El promedio es: " << prom << endl;
    cout << endl;

    for(x=0; x<10; x++)
    {
        if(vecnum[x]>prom)
        {
            cout << "Los valores que son mayores al promedio son: " << vecnum[x] << endl;
        }
    }


    return 0;
}
