#include "Herramienta.h"
#include "Taladro.h"
#include <iostream>
#include <cstring>
using namespace std;
///IMPLEMENTACI�N DE LOS M�TODOS

Taladro::Taladro(float potInicial, float pesoInicial, float longInicial):Herramienta(pesoInicial, longInicial)
{
    _Potencia = potInicial;
    setNombre("Taladro");
}

void Taladro::setPotencia(float pot)
{
    _Potencia = pot;
}

float Taladro::getPotencia()
{
    return _Potencia;
}

void Taladro::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    cout << "Potencia: " << _Potencia << " watts" << endl;
}
