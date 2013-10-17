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
#include "memoria.h"

int yyparse();

using namespace std;

class Compilador {
public:
    Compilador();
    ~Compilador();
    bool InsertaFunc(string nombre, int tipo);
    bool InsertaVarEnFuncActual(string nombre, int tipo);
    bool ExisteFunc(string nomFunc);
    bool ExisteVar(string nomVar);
    void ImprimeTablaFuncs(bool conVars);
    string nomPrograma;
    string funcionActual;
    int tipoActual;
private:
    unordered_map<string, Funcion> tablaFuncs;
};

#endif