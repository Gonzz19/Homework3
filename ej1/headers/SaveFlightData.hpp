

#ifndef SAVEFLIGHTDATA_HPP
#define SAVEFLIGHTDATA_HPP

#include "Posicion.hpp"
#include "Presion.hpp"

using namespace std;

class SaveFlightData 
{
public:
    Posicion posicion;
    Presion presion;

    SaveFlightData(Posicion& pos, Presion& pre);

    void serializar(ofstream& out);
    void deserializar(ifstream& in);
    void imprimir();

    ~SaveFlightData() = default;
};

#endif