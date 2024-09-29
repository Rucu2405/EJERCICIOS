#include <iostream>

using namespace std;

int CalcularMaximo(int a, int b);

int CalcularMaximo(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    if(a==b)
    {
        return a;
    }

}

int main()
{
    int n1, n2, mayor;
    cout << "INGRESE DOS NUMEROS PARA SABER CUAL ES EL MAYOR DE ELLOS: " << endl;
    cin >> n1;
    cin >> n2;

    mayor = CalcularMaximo(n1, n2);

    cout << "El mayor es: " << mayor << endl;

    return 0;
}
