#ifndef __MENU_HPP__
#define __MENU_HPP__


#include "./gondola.hpp"
#include "./chango.hpp"
#include "./usuario.hpp"


class Menu {
    public:
        // PRE :
        // POST:
        std::string colorearTexto(std::string color);

        // PRE :
        // POST:
        static void mostrarMenuOpciones();

        // PRE :
        // POST:
        static void ingresarOpcion(std::string& opcion, std::string mensaje);

        // PRE :
        // POST:
        static void ejecutarMenuPrincipal(Chango &chango, Gondola &gondola);
};


#endif