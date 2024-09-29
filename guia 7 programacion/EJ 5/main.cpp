/* Leer 10 números y guardarlos en un vector.
Determinar e informar cuál es el menor de los impares y el mayor de los pares.
Suponer que habrá al menos un número par y uno impar. */

#include <iostream>

using namespace std;

int main()
{
    int x, n, v[10];

    cout << "EN ESTE PROGRAMA, SE INGRESAN 10 NUMEROS Y SE MUESTRA POR PANTALLA EL MAXIMO DE LOS PARES Y EL MINIMO DE LOS IMPARES." << endl;
    cout << endl;

    for(x=0; x<10; x++)
    {
        cout << "Ingrese numero " << x + 1 << ": ";
        cin >> n;

        v[x] = n;
    }

    int maxpar = 0, minimpar = 0;

    for(x=0; x<10; x++)
    {
        if(v[x]%2 == 0)
        {
            if(maxpar==0)
            {
                maxpar = v[x];
            }
            else if(v[x]>maxpar)
            {
                maxpar = v[x];
            }
        }
        else if(minimpar==0)
        {
            minimpar = v[x];
        }
        else if(v[x]<minimpar)
        {
            minimpar = v[x];
        }
    }

    cout << endl;
    cout << "El maximo par es: " << maxpar << endl;
    cout << "El minimo impar es: " << minimpar << endl;

    return 0;
}
