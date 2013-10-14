#ifndef GML_FUNCION
#define GML_FUNCION

#include <iostream>
#include <string>
#include <unordered_map>
#include "Variable.h"

using namespace std;

class Funcion {
public:
  Funcion(string name, int tipo);
  ~Funcion();
private:
  string nombre;
  int tipo;
  unordered_map<string,Variable> tablaVars;
};

#endif