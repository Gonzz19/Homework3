

#ifndef PRESION_HPP
#define PRESION_HPP

#include "MedicionBase.hpp"

using namespace std;

class Presion : public MedicionBase 
{
public:
    float presionEstatica;  
    float presionDinamica;  

    Presion(float pe, float pd, float t);

    void imprimir() override;
    void serializar(ofstream& out) override;
    void deserializar(ifstream& in) override;

    ~Presion() override = default;
};

#endif 