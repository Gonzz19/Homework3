

#ifndef SAVEFLIGHTDATA_HPP
#define SAVEFLIGHTDATA_HPP

#include "Posicion.hpp"
#include "Presion.hpp"

using namespace std;

class SaveFlightData 
{
private:
    Posicion posicion;
    Presion presion;

public:
    SaveFlightData(const Posicion& p, const Presion& q);

    void serializar(ofstream& out);
    void deserializar(ifstream& in);
    void imprimir();
};

#endif