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
    float _precioDeCompra;

public:
    Herramienta(float pesoInicial, float longInicial, float precioDeCompraInicial = 0);
    void setPeso(float pe);
    void setLongitud(float lon);
    void setPrecioDeCompra(float pdc);
    float getPrecioDeCompra();
    float getPeso();
    float getLongitud();
    void mostrarInformacion();
    void setNombre(string nombre);
};
