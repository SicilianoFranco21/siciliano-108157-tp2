#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__


#include <iostream>
#include "./producto.hpp"


class Vector {
    private:
        Producto** datos;
        size_t cantidadDatos;
        size_t tamanioMaximo;

        void aumentarCapacidadVector();
        void disminuirCapacidadVector();
        Vector& operator=(const Vector& otro);

    public:
        // Constructor.
        Vector();

        // Pre: -
        // Post: Agrega el dato al final del vector.
        void alta(Producto* dato);

        // Pre: El indice debe ser menor o igual que la cantidad de datos.
        // Post: Agrega el dato antes del dato en la posicion indicada, moviendo todos los elementos siguientes. Si el
        // indice es igual a la cantidad de datos, simplemente agrega al final.
        void alta(Producto* dato, size_t indice);

        // Pre: El vector no puede estar vacio.
        // Post: Elimina el ultimo dato.
        Producto* baja();

        // Pre: El vector no puede estar vacio. El indice debe ser menor que la cantidad de datos.
        // Post: Elimina el dato en la posicion indicada, moviendo todos los elementos siguientes. Si el indice es igual a
        // la cantidad de datos - 1, simplemente elimina el ultimo dato.
        Producto* baja(size_t indice);

        // Pre: -
        // Post: Devuelve true si el vector esta vacio (es decir, si no hay datos).
        bool vacio();

        // Pre: -
        // Post: Devuelve la cantidad de datos del vector.
        size_t tamanio();

        // Pre: El vector no puede estar vacio. El indice debe ser menor que la cantidad de datos.
        // Post: Devuelve una referencia al dato deseado.
        Producto*& operator[](size_t indice);

        // Destructor.
        ~Vector();
};

#endif