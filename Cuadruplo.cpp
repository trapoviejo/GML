#include "Cuadruplo.h"
#include <iostream>
using namespace std;

Cuadruplo::Cuadruplo() {
    this->operador = -1;
    this->operando1 = -1;
    this->operando2 = -1;
    this->resultado = -1;
}

Cuadruplo::Cuadruplo(int operador, int operando1, int operando2, int resultado){
    this->operador = operador;
    this->operando1 = operando1;
    this->operando2 = operando2;
    this->resultado = resultado;
}

Cuadruplo::Cuadruplo(int operador, int resultado) {
    this->operador = operador;
    this->operando1 = -1;
    this->operando2 = -1;
    this->resultado = resultado;
}

Cuadruplo::Cuadruplo(int operador, int operando1, int resultado){
    this->operador = operador;
    this->operando1 = operando1;
    this->operando2 = -1;
    this->resultado = resultado;
}

Cuadruplo::~Cuadruplo() {
    //destructor
}

bool Cuadruplo::ActualizaPendiente(int salto){
    cout << "holis" << endl;
    this->resultado = salto;
    cout << resultado << endl;
}
