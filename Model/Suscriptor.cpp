//
// Created by Lenovo on 12.05.2025.
//

#include "Suscriptor.h"

Suscriptor::Suscriptor(Cliente* cliente) : cliente(cliente){}

Suscriptor::~Suscriptor(){delete cliente;}

void Suscriptor::notificar(std::string que) const{
    cliente->recibirNotificacion(que);
  }