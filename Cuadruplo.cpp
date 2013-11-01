#include "Cuadruplo.h"

Cuadruplo::Cuadruplo() {
    this->oper = 0;
    this->op1 = op1;
    this->op2 = op2;
    this->temp = temp;
}

Cuadruplo::Cuadruplo(int oper, int numSalto) {
    this->oper = oper; 
    this->numSalto = numSalto;
}

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
}

Cuadruplo::~Cuadruplo() {
    //destructor
}

bool Cuadruplo::InsertaCuadruplo(Cuadruplo quad){
    vectorCuadruplos.push_back(quad);
    return true;
}

Cuadruplo Cuadruplo::GetCuadruplo(int index){
    return vectorCuadruplos.at(index);
}
