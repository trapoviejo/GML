#include "Variable.h"

Variable::Variable() {
    this->nombre = "";
	this->tipo = TIPO_INT;
}

Variable::Variable(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
}

Variable::Variable(string nombre, int tipo, int direccion) {
    this->nombre = nombre;
	this->tipo = tipo;
    this->direccion = direccion;
}

Variable::~Variable() {

}
