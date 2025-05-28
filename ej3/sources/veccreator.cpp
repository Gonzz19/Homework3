
#include "../headers/veccreator.hpp"

template <typename T>
VecCreator<T>::VecCreator() : vec() {}

template <typename T>
void VecCreator<T>::agregar(T value) 
{
    if constexpr (is_same_v<T, double> || is_same_v<T, string> || is_same_v<T, vector<int>>) 
    {
        vec.push_back(value);
    } 
    else 
    {
        cout << "Tipo no soportado para agregar al vector." << endl;
    }
}

template <typename T>
vector<T> VecCreator<T>::getVector() 
{
    return vec;
}

