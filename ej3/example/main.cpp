
#include "../headers/vectortostring.hpp"
#include <iostream>
#include <string>


using namespace std;


int main()
{
    keyValue json;
    Vecreator elementos;

    vector<int> vec1 = {1,2};
    vector<int> vec2 = {3,4};
    string s1 = "Hola";
    string s2 = "Mundo";

    elementos.agregar(1.3);
    elementos.agregar(2.1);
    elementos.agregar(3.2);
    elementos.agregar(s1);
    elementos.agregar(s2);
    elementos.agregar(vec1);
    elementos.agregar(vec2);

    // El map desordenado apila los elementos, por eso los meto de esta manera
    json.mapeo("listas", elementos.getVecMatriz());
    json.mapeo("palabras", elementos.getVecString());
    json.mapeo("vec_doubles", elementos.getVecDouble());
    cout << json.imprimirJson() << endl;
    return 0;
}