#include <iostream>

using namespace std;

int main()
{
    int N, CPos, CNeg;
    CPos = 0;
    CNeg = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    while(N!=0){

        if(N>0){

            CPos++;

        }else{

            CNeg++;

        }

    cout << "Ingrese un numero: ";
    cin >> N;

    }

    cout << "La cantidad de positivos es " << CPos << " y la cantidad de negativos es " << CNeg << endl;

    return 0;
}
