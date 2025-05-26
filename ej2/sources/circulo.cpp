
#include "../headers/circulo.hpp"
#include <iostream>

using namespace std;

Circulo::Circulo(float x, float y, float radio)
{
    Punto centro(x, y);
    this->centro = centro;
    this->radio = radio;
}

Punto Circulo::getCentro()
{
    return centro;
}

float Circulo::getRadio()
{
    return radio;
}

void Circulo::setCentro(const Punto& centro)
{
    this->centro = centro;
}

void Circulo::setRadio(float radio)
{
    this->radio = radio;
}

Circulo::~Circulo()
{
    cout << "Destructor del Circulo" << endl;
}