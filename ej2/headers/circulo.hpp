
#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "punto.hpp"

class Circulo
{
private:
    float radio;
    Punto centro;

public:
    Circulo(float x, float y, float radio);
    Punto getCentro();
    float getRadio();
    void setCentro(float x, float y);
    void setRadio(float radio);
    ~Circulo();
};

#endif