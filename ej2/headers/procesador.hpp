
#ifndef PROCESADORFIGURAS_HPP
#define PROCESADORFIGURAS_HPP
#include <iostream>
#include "circulo.hpp"
#include "rectangulo.hpp"
#include "elipse.hpp"
#define PI 3.1415

using namespace std;


template <typename T>
class ProcesadorFiguras 
{
public:
    void area(T)
    {
        cout << "figura no reconocida" << endl;
    }
};

template <>
class ProcesadorFiguras<Circulo> 
{
public:
    void area(Circulo c)
    {
        cout << "El area del circulo es: " << PI * c.getRadio() * c.getRadio() << endl;
    }
};

template <>
class ProcesadorFiguras<Rectangulo> 
{
public:
    void area(Rectangulo r)
    {
        cout << "El area del rectangulo es: " << r.getAlto() * r.getAncho() << endl;
    }
};

template <>
class ProcesadorFiguras<Elipse> 
{
public:
    void area(Elipse e)
    {
        cout << "El area de la elipse es: " << PI * e.getRadioMayor() * e.getRadioMenor() << endl;
    }
};

#endif
