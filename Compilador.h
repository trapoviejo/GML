#ifndef GML_COMPILADOR
#define GML_COMPILADOR

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unordered_map>
#include <stack>
#include <initializer_list>
#include "Funcion.h"
#include "Variable.h"
#include "Cuadruplo.h"
#include "y.tab.h"
#include "gml.tipos.h"
#include "gml.operadores.h"
#include "Cubo.h"

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
    void InicializaCubo();
    void InsertaConst(string constante, int tipo);
    void InsertaOperador(int op);
    bool ChecaPrioridad(int actual);
    bool GeneraCuadruplo();
    void PonFondoFalso();
    void QuitaFondoFalso();
    bool EsScopeGlobal();
    int TipoResultante(int oper, int op1, int op2);
    string nomPrograma;
    string funcionActual;
    int tipoActual;
    int rangoMemoria[2][3][7];
    stack<Variable> pilaOperandos;
    stack<int> pilaOperadores;
    bool InsertaOperando(string nombre, int tipo, int clase);
    Variable GetVar(string nombre);
private:
    unordered_map<string, Funcion> tablaFuncs;
    unordered_map<string, Variable> tablaConsts;
};

#endif
