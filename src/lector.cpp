#include "../headers/lector.hpp"


void Lector::agregar_productos_gondola(Gondola *gondola, const std::string &ruta_archivo_gondola) {
    std::ofstream archivo_salida(ruta_archivo_gondola);
    if (!archivo_salida.is_open()) {
        std::cerr << "No se pudo abrir el archivo 'productos.txt'" << std::endl;
        return;
    }
    std::string header = "producto precio 0/1 stock";
    archivo_salida << header << std::endl;
    for (size_t i = 0; i < gondola->consultar_cantidad_productos(); i++) {
        archivo_salida << gondola->vector_gondola[i]->consultar_nombre_producto() << " ";
        archivo_salida << gondola->vector_gondola[i]->consultar_precio_producto() << " ";
        archivo_salida << gondola->vector_gondola[i]->consultar_oferta_producto() << " ";
        archivo_salida << gondola->vector_gondola[i]->consultar_stock_producto() << std::endl;
    }
}


void Lector::procesar_archivo_gondola(Gondola *gondola, const std::string &ruta_archivo_gondola) {
    std::ifstream archivo_gondola(ruta_archivo_gondola);
        if (!archivo_gondola.is_open()) {
            std::cerr << "Error al abrir el archivo 'chango.txt'." << std::endl;
            return;
        }

        std::string linea;
        int contador_renglones = 0;
        while (std::getline(archivo_gondola, linea)) {
            std::istringstream lineaStream(linea);
            
            std::string nombre_producto_str, precio_producto_str, oferta_str, stock_str;

            if (std::getline(lineaStream, nombre_producto_str, ' ') &&
                std::getline(lineaStream, precio_producto_str, ' ') &&
                std::getline(lineaStream, oferta_str, ' ') &&
                std::getline(lineaStream, stock_str, ' ')) {
                if (contador_renglones > 0) {
                    double precio_producto = std::stod(precio_producto_str);
                    int oferta = std::stoi(oferta_str);
                    int stock = std::stoi(stock_str);
                    Producto* producto = new Producto(nombre_producto_str, precio_producto, oferta, stock);
                    gondola->agregar_producto(producto);
                }
                contador_renglones++;
            } else {
                std::cerr << "Error al leer los campos en la línea: " << linea << std::endl;
            }
        }
        archivo_gondola.close();
}


void Lector::agregar_productos_chango(Chango *chango, const std::string &ruta_archivo_chango) {

}


void Lector::procesar_archivo_chango(Chango *chango, const std::string &ruta_archivo_chango) {
/*     
    std::ifstream archivo_chango(ruta_archivo_chango);
        if (!archivo_chango.is_open()) {
            std::cerr << "Error al abrir el archivo 'chango.txt'." << std::endl;
            return;
        }

        std::string linea;
        while (std::getline(archivo_chango, linea)) {
            std::istringstream lineaStream(linea);
            
            std::string nombre_producto_str, precio_producto_str, oferta_str, stock_str;

            // Cambia el número de campos a leer según la cantidad que tengas en tu archivo
            if (std::getline(lineaStream, nombre_producto_str, ' ') &&
                std::getline(lineaStream, precio_producto_str, ' ') &&
                std::getline(lineaStream, oferta_str, ' ') &&
                std::getline(lineaStream, stock_str, ' ')) {
                double precio_producto = std::stod(precio_producto_str);
                int oferta = std::stoi(oferta_str);
                int stock = std::stoi(stock_str);
                Producto* producto = new Producto(nombre_producto_str, precio_producto, oferta, stock);
                vector_chango->agregar_producto(producto);
            } else {
                std::cerr << "Error al leer los campos en la línea: " << linea << std::endl;
            }
        }
        archivo_chango.close(); */
}