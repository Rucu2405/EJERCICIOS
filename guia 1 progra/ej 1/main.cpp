#include <iostream>

using namespace std;

int main()
{
    int HT, VH, S;
    cout << "Ingrese horas trabajadas: ";
    cin >> HT;
    cout << "Ingrese el valor hora: $";
    cin >> VH;
    S = HT * VH;
    cout << "El sueldo que le corresponde es de: $" << S << endl;
    return 0;
}
