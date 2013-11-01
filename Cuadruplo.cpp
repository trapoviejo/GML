#include "Cuadruplo.h"

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

<<<<<<< HEAD
Cuadruplo::Cuadruplo(int oper, Variable temp, Variable resultado){
    this->oper = oper;
    this->temp = temp;
    this->resultado = resultado;
}

Cuadruplo::Cuadruplo(int oper, Variable op1, Variable op2, Variable temp){
    this->oper = oper;
    this->op1 = op1;
    this->op2 = op2;
    this->temp = temp;
=======
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
>>>>>>> Inicios de IF
}

Cuadruplo::~Cuadruplo() {
    //destructor
}

bool Cuadruplo::ActualizaPendiente(int salto){
    this->resultado = salto;
}
