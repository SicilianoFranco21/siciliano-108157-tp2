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

        // PRE:
        // POST:
        int modificar_stock(int nuevo_stock);

        // PRE:
        // POST:
        std::string consultar_nombre_producto();

        // PRE:
        // POST:
        double consultar_precio_producto();

        // PRE:
        // POST:
        int consultar_oferta_producto();

        // PRE:
        // POST:
        int consultar_stock_producto();
};


#endif