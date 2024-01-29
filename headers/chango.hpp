// Basado en el archivo compra.txt
#ifndef __CHANGO_HPP__
#define __CHANGO_HPP__


#include "./vector.hpp"



class Chango {
    private:
        Vector vector_chango;
        size_t capacidad_actual_almacenamiento;

    public:
        // PRE:
        // POST:
        Chango();

        // PRE:
        // POST:
        void agregar_producto();

        // PRE:
        // POST:
        void quitar_producto();

        // PRE:
        // POST:
        void mostrar_productos_chango();

        // PRE:
        // POST:
        void guardar_productos_chango(std::string ruta_archivo);
};


#endif