#include <iostream>

using namespace std;

int main()
{
    int contpostotal = 0, x, n, cpos, cneg, maxpar, maximpar;
    float porcpos, porcneg;

    for(x=0; x<10; x++){
        cpos = 0, cneg = 0, porcpos = 0, porcneg = 0, maxpar = 0, maximpar = 0;
        cout << "bienvenido al grupo #" << x << endl;
        cout << "ingrese numero: ";
        cin >> n;
        while(n!=0){
            if(n%2==0){
                if(maxpar==0){
                    maxpar = n;
                }else if(n>maxpar){
                    maxpar = n;
                }
            }else if(maximpar==0){
                maximpar = n;
            }else if(n>maximpar){
                maximpar = n;
            }

            if(n>0){
                cpos++;
                contpostotal++;
            }else{
                cneg++;
            }
        cout << "ingrese numero: ";
        cin >> n;
        }
        cout << "el maximo par es: " << maxpar << " y el maximo impar es: " << maximpar << " en este grupo." << endl;
        porcpos = cpos * 100 / (cpos+cneg);
        porcneg = 100 - porcpos;
        cout << "el porcentaje de positivos es: " << porcpos << "% y el porcentaje de negativos es: " << porcneg << "% en este grupo." << endl;
    }
    cout << "hay en total " << contpostotal << " numeros positivos entre todos los grupos." << endl;

    return 0;
}
