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


std::string Producto::consultar_nombre_producto() {
    return this->nombre_producto;
}


double Producto::consultar_precio_producto() {
    return this->precio_producto;
}


int Producto::consultar_oferta_producto() {
    return this->oferta;
}


int Producto::consultar_stock_producto() {
    return this->stock;
}