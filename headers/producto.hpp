#ifndef __PRODUCTO_HPP__
#define __PRODUCTO_HPP__


#include <string>


class Producto {
    private:
        std::string nombre_producto;
        double precio_producto;
        int oferta;
        int stock;


    public:
        // constructor
        // PRE: 
        // POST: 
        Producto(std::string nombre_producto, double precio_producto, int oferta, int stock);

        // setter
        // PRE:
        // POST:
        int modificar_stock(int nuevo_stock);

};


#endif