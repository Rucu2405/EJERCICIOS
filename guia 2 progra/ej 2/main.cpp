#include <iostream>

using namespace std;

int main()
{
    int n1, n2, r;
    cout << "Este programa sirve para saber si el primer numero es multiplo del segundo..." << endl;

    cout << "Ingrese un numero: " << endl;
    cin >> n1;
    cout << "Ingrese otro numero: " << endl;
    cin >> n2;

    r = n1 % n2;

    if(r==0){
        cout << "El primer numero es multiplo del segundo" << endl;
    }else{
        cout << "El primer numero no es multiplo del segundo" << endl;
    }

    return 0;
}
