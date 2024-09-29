#include "Herramienta.h"
#include "Martillo.h"
#include <iostream>
#include <cstring>
using namespace std;
///IMPLEMENTACIÓN DE LOS MÉTODOS

Martillo::Martillo(string tC, float pesoInicial, float longInicial):Herramienta(pesoInicial, longInicial)
{
    _tipoCabeza = tC;
    setNombre("Martillo");
}

void Martillo::setTipoCabeza(string tipocab)
{
    _tipoCabeza = tipocab;
}

string Martillo::getTipoCabeza()
{
    return _tipoCabeza;
}

void Martillo::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    cout << "Tipo de cabeza: " << _tipoCabeza << endl;
}
