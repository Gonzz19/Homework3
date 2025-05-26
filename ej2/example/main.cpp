
#include "../headers/circulo.hpp"
#include "../headers/rectangulo.hpp"
#include "../headers/elipse.hpp"
#include "../headers/procesador.hpp"
#include "../headers/punto.hpp"
#include <iostream>

using namespace std;

int main() {
    Circulo c(2, 3, 5);
    Rectangulo r(1, 1, 4, 3);
    Elipse e(0, 0, 3, 2);

    ProcesadorFiguras<Circulo> procesadorCirculo;
    ProcesadorFiguras<Rectangulo> procesadorRectangulo;
    ProcesadorFiguras<Elipse> procesadorElipse;

    procesadorCirculo.area(c);
    procesadorRectangulo.area(r);
    procesadorElipse.area(e);

    return 0;
}
