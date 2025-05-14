//
// Created by Gregorio Villalobos on 10/5/25.
//

#ifndef CLIENTE_H
#define CLIENTE_H

#include "Utilities.h"

class Cliente {
private:
    std::string nombre;
    std::string email;

public:
    Cliente(const std::string& nombre, const std::string& email);

    void recibirNotificacion(const std::string& producto);

    std::string getNombre() const;
    std::string getEmail() const;

    friend std::ostream& operator<<(std::ostream& os, const Cliente& cliente);
};



#endif //CLIENTE_H
