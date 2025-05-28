

#ifndef MAPJSON_HPP
#define MAPJSON_HPP

#include <unordered_map>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;


// Clase para crear el formato clave-valor e imprimirlo en formato JSON

class MapJson
{
private:
    unordered_map<string, string> Json;

public:
    MapJson();
    void mapeo(string clave, vector<double> valor);
    void mapeo(string clave, vector<string> valor);
    void mapeo(string clave, vector<vector<int>> valor);
    string imprimirJson();
    ~MapJson() = default;
};

#endif