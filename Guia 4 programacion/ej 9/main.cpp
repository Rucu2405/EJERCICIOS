//Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo de los pares.
//Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
//Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
//Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.

#include <iostream>

using namespace std;

int main()
{
    int n, maxpar, haymaxpar;

    maxpar = 0;
    haymaxpar = false;

    cout << "Ingrese los numeros: ";
    cin >> n;

    while(n!=0){
        if(n%2==0&&n>0){
            if(haymaxpar==false){
                maxpar = n;
                haymaxpar = true;
            }else if(n>maxpar){
                maxpar = n;
            }
        }else if(n%2==0&&n<0){
            if(haymaxpar==false){
                maxpar = n;
                haymaxpar = true;
            }else if(n>maxpar){
                maxpar = n;
            }
        }
        cout << "Ingrese los numeros: ";
        cin >> n;
    }

    cout << "El maximo par es: " << maxpar << endl;

    return 0;
}
