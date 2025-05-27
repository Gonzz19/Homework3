#include "../headers/circulo.hpp"
#include <iostream>

using namespace std;

Circulo::Circulo(float x, float y, float radio) : radio(radio), centro(x, y) {}

Punto Circulo::getCentro()
{
    return centro;
}

float Circulo::getRadio()
{
    return radio;
}

void Circulo::setCentro(float x, float y)
{
    centro.setX(x);
    centro.setY(y);
}

void Circulo::setRadio(float radio)
{
    this->radio = radio;
}

Circulo::~Circulo()
{
    cout << "Destructor del Circulo" << endl;
}