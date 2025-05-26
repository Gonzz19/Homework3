
#ifndef ELIPSE_HPP
#define ELIPSE_HPP

#include "punto.hpp"

class Elipse
{
private:
    Punto centro;
    float radioMayor;
    float radioMenor;

public:
    Elipse(float x, float y, float radioMayor, float radioMenor);
    Punto getCentro();
    float getRadioMayor();
    float getRadioMenor();
    void setCentro(float x, float y);
    void setRadioMayor(float radioMayor);
    void setRadioMenor(float radioMenor);
    ~Elipse();
};

#endif 