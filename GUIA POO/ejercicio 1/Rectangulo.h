#pragma once

// DECLARACI�N DE LA CLASE

class Rectangulo
{
private:     /// Propiedades

    float _base;
    float _altura;

public:     /// M�todos

    void setBase (float valorbase);
    void setAltura (float valoraltura);
    float getBase();
    float getAltura();
    float calcularArea();
    float calcularPerimetro();
};
