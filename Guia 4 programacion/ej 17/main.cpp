#include <iostream>

using namespace std;

int main()
{
    int n, max, contpos;
    max = 0;
    contpos = 0;

    while(contpos<2){
        if(n>0){
            contpos++;

        }else{
         contpos = 0;
        }
        if(n>max){
            max = n;
        }
        cout << "Ingrese un numero: ";
        cin >> n;
        if(n>0){
            contpos++;
        }else{
         contpos = 0;
        }
    }
    cout << "El max es: " << max << endl;


    return 0;
}
