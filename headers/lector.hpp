#ifndef __LECTOR_HPP__
#define __LECTOR_HPP__


#include "chango.hpp"
#include "gondola.hpp"
#include <fstream>
#include <sstream>


class Lector {
    public:
        static void agregar_productos_gondola(Gondola *vector_gondola, std::string &ruta_archivo_gondola);
        static void procesar_archivo_gondola(Gondola *vector_gondola, std::string &ruta_archivo_gondola);
        static void agregar_productos_chango(Chango *vector_chango, std::string &ruta_archivo_chango);
        static void procesar_archivo_chango(Chango *vector_chango, std::string &ruta_archivo_chango);

};


#endif