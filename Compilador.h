#ifndef GML_COMPILADOR
#define GML_COMPILADOR

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unordered_map>
#include <stack>
#include "Funcion.h"
#include "Variable.h"
#include "y.tab.h"
#include "gml.tipos.h"
#include "gml.operadores.h"

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
    void ImprimeTablaConsts();
    void ImprimePilaOperandos();
    void InicializaMemoria();
    void InsertaConst(string constante, int tipo);
    void InsertaOperador(gml_operador op);
    bool ChecaPrioridad(gml_operador actual);
    bool GeneraCuadruplo();
    string nomPrograma;
    string funcionActual;
    int tipoActual;
    int rangoMemoria[2][3][7];
    stack<Variable> pilaOperandos;
    stack<gml_operador> pilaOperadores;
    bool InsertaOperando(string nombre, int tipo, int clase);
    Variable GetVar(string nombre);
private:
    unordered_map<string, Funcion> tablaFuncs;
    unordered_map<string, Variable> tablaConsts;
};

#endif