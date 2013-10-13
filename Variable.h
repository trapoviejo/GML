#ifndef GML_VARIABLE
#define GML_VARIABLE

#include <iostream>
#include <string>

using namespace std;

class Variable {
public:
  Variable(string nombre, int tipo);
  ~Variable();
private:
  string nombre;
  int tipo;
  int direccion;
};

#endif