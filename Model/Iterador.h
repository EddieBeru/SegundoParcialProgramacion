//
// Created by Lenovo on 12.05.2025.
//

#ifndef ITERADOR_H
#define ITERADOR_H

#include "Contenedor.h"

template<class T>
class Iterador {
    private:
      Contenedor<T>* contenedor;
      int index;
  public:
    Iterador(Contenedor<T>* contenedor = new Contenedor<T>());
  ~Iterador();
    bool haySiguiente();
    Nodo<T>* actual();
    Nodo<T>* siguiente();

};

template<class T>
Iterador<T>::Iterador(Contenedor<T>* contenedor) : contenedor(contenedor), index(0){}

template <class T>
Iterador<T>::~Iterador()
{
  delete contenedor;
}

template<class T>
bool Iterador<T>::haySiguiente(){
  return (index < contenedor->tamano()-1 );
}
template<class T>
Nodo<T>* Iterador<T>::actual(){
  return contenedor->buscar(index);
}
template<class T>
Nodo<T>* Iterador<T>::siguiente(){
  if (!haySiguiente()) return nullptr;
  index += 1;
  return contenedor->buscar(index);
}


#endif //ITERADOR_H
