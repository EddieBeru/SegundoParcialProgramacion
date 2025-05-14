//
// Created by Lenovo on 12.05.2025.
//

#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "Contenedor.h"
#include "Suscriptor.h"
#include "Nodo.h"
#include "Iterador.h"

class Publisher {
private:
    static Contenedor<Suscriptor>* suscriptores;
public:
    static void suscribir(Suscriptor* suscripto);
    static void desuscribir(Suscriptor* suscripto);
    static void notificarSuscriptores(const std::string& que);
};



#endif //PUBLISHER_H
