#ifndef GML_FUNCION
#define GML_FUNCION

#include <iostream>
#include <string>
#include <unordered_map>
#include "Variable.h"
#include "gml.tipos.h"

using namespace std;

class Funcion {
public:
  Funcion();
  Funcion(string name, int tipo);
  ~Funcion();
  bool InsertaVar(Variable var);
  string nombre;
  int tipo;
  unordered_map<string,Variable> tablaVars;
};

#endif