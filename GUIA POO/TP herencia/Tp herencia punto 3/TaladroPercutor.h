#pragma once
#include <iostream>
#include <cstring>
#include "Taladro.h"
using namespace std;
///DECLARACIÓN DE LAS CLASES

class TaladroPercutor:public Taladro
{
protected:
    int _golpesPorMinuto;
public:
    TaladroPercutor(float gPM, float potInicial, float pesoInicial, float longInicial);
    void setGolpesPorMinuto(int golpespormin);
    int getGolpesPorMinuto();
    void mostrarInformacion();
};
