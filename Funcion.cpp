#include "Funcion.h"
#include "gml.tipos.h" 

Funcion::Funcion() {
    this->nombre = "";
	this->tipo = TIPO_VOID;
}

Funcion::Funcion(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
    std::cout << "funcion " << nombre << "! tipo" << tipo << endl;
}

Funcion::~Funcion() {
 
}