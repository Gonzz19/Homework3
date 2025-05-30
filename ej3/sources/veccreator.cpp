#include "../headers/veccreator.hpp"


template <typename T>
VecCreator<T>::VecCreator() : vec() {}

template <typename T>
void VecCreator<T>::agregar(T valor) 
{
    vec.push_back(valor);
}

template <typename T>
string VecCreator<T>::vecTostring()
{
    ostringstream oss;
    if constexpr (is_same_v<T, vector<int>>)
    {
        oss << "[\n";
    }
    else
    {
        oss << "[";
    }
    for (int i = 0; i < static_cast<int>(vec.size()); i++)
    {
        if constexpr (is_same_v<T, string>)
        {
            oss << "\"" << vec[i] << "\"";
        }
        else if constexpr (is_same_v<T, vector<int>>)
        {
            oss << "\t  [";
            for (int j = 0; j < static_cast<int>(vec[i].size()); j++)
            {
                oss << vec[i][j];
                if (j < static_cast<int>(vec[i].size()) - 1)
                {
                    oss << ",";
                }
            }
            if (i < static_cast<int>(vec.size()) - 1)
            {
                oss << "],";
            }
            else
            {
                oss << "]";
            }
            oss << "\n";
        }
        else if constexpr (is_same_v<T, double>)
        {
            oss << vec[i];
        }
        if (i < static_cast<int>(vec.size()) - 1 && !is_same_v<T, vector<int>>)
        {
            oss << ",";
        }
    }
    if constexpr (is_same_v<T, vector<int>>)
    {
        oss << "\t  ]";
    }
    else
    {
        oss << "]";
    }
    return oss.str();
}

template <typename T>
vector<T> VecCreator<T>::getVector() 
{
    return vec;
}


template class VecCreator<double>;
template class VecCreator<string>;
template class VecCreator<vector<int>>;