

#ifndef PUNTO_HPP
#define PUNTO_HPP
#include <iostream>

class Punto
{
private:
    float x;
    float y;

public:
    Punto(float x = 0, float y = 0);
    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
    ~Punto();
};


#endif 
