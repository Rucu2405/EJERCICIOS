#include "Herramienta.h"
#include <iostream>
#include <cstring>
using namespace std;
///IMPLEMENTACIÓN DE LOS MÉTODOS

Herramienta::Herramienta(float pesoInicial, float longInicial)
{
    _nombre = " ";
    _peso = pesoInicial;
    _longitud = longInicial;
}

void Herramienta::setNombre(string nombre)
{
    _nombre = nombre;
}


void Herramienta::setPeso(float pe)
{
    _peso = pe;
}

void Herramienta::setLongitud(float lon)
{
    _longitud = lon;
}

float Herramienta::getPeso()
{
    return _peso;
}

float Herramienta::getLongitud()
{
    return _longitud;
}

void Herramienta::mostrarInformacion()
{
    cout << "NOMBRE DE LA HERRAMIENTA: " << _nombre << endl;
    cout << "PESO: " << _peso << " kg" << endl;
    cout << "LONGITUD: " << _longitud << " cm" << endl;
}

