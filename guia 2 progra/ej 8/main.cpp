#include <iostream>

using namespace std;

int main()
{
    int L1, L2, L3;

    cout << "Ingrese la medida del primer lado: ";
    cin >> L1;
    cout << "Ingrese la medida del segundo lado: ";
    cin >> L2;
    cout << "Ingrese la medida del tercer lado: ";
    cin >> L3;

    if(L1==L2 && L2==L3){
      cout << "El triangulo es equilatero." << endl;
    }else{
       if(L1!=L2 && L2!=L3 && L1!=L3){
         cout << "El triangulo es escaleno." << endl;
        }else{
          cout << "El triangulo es isoceles." << endl;
       }
    }
    return 0;
}
