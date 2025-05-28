
#include "../headers/circulo.hpp"
#include "../headers/rectangulo.hpp"
#include "../headers/elipse.hpp"
#include "../headers/procesador.hpp"
#include "../headers/punto.hpp"
#include <iostream>

using namespace std;

int main() {
    // Creo los puntos dentro de los constructores de las figuras


    Circulo c(2.0f, 3.0f, 5.0f);
    Rectangulo r(1.0f, 1.0f, 4.0f, 3.0f);
    Elipse e(0.0f, 0.0f, 3.f, 2.0f);

    // Creo los procesadores de figuras
    ProcesadorFiguras<Circulo> procesadorCirculo;
    ProcesadorFiguras<Rectangulo> procesadorRectangulo;
    ProcesadorFiguras<Elipse> procesadorElipse;

    // Calculo el area de cada figura utilizando las plantillas
    procesadorCirculo.area(c);
    procesadorRectangulo.area(r);
    procesadorElipse.area(e);
    
    // Pruebo el metodo getCentro, idem para las otras figuras
    Punto hola = c.getCentro();
    cout << "Centro del circulo: (" << hola.getX() << ", " << hola.getY() << ")" << endl;
    return 0;
}
