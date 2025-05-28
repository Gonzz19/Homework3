

#ifndef VECTORTOSTRING_HPP
#define VECTORTOSTRING_HPP

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <unordered_map>


using namespace std;


class Vecreator
{
private:
    vector<double> vecDouble;
    vector<string> vecString;
    vector<vector<int>> vecMatriz;

public:
    template <typename T>
    void agregar(T valor)
    {
        if constexpr(is_same_v<T, double>)
        {
            vecDouble.push_back(valor);
        }
        else if constexpr(is_same_v<T, string>)
        {
            vecString.push_back(valor);
        }
        else if constexpr(is_same_v<T, vector<int>>)
        {
            vecMatriz.push_back(valor);
        }
    }

    vector<double> getVecDouble()
    {
        return vecDouble;
    }

    vector<string> getVecString()
    {
        return vecString;
    }

    vector<vector<int>> getVecMatriz()
    {
        return vecMatriz;
    }
};


class keyValue
{
private:
    unordered_map<string, string> Json;

public:
    void mapeo(string clave, vector<double> valor)
    {
        ostringstream oss;
        oss << "[";
        for (int i = 0; i < static_cast<int>(valor.size()); i++)
        {
            oss << valor[i];
            if (i < static_cast<int>(valor.size()) - 1)
            {
                oss << ", ";
            }
        }
        oss << "]";
        Json[clave] = oss.str();
    }

    void mapeo(string clave, vector<string> valor)
    {
        ostringstream oss;
        oss << "[";
        for (int i = 0; i < static_cast<int>(valor.size()); i++)
        {
            oss << "\"" << valor[i] << "\"";
            if (i < static_cast<int>(valor.size()) - 1)
            {
                oss << ", ";
            }
        }
        oss << "]";
        Json[clave] = oss.str();
    }

    void mapeo(string clave, vector<vector<int>> valor)
    {
        ostringstream oss;
        oss << "[\n";
        for (int i = 0; i < static_cast<int>(valor.size()); i++)
        {
            oss << " \t[";
            for (int j = 0; j < static_cast<int>(valor[i].size()); j++)
            {
                oss << valor[i][j];
                if (j < static_cast<int>(valor[i].size()) - 1)
                {
                    oss << ", ";
                }
            }
            oss << "]";
            if (i < static_cast<int>(valor.size()) - 1)
            {
                oss << ",\n";
            }
        }
        oss << "\n\t]";
        Json[clave] = oss.str();
    }

    string imprimirJson()
    {
        ostringstream oss;
        oss << "{";
        int count = 0;
        for (pair<string, string> par : Json)
        {
            oss << " \"" << par.first << "\" : " << par.second;
            if (count < static_cast<int>(Json.size())-1)
            {
                oss << ",";
            }
            oss << "\n";
        }
        oss << "}";
        return oss.str();
    }
};


#endif