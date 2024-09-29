#include "Herramienta.h"
#include "Destornillador.h"
#include <iostream>
#include <cstring>
using namespace std;
///IMPLEMENTACIÓN DE LOS MÉTODOS

Destornillador::Destornillador(string tP, float pesoInicial, float longInicial):Herramienta(pesoInicial, longInicial)
{
    _tipoPunta = tP;
    setNombre("Destornillador");
}

void Destornillador::setTipoPunta(string tipopunt)
{
    _tipoPunta = tipopunt;
}

string Destornillador::getTipoPunta()
{
    return _tipoPunta;
}

void Destornillador::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    cout << "Tipo de punta: " << _tipoPunta << endl;
}
