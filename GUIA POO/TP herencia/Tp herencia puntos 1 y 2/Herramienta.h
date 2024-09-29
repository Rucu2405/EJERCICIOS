#pragma once
#include <iostream>
#include <cstring>
using namespace std;
///DECLARACIÓN DE LAS CLASES

class Herramienta
{
protected:
    string _nombre;
    float _peso;
    float _longitud;

public:
    Herramienta(float pesoInicial, float longInicial);
    void setPeso(float pe);
    void setLongitud(float lon);
    float getPeso();
    float getLongitud();
    void mostrarInformacion();
    void setNombre(string nombre);
};
