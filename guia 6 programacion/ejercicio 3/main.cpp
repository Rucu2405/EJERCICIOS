#include <iostream>

using namespace std;

bool EsPrimo(int A);

bool EsPrimo(int A)
{
    int cont = 0;
    int x;
    for(x=1; x<=A; x++)
    {
        if(A%x==0)
        {
            cont++;
        }
    }

    if(cont==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    int n, r;

    cout << "INGRESE UN NÚMERO PARA SABER SI ES PRIMO O NO: ";
    cin >> n;

    r = EsPrimo(n);

    if(r==true)
    {
        cout << "El numero es primo." << endl;
    }
    else
    {
        cout << "El numero no es primo." << endl;
    }

    return 0;
}
