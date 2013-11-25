#include "Funcion.h"

Funcion::Funcion() {
    this->nombre = "";
	this->tipo = TIPO_VOID;
    this->direccion = -1;
    for (int i = 0; i < 8; i++){
        this->vars[i] = 0;
        this->temps[i] = 0;
    }
    this->numFuncion = -1;
}

Funcion::Funcion(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
    this->direccion = -1;
    for (int i = 0; i < 8; i++){
        this->vars[i] = 0;
        this->temps[i] = 0;
    }
    this->numFuncion = -1;
}

Funcion::Funcion(string nombre, int tipo, int direccion) {
    this->nombre = nombre;
	this->tipo = tipo;
    this->direccion = direccion;
    for (int i = 0; i < 8; i++){
        this->vars[i] = 0;
        this->temps[i] = 0;
    }
    this->numFuncion = -1;
}

Funcion::Funcion(int numFuncion, string nombre, int tipo, int direccion) {
    this->nombre = nombre;
	this->tipo = tipo;
    this->direccion = direccion;
    for (int i = 0; i < 8; i++){
        this->vars[i] = 0;
        this->temps[i] = 0;
    }
    this->numFuncion = numFuncion;
}

Funcion::~Funcion() {
 
}

bool Funcion::InsertaVar(Variable var) {
    return InsertaVar(var, false);
}

bool Funcion::InsertaVar(Variable var, bool esParam) {
    if(!ExisteVar(var.nombre)){
        std::pair<std::string,Variable> par (var.nombre, var);
        tablaVars.insert(par);
        if(esParam){
            params.push_back(var.tipo);
        }
        return true; //Inserte la variable
    }
    return false; //No inserte la variable
}

bool Funcion::ExisteVar(string nombre) {
    unordered_map<string,Variable>::const_iterator it = tablaVars.find(nombre);
    return (it != tablaVars.end());
}

Variable Funcion::GetVar(string nombre) {
    Variable var;
    unordered_map<string,Variable>::const_iterator it = tablaVars.find(nombre);
    if(ExisteVar(nombre)){
        string key = it->first;
        var = tablaVars[key];
    }
    return var;
}

