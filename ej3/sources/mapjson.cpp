
#include "../headers/mapjson.hpp"

using namespace std;

MapJson::MapJson() {}

void MapJson::mapeo(string clave, string valor)
{
    Json[clave] = valor;
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

