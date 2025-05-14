//
// Created by Lenovo on 11.05.2025.
//

#ifndef FACHADA_H
#define FACHADA_H

#include "GestorUsuario.h"
#include "GestorProducto.h"

class Fachada {
private:
	static GestorUsuario* gestorUsuario;
	static GestorProducto* gestorProducto;
public:
	static void agregarCliente(Cliente* cliente) ;
	static Cliente* getCliente(int);
	static int getTamanoClientes() ;
	static void agregarProducto(Producto* producto);
	static Producto* getProducto(int i) ;
	static int getTamanoProductos();
	static string toStringProductos();
	static void liberar();
};



#endif //FACHADA_H
