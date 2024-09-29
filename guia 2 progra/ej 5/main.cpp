#include <iostream>

using namespace std;

int main()
{
    cout << "Un negocio de perfumeria efectua descuentos según el importe de la venta." << endl;
    cout << "Si el importe es menor a $100 aplicar un descuento del 5%." << endl;
    cout << "Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%." << endl;
    cout << "Si el importe es mayor a $500 aplicar un descuento del 15%." << endl;
    cout << "En este programa, se ingresa el importe original sin descuento y se informa por pantalla el importe con el descuento ya aplicado." << endl;

    int ImpOriginal, ImpFinaldesc1, ImpFinaldesc2, ImpFinaldesc3;
    cout << "Ingrese el importe: $";
    cin >> ImpOriginal;

    ImpFinaldesc1= ImpOriginal - (ImpOriginal * 0.10);
    ImpFinaldesc2= ImpOriginal - (ImpOriginal * 0.15);
    ImpFinaldesc3= ImpOriginal - (ImpOriginal * 0.05);

    if(ImpOriginal>=100 && ImpOriginal<=500){
    cout << "Se aplica un descuento del 10%. El importe final es de: $" << ImpFinaldesc1;
    } else{
       if(ImpOriginal>500){
       cout << "Se aplica un descuento del 15%. El importe final es de: $" << ImpFinaldesc2;
       } else{
           if(ImpOriginal<100){
             cout << "Se aplica un descuento del 5%. El importe final es de: $" << ImpFinaldesc3;
           }

       }

    }


    return 0;
}
