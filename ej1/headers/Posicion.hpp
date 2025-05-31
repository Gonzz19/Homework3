

#ifndef POSICION_HPP
#define POSICION_HPP

#include "MedicionBase.hpp"

using namespace std;

class Posicion : public MedicionBase 
{
public:
    float latitud;
    float longitud;
    float altitud;

    Posicion(float lat, float lon, float alt, float t);

    void imprimir() override;
    void serializar(ofstream& out) override;
    void deserializar(ifstream& in) override;
};

#endif