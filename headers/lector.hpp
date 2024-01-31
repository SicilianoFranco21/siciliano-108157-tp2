#ifndef __LECTOR_HPP__
#define __LECTOR_HPP__


#include "chango.hpp"
#include "gondola.hpp"
#include <fstream>
#include <sstream>


class Lector {
    public:
        static void agregar_producto_gondola(const std::string &archivo_gondola, Vector &vector_gondola);
        static void procesar_archivo_gondola(Gondola *vector_gondola, std::string &ruta_archivo_gondola);
        static void agregar_producto_chango(const std::string &archivo_chango, Vector &vector_chango);
        static void procesar_archivo_chango(Gondola *vector_chango, std::string &ruta_archivo_chango);

};


#endif