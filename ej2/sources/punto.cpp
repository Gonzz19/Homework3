#include "../headers/punto.hpp"
#include <iostream>

using namespace std;


Punto::Punto(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Punto::getX()
{
    return x;
}

float Punto::getY()
{
    return y;
}

void Punto::setX(float x)
{
    this->x = x;
}

void Punto::setY(float y)
{
    this->y = y;
}

Punto::~Punto()
{
    cout << "Destructor del Punto" << endl;
}