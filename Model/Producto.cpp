//
// Created by Gregorio Villalobos on 10/5/25.
//

#include "Producto.h"

#include "Publisher.h"

Producto::Producto(const std::string& nombre, double precio)
        : nombre(nombre), precio(precio), enOferta(false) {}

void Producto::ponerEnOferta(double nuevoPrecio) {
    precio = nuevoPrecio;
    enOferta = true;
}

void Producto::quitarOferta() {
    enOferta = false;
}

std::string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}

bool Producto::estaEnOferta() const {
    return enOferta;
}
