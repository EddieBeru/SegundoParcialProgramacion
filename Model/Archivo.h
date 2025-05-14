//
// Created by Lenovo on 11.05.2025.
//

#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "GestorUsuario.h"
#include "Utilities.h"
#include "Cliente.h"
#include "Contenedor.h"
#include "Fachada.h"

class Archivo {
public:
  static void CargarUsuarios();
  static void GuardarUsuarios();
  static void CargarProductos();
  static void GuardarProductos();
};



#endif //ARCHIVO_H
