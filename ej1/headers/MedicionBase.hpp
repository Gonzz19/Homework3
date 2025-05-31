

#ifndef MEDICIONBASE_HPP
#define MEDICIONBASE_HPP

#include "IMediciones.hpp"
#include <memory>

using namespace std;

class MedicionBase : public IMediciones 
{
protected:
    unique_ptr<float> tiempoMedicion;

public:
    MedicionBase(float t);
    MedicionBase(const MedicionBase& other);

    float getTiempo();
    void serializar(ofstream& out) override;
    void deserializar(ifstream& in) override;
    virtual void imprimir() = 0;

    virtual ~MedicionBase() = default;
};

#endif