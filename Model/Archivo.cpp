//
// Created by Lenovo on 11.05.2025.
//

#include "Archivo.h"

#include "Publisher.h"

void Archivo::CargarUsuarios(){
    std::ifstream archivo("../clientes.csv");
    std::string linea;
    char delimitador = ';';
    while (getline(archivo, linea))
    {
        std::stringstream stream(linea);
        std::string nombre, correo;
        getline(stream, nombre, delimitador);
        getline(stream, correo, delimitador);

        Cliente* base = new Cliente(nombre, correo);
        Fachada::agregarCliente(base);
        Publisher::suscribir(new Suscriptor(base));
    }
    archivo.close();
}
void Archivo::GuardarUsuarios(){
	std::ofstream archivo("../clientes.csv");
	for (int i = 0; i < Fachada::getTamanoClientes(); i++) {
		Cliente* cliente = Fachada::getCliente(i);
		if (cliente != nullptr) {
			archivo << cliente->getNombre() << ";" << cliente->getEmail() << "\n";
		}
	}
    archivo.close();
}
void Archivo::CargarProductos(){
    std::ifstream archivo("../productos.csv");
    std::string linea;
    char delimitador = ';';
    while (getline(archivo, linea))
    {
        std::stringstream stream(linea);
        std::string nombre, oferta, precio;
		double precioD;
        getline(stream, nombre, delimitador);
        getline(stream, precio, delimitador);
        getline(stream, oferta, delimitador);

		precioD = std::stod(precio);

        Producto* base = new Producto(nombre, precioD);
        if (oferta == "TRUE") 
			base->ponerEnOferta(precioD);
        Fachada::agregarProducto(base);
    }
	archivo.close();
}
void Archivo::GuardarProductos(){
    std::ofstream archivo("../productos.csv");
    for (int i = 0; i < Fachada::getTamanoProductos(); i++) {
        Producto* prod = Fachada::getProducto(i);
        if (prod != nullptr) {
            archivo << prod->getNombre() << ";" << prod->getPrecio() << ";" << (prod->estaEnOferta() ? "TRUE" : "FALSE") << "\n";
        }
    }
    archivo.close();
}