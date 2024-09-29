#include <iostream>

using namespace std;

int main()
{
    int ngp, n, x, min, pos, mingp, posmingp, ngpmin;
    float myprom, sumatotal, contnum, promgp;
    ngp = 0, myprom = 0;
    mingp = 0, ngpmin = 0, posmingp = 0;

    for(x=0;x<10;x++){
        cout << "Ingrese un numero: ";
        cin >> n;

        sumatotal = 0, contnum = 0;
        promgp = 0, min = 0, pos = 0;

        while(n!=0){
            contnum++;
            sumatotal += n;
        if(min==0){
            min = n;
            pos++;
        }else if(n<min){
            min = n;
            pos++;
        }else{
            pos++;
        }
            cout << "Ingrese un numero: ";
            cin >> n;
        }
        promgp = sumatotal / contnum;
        cout << "El promedio de este grupo es: " << promgp << endl;
        cout << endl;

        if(promgp>myprom){
            myprom = promgp;
            ngp = x+1;
        }

        if(mingp==0){
            mingp = min;
            posmingp = pos;
            ngpmin = x+1;
        }else if(min<mingp){
            mingp = min;
            posmingp = pos;
            ngpmin = x+1;
        }
    }

    cout << "El mayor promedio es: " << myprom << " y su numero de grupo es: " << ngp << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "El valor minimo es: " << mingp << " y su numero de grupo es: " << ngpmin << ". La posicion de este valor en ese grupo es: " << posmingp << endl;


    return 0;
}
