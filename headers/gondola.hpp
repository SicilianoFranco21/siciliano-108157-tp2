// Basado en el archivo compra.txt
#ifndef __GONDOLA_HPP__
#define __GONDOLA_HPP__


#include "./vector.hpp"
const std::string RUTA_ARCHIVO_PRODUCTOS = "../tests/productos.txt";


class Gondola {
    private:
        Vector vector_gondola;
        size_t capacidad_actual_almacenamiento;

    public:
        // PRE:
        // POST:
        Gondola();

        // PRE:
        // POST:
        void agregar_producto();

        // PRE:
        // POST:
        void mostrar_productos_gondola();

        // PRE:
        // POST:
        void guardar_productos_gondola(std::string ruta_archivo);
};


#endif