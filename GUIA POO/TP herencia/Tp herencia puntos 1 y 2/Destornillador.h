#pragma once
#include <iostream>
#include <cstring>
#include "Herramienta.h"
using namespace std;
///DECLARACI�N DE LAS CLASES

class Destornillador:public Herramienta
{
protected:
    string _tipoPunta;
public:
    Destornillador(string tP, float pesoInicial, float longInicial);
    void setTipoPunta(string tipopunt);
    string getTipoPunta();
    void mostrarInformacion();
};
