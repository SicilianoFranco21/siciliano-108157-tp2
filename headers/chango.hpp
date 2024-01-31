// Basado en el archivo compra.txt
#ifndef __CHANGO_HPP__
#define __CHANGO_HPP__


#include <fstream>
#include "./vector.hpp"
const std::string RUTA_ARCHIVO_COMPRAS = "../tests/test_compra.txt";


class Chango {
    public: //private
        Vector vector_chango;
        size_t cantidad_productos_chango;

    public:
        // PRE:
        // POST:
        Chango();

        // PRE:
        // POST:
        void agregar_producto(Producto *producto);

        // PRE:
        // POST:
        void quitar_producto();

        // PRE:
        // POST:
        void mostrar_productos_chango();

        // PRE:
        // POST:
        void guardar_productos_chango(std::string ruta_archivo);
        
        // PRE:
        // POST:
        size_t consultar_cantidad_productos();
};


#endif