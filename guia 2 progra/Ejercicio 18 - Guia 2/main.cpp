#include <iostream>

using namespace std;

int main()
{
    int C, TP;

    cout << "Ingrese consumo en kilovatio: ";
    cin >> C;

    TP = C * 10;

    if(C > 100){

        TP = 1000 + (C - 100) * 12;

    }

    if (C > 200){

        TP = 1000 + 1200 + (C - 200) * 15;

    }

    cout << "Total a pagar: " << "$" << TP;

    return 0;
}
