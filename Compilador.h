#ifndef GML_COMPILADOR
#define GML_COMPILADOR

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unordered_map>
#include "Funcion.h"
#include "Variable.h"
#include "y.tab.h"
#include "gml.tipos.h"

int yyparse();

using namespace std;

class Compilador {
public:
    Compilador();
    ~Compilador();
    bool InsertaFunc(string nombre, int tipo);
    bool InsertaVarEnFuncActual(string nombre, int tipo);
    bool ExisteFuncion(string func);
    bool ExisteVariable(string var);
    string nomPrograma;
    string funcionActual;
    int tipoActual;
private:
    unordered_map<string, Funcion> tablaFuncs;
};

#endif