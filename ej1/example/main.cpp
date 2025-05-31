

#include "../headers/SaveFlightData.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    Posicion pos(-34.6f, -58.4f, 950.0f, 5.3f); 
    Presion pre(101.3f, 5.8f, 6.1f);

    SaveFlightData data(pos, pre);
    data.imprimir();

    ofstream outFile("bin/flight_data.bin", ios::binary);
    if (outFile.is_open()) {
        data.serializar(outFile);
        outFile.close();
    }

    Posicion newPos(0.0f, 0.0f, 0.0f, 0.0f);
    Presion newPre(0.0f, 0.0f, 0.0f);
    SaveFlightData newData(newPos, newPre);
    
    ifstream inFile("bin/flight_data.bin", ios::binary);
    
    if (inFile.is_open()) {
        newData.deserializar(inFile);
        inFile.close();
    }

    newData.imprimir();
    return 0;
}