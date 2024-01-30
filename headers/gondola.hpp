// Basado en el archivo compra.txt
#ifndef __GONDOLA_HPP__
#define __GONDOLA_HPP__


#include <fstream>
#include "./vector.hpp"
const std::string RUTA_ARCHIVO_PRODUCTOS = "../tests/test_productos.txt";


class Gondola {
    private:
        Vector vector_gondola;
        size_t cantidad_productos_gondola;

    public:
        // PRE:
        // POST:
        Gondola();

        // PRE:
        // POST:
        void agregar_producto(Producto *producto);

        // PRE:
        // POST:
        void mostrar_productos_gondola();

        // PRE:
        // POST:
        void guardar_productos_gondola(std::string ruta_archivo);

        // PRE:
        // POST:
        size_t consultar_cantidad_productos();
};


#endif