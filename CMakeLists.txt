cmake_minimum_required(VERSION 3.30)
project(SegundParcial)

set(CMAKE_CXX_STANDARD 20)

add_executable(SegundParcial
        main.cpp
        Model/Cliente.h
        Model/Cliente.cpp
        Model/Producto.h
        Model/Producto.cpp
        Model/Utilities.h
View/Menu.h
View/Menu.cpp
Model/Archivo.h
Model/Archivo.cpp
Model/Contenedor.h
Model/Fachada.cpp
Model/Fachada.h
Model/GestorUsuario.h
Model/GestorUsuario.cpp
Model/GestorProducto.cpp
Model/GestorProducto.h
        Model/Nodo.h
Model/Publisher.cpp
Model/Publisher.h
Model/Suscriptor.cpp
Model/Suscriptor.h
Model/Iterador.h)
