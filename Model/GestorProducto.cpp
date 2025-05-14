//
// Created by Lenovo on 11.05.2025.
//

#include "GestorProducto.h"

GestorProducto::GestorProducto() {
	cont = new Contenedor<Producto>();
}
GestorProducto::~GestorProducto()
{
	delete cont;
}
void GestorProducto::agregarProducto(Producto* producto) {
	cont->agregarFinal(new Nodo<Producto>(producto));
}
int GestorProducto::getTamano() {
	return cont->tamano();
}
Producto* GestorProducto::buscarProducto(int i) {
	Nodo<Producto>* Producto = cont->buscar(i);
	if (Producto != nullptr) {
		return Producto->getItem();
	}
	return nullptr;
}