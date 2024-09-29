#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cout << "Este programa sirve para saber si el numero ingresado es par o impar..." << endl;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    r = n % 2;

    if(r==0){
        cout << "El numero ingresado es par" << endl;
    }else{
       cout << "El numero ingresado es impar" << endl;
    }

    return 0;
}
