#include "Funcion.h"

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

bool Funcion::InsertaVar(Variable var) {
    
    auto it = tablaVars.find(var.nombre);
    if(it == tablaVars.end()){
        std::pair<std::string,Variable> par (var.nombre, var);
        tablaVars.insert(par);
        return false;
    }
    return true;
}

