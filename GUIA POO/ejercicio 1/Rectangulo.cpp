#include "Rectangulo.h"

// IMPLEMENTACI�N DE LOS M�TODOS DE LA CLASE

void Rectangulo::setBase(float valorbase)        ///SETTERS
{
    _base = valorbase;
}

void Rectangulo::setAltura (float valoraltura)
{
    _altura = valoraltura;
}

float Rectangulo::getBase ()
{
    return _base;
}

float Rectangulo::getAltura ()
{
    return _altura;
}

float Rectangulo::calcularArea()              ///FUNCI�N �REA Y PERIMETRO
{
    float a;

    a = (_base * _altura);

    return a;
}

float Rectangulo::calcularPerimetro()
{
    float p;

    p = (2 * _base) + (2 * _altura);

    return p;
}

