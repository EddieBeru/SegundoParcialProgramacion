//
// Created by Lenovo on 11.05.2025.
//

#ifndef GESTORPRODUCTO_H
#define GESTORPRODUCTO_H

#include "Producto.h"
#include "Contenedor.h"

class GestorProducto {
private:
    Contenedor<Producto>* cont;
public:
    GestorProducto();
    ~GestorProducto();
    void agregarProducto(Producto*);
    int getTamano();
    Producto* buscarProducto(int);
};

#endif //GESTORPRODUCTO_H
