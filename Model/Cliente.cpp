//
// Created by Gregorio Villalobos on 10/5/25.
//

#include "Cliente.h"

Cliente::Cliente(const std::string& nombre, const std::string& email)
        : nombre(nombre), email(email) {}

void Cliente::recibirNotificacion(const std::string& producto) {
    std::cout << "Notificación para " << nombre << ": El producto " << producto << " está en oferta!" << std::endl;
}

std::string Cliente::getNombre() const {
    return nombre;
}

std::string Cliente::getEmail() const {
    return email;
}

std::ostream& operator<<(std::ostream& os, const Cliente& cliente)
{
    return os << "Nombre: " << cliente.getNombre() << ", Email: " << cliente.getEmail() << std::endl;
}

