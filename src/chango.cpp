#include "../headers/gondola.hpp"
#include "../headers/chango.hpp"


Chango::Chango() {
    cantidad_productos_chango = 0;
}


void Chango::agregar_producto(Producto *producto) {
    vector_chango.alta(producto);
    cantidad_productos_chango++;
}


void Chango::quitar_producto() {
    vector_chango.baja();
    cantidad_productos_chango--;
}


void Chango::mostrar_productos_chango() {
    std::cout << "CHANGO..." << std::endl;
    std::cout << "PRODUCTO    " << "PRECIO    " << "OFERTA (0/1)    " << "CANTIDAD" << std::endl;
    for (size_t i = 0; i < cantidad_productos_chango; i++) {
        std::cout << vector_chango[i]->consultar_nombre_producto() << "    ";
        std::cout << vector_chango[i]->consultar_precio_producto() << "    ";
        std::cout << vector_chango[i]->consultar_oferta_producto() << "    ";
        std::cout << vector_chango[i]->consultar_stock_producto() << "    " << std::endl;
    }
}


void Chango::guardar_productos_chango(std::string ruta_archivo) {

}


size_t Chango::consultar_cantidad_productos() {
    return this->cantidad_productos_chango;
}