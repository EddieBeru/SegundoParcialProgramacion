//
// Created by Lenovo on 12.05.2025.
//

#ifndef SUSCRIPTOR_H
#define SUSCRIPTOR_H

#include "Cliente.h"

class Suscriptor {
private:
  Cliente* cliente;
public:
  Suscriptor(Cliente* cliente);
  ~Suscriptor();
  void notificar(std::string) const;
};



#endif //SUSCRIPTOR_H
