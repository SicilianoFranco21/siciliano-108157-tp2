#include "../headers/gondola.hpp"
#include "../headers/chango.hpp"


Gondola::Gondola() {
    cantidad_productos_gondola = 0;
}


void Gondola::agregar_producto(Producto *producto) {
    vector_gondola.alta(producto);
    cantidad_productos_gondola++;
}


void Gondola::mostrar_productos_gondola() {
    std::cout << "GONDOLA..." << std::endl;
    std::cout << "PRODUCTO    " << "PRECIO    " << "OFERTA (0/1)    " << "CANTIDAD" << std::endl;
    for (size_t i = 0; i < cantidad_productos_gondola; i++) {
        std::cout << vector_gondola[i]->consultar_nombre_producto() << "    ";
        std::cout << vector_gondola[i]->consultar_precio_producto() << "    ";
        std::cout << vector_gondola[i]->consultar_oferta_producto() << "    ";
        std::cout << vector_gondola[i]->consultar_stock_producto() << "    " << std::endl;
    }
}


void Gondola::guardar_productos_gondola(std::string ruta_archivo) {

}


size_t Gondola::consultar_cantidad_productos() {
    return this->cantidad_productos_gondola;
}


void Gondola::actualizar_stock(const std::string nombre_producto, int cantidad_producto_comprado) {
    for (size_t i = 0; i < cantidad_productos_gondola; i++) {
        if (nombre_producto == vector_gondola[i]->consultar_nombre_producto()) {
            this->vector_gondola[i]->stock -= cantidad_producto_comprado;
            return;
        }
    }
}