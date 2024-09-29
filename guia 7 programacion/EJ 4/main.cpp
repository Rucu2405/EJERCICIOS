/* Leer 10 n�meros y guardarlos en un vector.
Determinar e informar cu�l es el valor m�ximo absoluto del vector.
Por ejemplo 20, -43 y 5, el m�ximo absoluto es -43. */

#include <iostream>

using namespace std;

int main()
{
    int x, n, v[10];

    cout << "EN ESTE PROGRAMA, SE INGRESAN 10 NUMEROS Y SE MUESTRA POR PANTALLA EL VALOR MAXIMO ABSOLUTO." << endl;
    cout << endl;

    for(x=0; x<10; x++)
    {
        cout << "Ingrese numero " << x + 1 << ": ";
        cin >> n;

        v[x] = n;
    }

    for(x=0; x<10; x++)
    {
        if(v[x]<0)
        {
            v[x] = v[x] * -1;
        }
    }

    int maxabs = 0;

    for(x=0; x<10; x++)
    {
        if(v[x]>maxabs)
        {
            maxabs = v[x];
        }
    }

    maxabs = maxabs * -1;
    cout << endl;
    cout << "El maximo absoluto es: " << maxabs << endl;



    return 0;
}
