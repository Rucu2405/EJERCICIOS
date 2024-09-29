#include <iostream>

using namespace std;

bool EsPar(int a);

int main()
{
    int n, r;
    cout << "INGRESE UN NUMERO PARA SABER SI ES PAR O NO: ";
    cin >> n;

    r = EsPar(n);

    if(r==true)
    {
        cout << "El numero ingresado es par." << endl;
    }
    else
    {
        cout << "El numero ingresado es impar." << endl;
    }


    return 0;
}

bool EsPar(int a)
{
    if(a%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
