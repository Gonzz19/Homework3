

#include "../headers/rectangulo.hpp"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(float x, float y, float ancho, float alto)
{
    Punto izq_inf(x,y);
    this->izq_inf = izq_inf;
    this->ancho = ancho;
    this->alto = alto;
}

Punto Rectangulo::getIzqInf()
{
    return izq_inf;
}

float Rectangulo::getAncho()
{
    return ancho;
}

float Rectangulo::getAlto()
{
    return alto;
}

void Rectangulo::setIzqInf(float x, float y)
{
    izq_inf.setX(x);
    izq_inf.setY(y);
}

void Rectangulo::setAncho(float ancho)
{
    this->ancho = ancho;
}

void Rectangulo::setAlto(float alto)
{
    this->alto = alto;
}

Rectangulo::~Rectangulo()
{
    cout << "Destructor del Rectangulo" << endl;
}
