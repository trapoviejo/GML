#ifndef GML_CUADRUPLO
#define GML_CUADRUPLO

#include "Variable.h"
#include "gml.tipos.h"
#include "gml.operadores.h"
#include <vector>

using namespace std;

class Cuadruplo {
public:
    Cuadruplo();
    Cuadruplo(int oper, int numSalto);    
    Cuadruplo(int oper, int temp, int numSalto);
    Cuadruplo(int oper, int op1, int op2, int temp);
    ~Cuadruplo();
    bool InsertaCuadruplo(Cuadruplo quad);
    Cuadruplo GetCuadruplo();
    int oper;
    int op1;
    int op2;
    int temp;
    int numSalto;
    std::vector<Cuadruplo> vectorCuadruplos;
    
};

#endif
