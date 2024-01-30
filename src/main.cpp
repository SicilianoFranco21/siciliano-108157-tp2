#include <iostream>
#include <fstream>
#include "../headers/chango.hpp"
#include "../headers/gondola.hpp"


using namespace std;
const unsigned int MAXIMO = 100000000;



int main() {
    Chango chango;
    Gondola gondola;
    Producto producto("Carne", 2000, 1, 10);
    Producto producto1("Pollo", 1500, 1, 15);
    Producto producto2("Cerdo", 2200, 1, 12);
    Producto producto3("BonOBon", 400, 0, 8);
    Producto producto4("Cereales", 1100, 1, 5);
    Producto producto5("Banana", 250, 0, 3);
    gondola.agregar_producto(&producto);
    gondola.agregar_producto(&producto1);
    gondola.agregar_producto(&producto2);
    gondola.agregar_producto(&producto3);
    gondola.agregar_producto(&producto4);
    gondola.agregar_producto(&producto5);
    gondola.mostrar_productos_gondola();
    cout << endl;
    return 0;
}