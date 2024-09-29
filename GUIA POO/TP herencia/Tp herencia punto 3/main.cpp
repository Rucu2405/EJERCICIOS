#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"
#include <cstring>

using namespace std;

int main()
{
   Herramienta her(0.2, 1.8);
   Martillo mar("Plana", 1.1, 2.3);
   Destornillador des("Phillips", 1.5, 0.6);
   Taladro tal(2000, 3.0, 1.2);
   TaladroPercutor talper(2300, 2456.2, 2.2, 1.7);

   her.mostrarInformacion();
   cout << endl;
   mar.mostrarInformacion();
   cout << endl;
   des.mostrarInformacion();
   cout << endl;
   tal.mostrarInformacion();
   cout << endl;
   talper.mostrarInformacion();


    return 0;
}
