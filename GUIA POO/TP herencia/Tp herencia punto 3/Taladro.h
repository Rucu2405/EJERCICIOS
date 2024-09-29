#pragma once
#include <iostream>
#include <cstring>
#include "Herramienta.h"
using namespace std;
///DECLARACIÓN DE LAS CLASES

class Taladro:public Herramienta
{
protected:
    float _Potencia;
public:
    Taladro(float potInicial, float pesoInicial, float longInicial);
    void setPotencia(float pot);
    float getPotencia();
    void mostrarInformacion();
};

