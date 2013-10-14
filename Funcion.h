#ifndef GML_FUNCION
#define GML_FUNCION

#include <iostream>
#include <string>
#include <unordered_map>
#include "Variable.h"

using namespace std;

class Funcion {
public:
  Funcion();
  Funcion(string name, int tipo);
  ~Funcion();
  InsertaVar(Variable var);
  string nombre;
  int tipo;
private:
  unordered_map<string,Variable> tablaVars;
};

#endif