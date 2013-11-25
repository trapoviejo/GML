#ifndef GML_FUNCION
#define GML_FUNCION

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "Variable.h"
#include "gml.tipos.h"

using namespace std;

class Funcion {
public:
  Funcion();
  Funcion(string nombre, int tipo);
  Funcion(string, int, int);
  Funcion(int, string, int, int);
  ~Funcion();
  bool InsertaVar(Variable);
  bool InsertaVar(Variable, bool);
  bool ExisteVar(string nombre);
  Variable GetVar(string nombre);
  string nombre;
  int tipo;
  int numFuncion;
  int direccion;
  int vars [7];
  int temps [7];
  unordered_map<string,Variable> tablaVars;
  vector<int> params;
};

#endif
