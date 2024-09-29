#include "TaladroPercutor.h"
#include "Taladro.h"
#include <iostream>
#include <cstring>
using namespace std;
///IMPLEMENTACIÓN DE LOS MÉTODOS

TaladroPercutor::TaladroPercutor(float gPM, float potInicial, float pesoInicial, float longInicial):Taladro(potInicial, pesoInicial, longInicial)
{
    _golpesPorMinuto = gPM;
    setNombre("Taladro Percutor");
}

void TaladroPercutor::setGolpesPorMinuto(int golpespormin)
{
    _golpesPorMinuto = golpespormin;
}

int TaladroPercutor::getGolpesPorMinuto()
{
    return _golpesPorMinuto;
}

void TaladroPercutor::mostrarInformacion()
{
    Taladro::mostrarInformacion();
    cout << "Golpes por minuto: " << _golpesPorMinuto << " gpm" << endl;
}
