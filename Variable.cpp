#include "Variable.h"

Variable::Variable() {
    this->nombre = "no inicializada";
	this->tipo = TIPO_VOID;
}

Variable::Variable(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
}

Variable::Variable(string nombre, int tipo, int direccion) {
    this->nombre = nombre;
	this->tipo = tipo;
    this->direccion = direccion;
    this->subtipo = TIPO_VOID;
}


Variable::Variable(string nombre, int tipo, int direccion, int subtipo) {
    this->nombre = nombre;
	this->tipo = tipo;
    this->direccion = direccion;
    this->subtipo = subtipo;
}

Variable::~Variable() {

}
