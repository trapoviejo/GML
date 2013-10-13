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

Variable::Variable(string nombre, int tipo) {
    this->nombre = nombre;
	this->tipo = tipo;
}

Variable::~Variable() {
  //std::cout << "goodbye " << name << "!" << endl;
}