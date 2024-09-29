#pragma once

// DECLARACIÓN DE LA CLASE

class Rectangulo
{
private:     /// Propiedades

    float _base;
    float _altura;

public:     /// Métodos

    void setBase (float valorbase);
    void setAltura (float valoraltura);
    float getBase();
    float getAltura();
    float calcularArea();
    float calcularPerimetro();
};
