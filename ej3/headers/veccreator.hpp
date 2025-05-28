
#ifndef VECCREATOR_HPP
#define VECCREATOR_HPP

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;


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