//
// Created by Lenovo on 11.05.2025.
//

#ifndef MENU_H
#define MENU_H

#include "../Model/Fachada.h"
#include "../Model/Utilities.h"
#include "../Model/Archivo.h"
#include "../Model/Publisher.h"

class Menu {
private:
  static Fachada* fachada;
public:
  static void MenuPrincipal();
  static void CargarArchivos();
  static void GuardarArchivos();
  static void AgregarProducto();
  static void AgregarCliente();
  static void PonerOferta();
  static void QuitarOferta();
  static void Cierre();
  static void Liberar();
};



#endif //MENU_H
