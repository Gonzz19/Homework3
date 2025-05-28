
#include "../headers/mapjson.hpp"

using namespace std;

MapJson::MapJson() {}

void MapJson::mapeo(string clave, vector<double> valor)
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

void MapJson::mapeo(string clave, vector<string> valor)
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

void MapJson::mapeo(string clave, vector<vector<int>> valor)
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

string MapJson::imprimirJson()
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

