
#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "punto.hpp"

class Circulo
{
private:
    Punto centro;
    float radio;

public:
    Circulo(float x, float y, float radio);
    Punto getCentro();
    float getRadio();
    void setCentro(const Punto& centro);
    void setRadio(float radio);
    ~Circulo();
};

#endif