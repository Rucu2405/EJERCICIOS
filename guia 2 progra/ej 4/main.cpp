#include <iostream>

using namespace std;

int main()
{
    int n1, n2, rplus, rminus;
    cout << "Este es un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos..." << endl;

    cout << "Ingrese un numero: " << endl;
    cin >> n1;
    cout << "Ingrese otro: " << endl;
    cin >> n2;

    rplus= n1 - n2;
    rminus= n2 - n1;

    if(n1>n2){
        cout << "La diferencia es: " << rplus << endl;
    }else{
        cout << "La diferencia es: " << rminus << endl;
    }

    return 0;
}
