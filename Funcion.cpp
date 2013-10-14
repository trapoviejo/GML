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

Funcion::InsertaVar(Variable var) {
    std::pair<std::string,Variable> par (nuevaVar.nombre, nuevaVar);
    tablaVars.insert(par);
}

