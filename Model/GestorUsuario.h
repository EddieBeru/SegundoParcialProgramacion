//
// Created by Lenovo on 11.05.2025.
//

#ifndef GESTORUSUARIO_H
#define GESTORUSUARIO_H

#include "Contenedor.h"
#include "Cliente.h"

class GestorUsuario {
private:
    Contenedor<Cliente>* cont;
public:
    GestorUsuario();
    ~GestorUsuario();
    void agregarCliente(Cliente*);
    int getTamano();
    Cliente* buscarCliente(int);
};



#endif //GESTORUSUARIO_H
