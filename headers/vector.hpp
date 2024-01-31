#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__


#include <iostream>
#include "./producto.hpp"


class Vector {
    public: // private
        Producto** datos;
        size_t cantidadDatos;
        size_t tamanioMaximo;

        void aumentarCapacidadVector();
        void disminuirCapacidadVector();
        Vector& operator=(const Vector& otro);
    public:
        // Constructor.
        Vector();

        // PRE: -
        // POST: Agrega el dato al final del vector.
        void alta(Producto* dato);

        // PRE: El indice debe ser menor o igual que la cantidad de datos.
        // POST: Agrega el dato antes del dato en la posicion indicada, moviendo todos los elementos siguientes. Si el
        // indice es igual a la cantidad de datos, simplemente agrega al final.
        void alta(Producto* dato, size_t indice);

        // PRE: El vector no puede estar vacio.
        // POST: Elimina el ultimo dato.
        Producto* baja();

        // PRE: El vector no puede estar vacio. El indice debe ser menor que la cantidad de datos.
        // POST: Elimina el dato en la posicion indicada, moviendo todos los elementos siguientes. Si el indice es igual a
        // la cantidad de datos - 1, simplemente elimina el ultimo dato.
        Producto* baja(size_t indice);

        // PRE: -
        // POST: Devuelve true si el vector esta vacio (es decir, si no hay datos).
        bool vacio();

        // PRE: -
        // POST: Devuelve la cantidad de datos del vector.
        size_t tamanio();

        // PRE: El vector no puede estar vacio. El indice debe ser menor que la cantidad de datos.
        // POST: Devuelve una referencia al dato deseado.
        Producto*& operator[](size_t indice);

        // Destructor.
        ~Vector();
};

#endif