//
// Created by Lenovo on 11.05.2025.
//

#include "GestorUsuario.h"

GestorUsuario::GestorUsuario() {
	cont = new Contenedor<Cliente>();
}
GestorUsuario::~GestorUsuario()
{
	delete cont;
}
void GestorUsuario::agregarCliente(Cliente* cliente) {
	cont->agregarFinal(new Nodo<Cliente>(cliente));
}
int GestorUsuario::getTamano() {
	return cont->tamano();
}
Cliente* GestorUsuario::buscarCliente(int i) {
	Nodo<Cliente>* cliente = cont->buscar(i);
	if (cliente != nullptr) {
		return cliente->getItem();
	}
	return nullptr;
}