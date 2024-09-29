#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;

    if(N>0){
       cout << "El numero es positivo" << endl;
            }else{
               if(N==0){
                  cout << "El numero es cero" << endl;
                       }  else{
                          cout << "El numero es negativo" << endl;
                              }
                 }

return 0;
}
