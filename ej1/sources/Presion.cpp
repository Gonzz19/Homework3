

#include "../headers/Presion.hpp"
#include <iostream>

using namespace std;

Presion::Presion(float pe, float pd, float t) : MedicionBase(t), presionEstatica(pe), presionDinamica(pd) {}

void Presion::imprimir() 
{
    cout << "Presion Estatica: " << presionEstatica << endl;
    cout << "Presion Dinamica: " << presionDinamica << endl;
    cout << "Tiempo de Medicion: " << getTiempo() << endl;
}

void Presion::serializar(ofstream& out) 
{
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(presionDinamica));
    MedicionBase::serializar(out);
}

void Presion::deserializar(ifstream& in) 
{
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(presionDinamica));
    MedicionBase::deserializar(in);
}

