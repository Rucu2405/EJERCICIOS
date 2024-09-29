#include <iostream>

using namespace std;

int main()
{
    int x, y, numdegrupo = 0;
    for(x=1; x<=3; x++){
        int n, cpri = 0, primo = 0, cimppos = 0, cnumtotalgp = 0, porcimppos = 0, mayorporc = 0, pos = 0;
        cout << "ingrese numero: ";
        cin >> n;
        while(n!=0){
            if(n%2!=0 && n>0){
                cimppos++;
            }else{
                cnumtotalgp++;
            }
            for(y=1; y<=n; y++){
                if(n%y==0){
                    cpri++;
                    pos = y;
                }
                }
                if(cpri==2){
                    primo = n;
                    pos = y;
                }
        cout << "ingrese numero: ";
        cin >> n;
        }
        porcimppos = cimppos * 100 / (cnumtotalgp+cimppos);
        if(porcimppos==0){
            mayorporc = porcimppos;
            numdegrupo = x;
        }else if(porcimppos>mayorporc){
            mayorporc = porcimppos;
            numdegrupo = x;
        }
        cout << "el ultimo numero primo ingresado es " << primo << " y su orden fue " << pos << endl;


    }
    cout << "el grupo con mayor porcentaje de impares positivos fue el " << numdegrupo << endl;




    return 0;
}
