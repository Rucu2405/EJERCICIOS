#include <iostream>

using namespace std;

int main()
{
    int n, x, i, conp=0;

    cin >> n ;

    for (i=0; i<10; i++){
            cin >> n;
    for (x=1; x<=n; x++){
        if(n%x == 0){
            conp++;
        }
    }if(conp==2){
       cout << "el numero es primo" << endl;
    }else{
    cout << "el numero no es primo" << endl;
    }
    }


    return 0;
}
