#include "../headers/usuario.hpp"


Producto* Usuario::ingresar_producto() {
    std::string nombre_producto;
    std::cout << "Ingresar nombre del producto: ";
    std::cin >> nombre_producto;

    double precio_producto;
    std::cout << "Ingresar precio del producto: ";
    std::cin >> precio_producto;

    int oferta;
    std::cout << "Ingresar si esta en oferta: ";
    std::cin >> oferta;

    int stock;
    std::cout << "Ingresar stock: ";
    std::cin >> stock; 

    Producto* producto = new Producto(nombre_producto, precio_producto, oferta, stock);
    return producto;
}