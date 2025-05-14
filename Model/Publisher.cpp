//
// Created by Lenovo on 12.05.2025.
//

#include "Publisher.h"

Contenedor<Suscriptor>* Publisher::suscriptores = new Contenedor<Suscriptor>();

void Publisher::suscribir(Suscriptor* suscrito){
  suscriptores->agregarPrincipio(new Nodo<Suscriptor>(suscrito));
}
void Publisher::desuscribir(Suscriptor* suscrito){
  suscriptores->eliminar(new Nodo<Suscriptor>(suscrito));
}
void Publisher::notificarSuscriptores(const std::string& que){
  Iterador<Suscriptor>* iterador = new Iterador<Suscriptor>(suscriptores);
  iterador->actual()->getItem()->notificar(que);
  while (iterador->haySiguiente()){
    iterador->siguiente()->getItem()->notificar(que);
  }
}