

#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include "punto.hpp"

class Rectangulo
{
private:
    Punto izq_inf;
    float ancho;
    float alto;

public:
    Rectangulo(float x, float y, float ancho, float alto);
    Punto getIzqInf();
    float getAncho();
    float getAlto();
    void setIzqInf(float x, float y);
    void setAncho(float ancho);
    void setAlto(float alto);
    ~Rectangulo();
};

#endif