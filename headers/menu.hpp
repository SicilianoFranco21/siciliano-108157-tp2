#ifndef __MENU_HPP__
#define __MENU_HPP__


#include <iostream>
#include <string>


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
        static void ejecutarMenuPrincipal();
};


#endif