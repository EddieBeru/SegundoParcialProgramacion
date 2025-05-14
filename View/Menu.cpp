//
// Created by Lenovo on 11.05.2025.
//

#include "Menu.h"

Fachada* Menu::fachada = new Fachada();

void Menu::MenuPrincipal(){
    int eleccionUs = 0;
    while (eleccionUs != 7){
      system("cls");
      std::cout << "Menu Principal: \n"
        << "1. Cargar datos desde archivos.\n"
        << "2. Guardar datos desde archivos.\n"
        << "3. Agregar un nuevo producto. \n"
        << "4. Agregar un nuevo cleinte. \n"
        << "5. Poner un producto en oferta. \n"
        << "6. Quitar la oferta de un producto. \n"
        << "7. Salir. \n"
        << "Seleccione una opcion: ";
      std::cin >> eleccionUs;

      switch(eleccionUs){
        case 1:
          CargarArchivos();
          break;
        case 2:
          GuardarArchivos();
          break;
        case 3:
          AgregarProducto();
          break;
        case 4:
          AgregarCliente();
          break;
        case 5:
          PonerOferta();
          break;
        case 6:
          QuitarOferta();
          break;
        case 7:
          Cierre();
          break;
        default:
           std::cout << "El numero de eleccion es invalido\n";
      }
      system("pause");
    }
}
void Menu::CargarArchivos()
{
    Archivo::CargarUsuarios();
    std::cout << "Usuarios cargados!" << std::endl;
    Archivo::CargarProductos();
    std::cout << "Productos cargados!" << std::endl;
}
void Menu::GuardarArchivos(){
	Archivo::GuardarUsuarios();
	std::cout << "Usuarios guardados!" << std::endl;
	Archivo::GuardarProductos();
	std::cout << "Productos guardados!" << std::endl;
}
void Menu::AgregarProducto(){
	std::string nombre;
	double precio;
	std::cout << "Ingrese el nombre del producto: ";
    cin.ignore();
	getline(std::cin, nombre);
	std::cout << "Ingrese el precio del producto: ";
	std::cin >> precio;
	Producto* base = new Producto(nombre, precio);
	Fachada::agregarProducto(base);
	std::cout << "Producto agregado!" << std::endl;
}
void Menu::AgregarCliente(){
	std::string nombre, correo;
	std::cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
	getline(std::cin, nombre);
	std::cout << "Ingrese el correo del cliente: ";
	getline(std::cin, correo);
	Cliente* base = new Cliente(nombre, correo);
	Fachada::agregarCliente(base);
	Publisher::suscribir(new Suscriptor(base));
	std::cout << "Cliente agregado!" << std::endl;
}
void Menu::PonerOferta(){
    std::cout << Fachada::toStringProductos() << std::endl;
	int id;
	double precio;
	std::cout << "Ingrese el id del producto: ";
	std::cin >> id;
	if (id < 0 || id > Fachada::getTamanoProductos()) {
		std::cout << "El id es invalido" << std::endl;
		return;
	}
	std::cout << "Ingrese el nuevo precio del producto: ";
	std::cin >> precio;
	Producto* prod = Fachada::getProducto(id);
	prod->ponerEnOferta(precio);
	Publisher::notificarSuscriptores(prod->getNombre());

	std::cout << "Oferta puesta!" << std::endl;
}
void Menu::QuitarOferta(){
	std::cout << Fachada::toStringProductos() << std::endl;
	int id;
	std::cout << "Ingrese el id del producto: ";
	std::cin >> id;
	if (id < 0 || id > Fachada::getTamanoProductos()) {
		std::cout << "El id es invalido" << std::endl;
		return;
	}
	Producto* prod = Fachada::getProducto(id);
    if (!prod->estaEnOferta()) {
		std::cout << "El producto no tiene oferta" << std::endl;
		return;
    }
	prod->quitarOferta();
	std::cout << "Oferta quitada!" << std::endl;
}
void Menu::Cierre()
{
  std::cout << "Muchas gracias por usar nuestros servicios!" << std::endl;
}
void Menu::Liberar()
{
	delete fachada;
}
