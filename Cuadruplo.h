#ifndef GML_CUADRUPLO
#define GML_CUADRUPLO

#include <iostream>
#include <vector>
#include "Variable.h"
#include "gml.tipos.h"
#include "gml.operadores.h"

using namespace std;

class Cuadruplo {
public:
    Cuadruplo();
    //Cuadruplo(int oper, int numSalto);    
    Cuadruplo(int oper, Variable temp, Variable resultado);
    Cuadruplo(int oper, Variable op1, Variable op2, Variable temp);
    ~Cuadruplo();
    bool InsertaCuadruplo(Cuadruplo quad);
    Cuadruplo GetCuadruplo(int index);
    int oper;
    Variable op1;
    Variable op2;
    Variable temp;
    int numSalto;
    
};

#endif
