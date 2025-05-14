//
// Created by Gregorio Villalobos on 10/5/25.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "Utilities.h"

class Producto {
private:
    std::string nombre;
    double precio;
    bool enOferta;
public:
    Producto(const std::string& nombre, double precio);

    void ponerEnOferta(double nuevoPrecio);
    void quitarOferta();

    std::string getNombre() const;
    double getPrecio() const;
    bool estaEnOferta() const;
};



#endif //PRODUCTO_H
