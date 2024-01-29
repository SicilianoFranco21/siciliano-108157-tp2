#include <iostream>
#include <ctime>
#include <fstream>
#include "../headers/vector.hpp"


using namespace std;
const unsigned int MAXIMO = 100000000;



int main() {
    Vector vector;
    Producto producto("Carne", 2000, 1, 20);
    vector.alta(&producto);
    cout << vector[0] << endl;
    return 0;
}