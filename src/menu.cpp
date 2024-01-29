#include "../headers/menu.hpp"


std::string Menu::colorearTexto(std::string color) {
    std::string color_elegido = "";
    if (color == "Rojo") {
        color_elegido += "\x1b[31m";
    }
    else if (color == "Amarillo") {
        color_elegido += "\x1b[33m";
    }
    else if (color == "Azul") {
        color_elegido += "\x1b[34m";
    }
    else if (color == "Reestablecer") {
        color_elegido += "\x1b[0m";
    }
    return color_elegido;
}


void Menu::mostrarMenuOpciones() {
    std::cout << "\n@-----------------------------------------@" << std::endl;
    std::cout << "|        *** SUPERMERCADO UBA ***         |" << std::endl;
    std::cout << "|  [1] - Agregar producto al chango       |" << std::endl;
    std::cout << "|  [2] - Quitar producto del chango       |" << std::endl;
    std::cout << "|  [3] - Mostrar productos del chango     |" << std::endl;
    std::cout << "|  [4] - Mostrar productos de la gondola  |" << std::endl;
    std::cout << "|  [5] - Salir del Supermercado UBA       |" << std::endl;
    std::cout << "@-----------------------------------------@" << std::endl;
}


void Menu::ingresarOpcion(std::string& opcion, std::string mensaje) {
    std::cout << mensaje;
    std::cin >> opcion;
}


void Menu::ejecutarMenuPrincipal() {
    
    mostrarMenuOpciones();

    std::string opcion;
    ingresarOpcion(opcion, "> Ingrese una opcion para comenzar: ");
    std::system("clear");

    while (opcion != "5") {
        if (opcion == "1") {
            
        }
        else if (opcion == "2") {

        }
        else if (opcion == "3") {

        }
        else if (opcion == "4") {

        }
        else {
            std::cout << "(>_<) NO ha ingresado una opcion valida!!! (>_<)" << std::endl;
            
        }
        std::cout << "\n================================================" << std::endl;
        mostrarMenuOpciones();
        ingresarOpcion(opcion, "> Ingrese una opcion para continuar: ");
        std::system("clear");
    }
    std::cout << "Gracias por realizar sus compras en Supermercado FIUBA" << std::endl;
}