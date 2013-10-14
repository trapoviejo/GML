#include "Funcion.h" 

Funcion::Funcion(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
    std::cout << "funcion " << nombre << "! tipo" << tipo << endl;
}

Funcion::~Funcion() {
 
}