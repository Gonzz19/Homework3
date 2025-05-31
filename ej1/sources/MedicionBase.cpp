

#include "../headers/MedicionBase.hpp"

using namespace std;

MedicionBase::MedicionBase(float t) : tiempoMedicion(make_unique<float>(t)) {}

MedicionBase::MedicionBase(const MedicionBase& other) : tiempoMedicion(make_unique<float>(*other.tiempoMedicion)) {}

float MedicionBase::getTiempo() 
{
    return *tiempoMedicion;
}

void MedicionBase::serializar(ofstream& out) 
{
    float tiempo = getTiempo();
    out.write(reinterpret_cast<const char*>(&tiempo), sizeof(tiempo));
}

void MedicionBase::deserializar(ifstream& in) 
{
    float tiempo;
    in.read(reinterpret_cast<char*>(&tiempo), sizeof(tiempo));
    tiempoMedicion = make_unique<float>(tiempo);
}