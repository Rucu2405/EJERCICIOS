#pragma once
#include <ctime>

// DECLARACIÓN DE CLASE

class Dado
{
private:
    int _valor;

public:
    Dado()  /// CONSTRUCTOR QUE INICIALIZA EL DADO ENTRE 1 y 6
    {
        srand(time(0));
        _valor = rand() % 6 + 1;
    }

    void lanzar();
    int getValor();
    bool esMaximo();
    bool esMinimo();
};


