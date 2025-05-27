
#include "../headers/elipse.hpp"
#include <iostream>

using namespace std;

Elipse::Elipse(float x, float y, float radioMayor, float radioMenor) : centro(x, y), radioMayor(radioMayor), radioMenor(radioMenor) {}

Punto Elipse::getCentro()
{
    return centro;
}

float Elipse::getRadioMayor()
{
    return radioMayor;
}

float Elipse::getRadioMenor()
{
    return radioMenor;
}

void Elipse::setCentro(float x, float y)
{
    centro.setX(x);
    centro.setY(y);
}

void Elipse::setRadioMayor(float radioMayor)
{
    this->radioMayor = radioMayor;
}

void Elipse::setRadioMenor(float radioMenor)
{
    this->radioMenor = radioMenor;
}

Elipse::~Elipse()
{
    cout << "Destructor de la Elipse" << endl;
}
