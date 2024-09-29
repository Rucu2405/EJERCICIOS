#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Ingrese primer numero A: ";
    cin >> a;
    cout << "Ingrese segundo numero B: ";
    cin >> b;
    cout << "Ingrese tercer numero C: ";
    cin >> c;

    if(a>b && a>c){
        cout << "El max es el primer numero A: " << a << endl;
    }else{
       if(b>a && b>c){
            cout << "El max es el segundo numero B: " << b << endl;
       }else{
               cout << "El max es el tercer numero C: " << c << endl;
       }
    }

    return 0;
}
