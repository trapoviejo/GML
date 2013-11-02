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
    Cuadruplo(int operador, int operando1, int operando2, int resultado);
    Cuadruplo(int operador, int operando1, int resultado);    
    Cuadruplo(int operador, int resultado);
    ~Cuadruplo();
    bool ActualizaPendiente(int salto);
    int operador;
    int operando1;
    int operando2;
    int resultado;
};

#endif
