

#ifndef MEDICIONBASE_HPP
#define MEDICIONBASE_HPP

#include "IMediciones.hpp"

class MedicionBase : public IMediciones 
{
protected:
    float* tiempoMedicion;

public:
    MedicionBase(float t);
    virtual ~MedicionBase() = default;

    float getTiempo();
    virtual void imprimir() = 0;
};

#endif