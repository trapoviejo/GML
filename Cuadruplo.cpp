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

Cuadruplo::Cuadruplo(int oper, int temp, int numSalto){
    this->oper = oper;
    this->temp = temp;
    this->numSalto = numSalto;
}

Cuadruplo::Cuadruplo(int oper, int op1, int op2, int temp){
    this->oper = oper;
    this->op1 = op1;
    this->op2 = op2;
    this->temp = temp;
}

Cuadruplo::~Cuadruplo() {
    //destructor
}

bool Cuadruplo::InsertaCuadruplo(Cuadruplo quad){
    //TODO
}

Cuadruplo Cuadruplo::GetCuadruplo(){
    //TODO
}
