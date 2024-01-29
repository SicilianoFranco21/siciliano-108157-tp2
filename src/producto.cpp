#include "../headers/producto.hpp"


Producto::Producto(std::string nombre_producto, double precio_producto, int oferta, int stock) {
    this->nombre_producto = nombre_producto;
    this->precio_producto = precio_producto;
    this->oferta = oferta;
    this->stock = stock;
}


int Producto::modificar_stock(int nuevo_stock) {
    return stock = nuevo_stock;
}