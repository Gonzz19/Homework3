

#include "../headers/Posicion.hpp"
#include <iostream>

using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

void Posicion::imprimir() {
    cout << "Latitud: " << latitud << endl;
    cout << "Longitud: " << longitud << endl;
    cout << "Altitud: " << altitud << endl;
    cout << "Tiempo de medición: " << getTiempo() << endl;
}

void Posicion::serializar(ofstream& out) 
{
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(altitud));
    MedicionBase::serializar(out);
}

void Posicion::deserializar(ifstream& in) 
{
    in.read(reinterpret_cast<char*>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(altitud));
    MedicionBase::deserializar(in);
}