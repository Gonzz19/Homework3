
#include "../headers/SaveFlightData.hpp"
#include <iostream>

using namespace std;

SaveFlightData::SaveFlightData(Posicion& pos, Presion& pre) : posicion(pos), presion(pre) {}

void SaveFlightData::serializar(ofstream& out) 
{
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream& in) 
{
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir() 
{
    cout << "Datos de Posicion:" << endl;
    posicion.imprimir();
    cout << "Datos de Presion:" << endl;
    presion.imprimir();
}