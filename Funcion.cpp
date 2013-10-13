#include <iostream>
#include <string>
#include <unordered_map>
#include "Variable.cpp"

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

Funcion::Funcion(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
    std::cout << "funcion " << nombre << "! tipo" << tipo << endl;
}

Funcion::~Funcion() {
  //std::cout << "goodbye " << name << "!" << endl;
}

int main()
{
  Funcion fun("patito", 1);
  //ton.greet();
  return 0;
}