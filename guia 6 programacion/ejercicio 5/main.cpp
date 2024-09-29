/* Hacer una función llamada Redondear que reciba como parámetro un número float
y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.
Hacer un programa para ingresar un número y, utilizando Redondear,
emita luego un cartel indicando el número redondeado. */

#include <iostream>

using namespace std;

int Redondear(float a)
{
    float numero_decimal, resto;
    int numero_entero, resultadoredondeado;

    numero_decimal = (float)a;
    numero_entero = (int)a;

    resto = numero_decimal - numero_entero;

    if(resto<0.5)
    {
        resultadoredondeado = numero_decimal - resto;
    }
    else if(resto>=0.5)
    {
        resultadoredondeado = (numero_decimal - resto) + 1;
    }
    return resultadoredondeado;
}
int main()
{
    float n;
    int resultadofuncion;

    cout << "ESTE PROGRAMA PIDE UN NUMERO DECIMAL, Y LO DEVUELVE REDONDEADO." << endl;
    cout << "INGRESE UN NUMERO DECIMAL: ";
    cin >> n;

    resultadofuncion = Redondear(n);

    cout << "Redondeo: " << resultadofuncion << endl;

    return 0;
}
