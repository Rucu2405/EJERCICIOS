#include <iostream>

using namespace std;

int main()
{
    int n, max, haymax;
    max = 0;
    haymax = false;

    cout << "Este programa sirve para ingresar una serie de numeros y listar el maximo de ellos. Si se ingresa un 0, el programa termina." << endl;
    cout << "Ingrese los numeros: ";
    cin >> n;

    while(n!=0){
        if(n>0){
            if(haymax==false){
                max = n;
                haymax = true;
            }else if(n>max){
                max = n;
            }
        }else if(n<0&&haymax==false){
            max = n;
            haymax = true;
        }else if(n>max){
            max = n;
        }
    cout << "Ingrese los numeros: ";
    cin >> n;
    }

    cout << "El maximo es: " << max << endl;

    return 0;
}
