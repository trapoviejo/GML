#include "Funcion.h"

Funcion::Funcion() {
    this->nombre = "";
	this->tipo = TIPO_VOID;
}

Funcion::Funcion(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
}

Funcion::~Funcion() {
 
}

bool Funcion::InsertaVar(Variable var) {
    if(!ExisteVar(var.nombre)){
        std::pair<std::string,Variable> par (var.nombre, var);
        tablaVars.insert(par);
        return true; //Inserte la variable
    }
    return false; //No inserte la variable
}

bool Funcion::ExisteVar(string nombre) {
    unordered_map<string,Variable>::const_iterator it = tablaVars.find(nombre);
    return (it != tablaVars.end());
}

