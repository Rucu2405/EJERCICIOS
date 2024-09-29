#pragma once
#include <iostream>
#include <cstring>
#include "Herramienta.h"
using namespace std;
///DECLARACIÓN DE LAS CLASES

class Martillo:public Herramienta
{
protected:
    string _tipoCabeza;
public:
    Martillo(string tC, float pesoInicial, float longInicial);
    void setTipoCabeza(string tipocab);
    string getTipoCabeza();
    void mostrarInformacion();
};
