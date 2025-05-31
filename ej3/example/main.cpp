
#include "../headers/veccreator.hpp"
#include "../headers/mapjson.hpp"

#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main()
{
    VecCreator<double> vecDoubleCreator;
    VecCreator<string> vecStringCreator;
    VecCreator<vector<int>> vecMatrizCreator;
    MapJson mapJson;

    // Agregar valores al vector de doubles
    vecDoubleCreator.agregar(1.3);
    vecDoubleCreator.agregar(2.1);
    vecDoubleCreator.agregar(3.2);

    // Agregar valores al vector de strings
    vecStringCreator.agregar("Hola");
    vecStringCreator.agregar("Mundo");

    // Agregar valores al vector de vectores de enteros
    vecMatrizCreator.agregar(vector<int>{1, 2});
    vecMatrizCreator.agregar(vector<int>{3, 4});

    // Mapear los vectores a JSON
<<<<<<< HEAD
    mapJson.mapeo("listas", vecMatrizCreator.vecTostring());
    mapJson.mapeo("palabras", vecStringCreator.vecTostring());
    mapJson.mapeo("vec_doubles", vecDoubleCreator.vecTostring());
=======
    mapJson.mapeo("listas", vecMatrizCreator.getVector());
    mapJson.mapeo("palabras", vecStringCreator.getVector());
    mapJson.mapeo("vec_doubles", vecDoubleCreator.getVector());
>>>>>>> c66287349add1b374fa6ac0fb47a1e9b0333dd35

    // Imprimir el JSON resultante
    cout << mapJson.imprimirJson() << endl;
    return 0;
}
