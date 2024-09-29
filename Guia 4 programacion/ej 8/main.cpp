#include <iostream>

using namespace std;

int main()
{
    int n, max, pos, posmax;
    pos = 1;

    cout << "Este programa sirve para ingresar una serie de numeros y listar el maximo de ellos y su posicion. Si se ingresa un 0, el programa termina." << endl;
    cout << "Ingrese los numeros: ";
    cin >> n;

    max = n;
    posmax = pos;

    while(n!=0){
        if(n>max){
            max = n;
            posmax = pos;
        }
        pos++;
        cout << "Ingrese los numeros: ";
        cin >> n;
    }

    cout << "El maximo es " << max << " y su posicion es " << posmax << endl;

    return 0;
}
