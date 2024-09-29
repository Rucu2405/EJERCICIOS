#include <iostream>

using namespace std;

int main()
{
    int N1,N2,N3,N4,N5, MIN,MAX;

cout << "Ingrese el primer numero" << endl;
cin >> N1;

MAX = N1;
MIN = N1;

cout << "Ingrese el segundo numero" << endl;
cin >> N2;

if (N2 < MIN){
      MIN = N2;
    }else{
        MAX = N2;
}


cout << "Ingrese el tercer numero" << endl;
cin >> N3;


if (N3 < MIN)
{
MIN = N3;
}
else if (N3 > MAX)
{
MAX = N3;
}
cout << "Ingrese el cuarto numero" << endl;
cin >> N4;

if (N4 < MIN)
{
MIN = N4;
}
else if (N4 > MAX)
{
MAX = N4;
}


cout << "Ingrese el quinto numero" << endl;
cin >> N5;

if (N5 < MIN)
{
MIN = N5;
}
else if (N5 > MAX)
{
MAX = N5;
}


cout << "El maximo es " << MAX << " y el minimo es " << MIN << endl;
    return 0;
}
