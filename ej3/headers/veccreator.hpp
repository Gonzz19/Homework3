
#ifndef VECCREATOR_HPP
#define VECCREATOR_HPP

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;


// Clase para crear un vector de tipo T y agregarle elementos

template <typename T>
class VecCreator 
{
private:
    vector<T> vec;

public:
    VecCreator();
    void agregar(T value);
    vector<T> getVector();
    ~VecCreator() = default;
};

#endif