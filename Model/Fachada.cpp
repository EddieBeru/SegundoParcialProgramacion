//
// Created by Lenovo on 11.05.2025.
//

#include "Fachada.h"

GestorProducto* Fachada::gestorProducto = new GestorProducto();
GestorUsuario* Fachada::gestorUsuario = new GestorUsuario();

Cliente* Fachada::getCliente(int i) {
	return gestorUsuario->buscarCliente(i);
}
void Fachada::agregarCliente(Cliente* cliente) {
	gestorUsuario->agregarCliente(cliente);
}
int Fachada::getTamanoClientes() {
	return gestorUsuario->getTamano();
}
void Fachada::agregarProducto(Producto* producto) {
	gestorProducto->agregarProducto(producto);
}
Producto* Fachada::getProducto(int i) {
	return gestorProducto->buscarProducto(i);
}
int Fachada::getTamanoProductos() {
	return gestorProducto->getTamano();
}
string Fachada::toStringProductos() {
	stringstream ss;
	for (int i = 0; i < gestorProducto->getTamano(); i++) {
		Producto* producto = gestorProducto->buscarProducto(i);
		if (producto != nullptr) {
			ss << i << "- \n\tNombre: " << producto->getNombre() << ", Precio: " << producto->getPrecio() << ", En oferta: " << (producto->estaEnOferta() ? "S�" : "No") << "\n";
		}
	}
	return ss.str();
}

void Fachada::liberar()
{
	delete gestorUsuario;
	delete gestorProducto;
}
