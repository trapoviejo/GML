#ifndef GML_VARIABLE
#define GML_VARIABLE

#include <iostream>
#include <string>
#include "gml.tipos.h" 

using namespace std;

class Variable {
public:
  Variable();
  Variable(string nombre, int tipo);
  Variable(string nombre, int tipo, int direccion);
  Variable(string, int, int, int);
  ~Variable();
  string nombre;
  int tipo;
  int direccion;
  int subtipo; //en caso de lista o pointer
};

#endif
