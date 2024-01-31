#ifndef __USUARIO_HPP__
#define __USUARIO_HPP__


#include "./producto.hpp"
#include <iostream>


class Usuario {
    public:
        static Producto* ingresar_producto();
};


#endif