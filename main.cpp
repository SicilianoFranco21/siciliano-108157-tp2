#include <iostream>
#include <ctime>
#include <fstream>


using namespace std;
const unsigned int MAXIMO = 100000000;


bool es_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    long int ti = clock();
    fstream archivo;
    archivo.open("primos.txt");
    unsigned int contador_primos = 0;
    for (unsigned int i = 2; i < MAXIMO; i++) {
        if (es_primo(i)) {
            archivo << i << endl;
            contador_primos++;
        }
    }
    long int tf = clock();
    double tiempo_total = (double(tf - ti))/ CLOCKS_PER_SEC;
    archivo << "Cantidad de numeros primos: " << contador_primos << endl;
    archivo << "Cantidad de tiempo demorado: " << tiempo_total << endl;
    archivo.close();
    return 0;
}