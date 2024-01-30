#include "../headers/vector.hpp"


class VectorException : public std::exception {
    // Excepcion especifica y exclusivamente para errores dentro del VectorTemplate.
    // Usar de la forma "throw VectorException();" cuando una precondicion no se cumpla.

    // Ejemplo:
    //     if (condicion_de_error()){
    //         throw VectorException();
    //     }
    private:
        std::string mensajeError;

    public:
        // Constructor de la excepción
        VectorException() {
            mensajeError = "Error! Revisar las precondiciones de cada metodo!";
        }

        // Obtener el mensaje de error
        const char* what() const noexcept override {
            return mensajeError.c_str();
        }
};


// Constructor
Vector::Vector() {
    this->tamanioMaximo = 0; // Asigna un valor inicial a tamanioMaximo
    this->datos = new Producto*[tamanioMaximo];
    this->cantidadDatos = 0;
}


Vector& Vector::operator=(const Vector& otro) {
    // Comprobar si no estamos asignando el mismo objeto
    if (this != &otro) {
        // Liberar la memoria actual, si es necesario
        delete[] datos;

        // Realizar una copia profunda de los datos del otro objeto
        cantidadDatos = otro.cantidadDatos;
        datos = new Producto*[cantidadDatos];
        for (size_t i = 0; i < cantidadDatos; ++i) {
            datos[i] = otro.datos[i];
        }
    }
    // Devolver el propio objeto (esto permite la asignacion encadenada)
    return *this;
}


// aumentar capacidad vector
void Vector::aumentarCapacidadVector() {
    tamanioMaximo += 1;  
    Producto** nuevoArrayDatos = new Producto*[tamanioMaximo];
    
    // Copia los datos anteriores al nuevo arreglo.
    for (size_t i = 0; i < cantidadDatos; i++) {
        nuevoArrayDatos[i] = datos[i];
    }
    
    // Libera la memoria del antiguo arreglo.
    delete[] datos;
    
    // Asigna el nuevo arreglo a datos.
    datos = nuevoArrayDatos;
    }


// alta
void Vector::alta(Producto* dato) {
    if (cantidadDatos == tamanioMaximo) {
        aumentarCapacidadVector();
    }
    
    // Agrega el nuevo dato al final del vector.
    datos[cantidadDatos] = dato;
    cantidadDatos++;
}


// SOBRECARGA de alta
void Vector::alta(Producto* dato, size_t indice) {
    if (indice <= cantidadDatos) {
        if (cantidadDatos == tamanioMaximo) {
            aumentarCapacidadVector();
        }
        for (size_t i = cantidadDatos; i > indice; i--) {
            datos[i] = datos[i - 1];
        }
        datos[indice] = dato;
        cantidadDatos++;
    }
    else {
        throw VectorException();
    }
}


// disminuir capacidad vector
void Vector::disminuirCapacidadVector() {
    tamanioMaximo -= 1;  // Puedes elegir un factor de crecimiento apropiado.
    Producto** nuevoArrayDatos = new Producto*[tamanioMaximo];
    
    // Copia los datos anteriores al nuevo arreglo.
    for (size_t i = 0; i < cantidadDatos; i++) {
        nuevoArrayDatos[i] = datos[i];
    }
    
    // Libera la memoria del antiguo arreglo.
    delete[] datos;
    
    // Asigna el nuevo arreglo a datos.
    datos = nuevoArrayDatos;
}


// baja
Producto* Vector::baja() {
    if (!vacio()) {
        Producto* itemEliminado = datos[cantidadDatos - 1];
        datos[cantidadDatos - 1] = nullptr;
        cantidadDatos--;
        disminuirCapacidadVector();
        return itemEliminado;
    }

    else {
        throw VectorException();
    }    
}


// SOBRECARGA de baja
Producto* Vector::baja(size_t indice) {
    if (!vacio() && indice < cantidadDatos) {
        Producto* itemEliminado = datos[indice];
        for (size_t i = indice + 1; i < cantidadDatos; i++) {
            datos[i - 1] = datos[i];
        }
        datos[cantidadDatos - 1] = nullptr;
        disminuirCapacidadVector();
        cantidadDatos--;
        return itemEliminado;
    }
    else {
        throw VectorException();
    }
}


// vacio
bool Vector::vacio() {
    return cantidadDatos == 0;
}


// tamanio
size_t Vector::tamanio() {
    return cantidadDatos;
}


// SOBRECARGA operator [] para acceder a elementos del vector por indice
Producto*& Vector::operator[](size_t indice) {
    if (!vacio() && indice < cantidadDatos) {
        return datos[indice];
    }
    else {
        throw VectorException();
    }
}


// Destructor
Vector::~Vector() {
    delete[] datos;
}