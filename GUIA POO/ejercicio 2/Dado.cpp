#include "Dado.h"
#include <ctime>

// IMPLEMENTACIÓN DE MÉTODOS

void Dado::lanzar()
{
    srand(time(0));
    _valor = rand() % 6 + 1;
}

int Dado::getValor()
{
    return _valor;
}

bool Dado::esMaximo()
{
    if(_valor == 6)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Dado::esMinimo()
{
    if (_valor == 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
