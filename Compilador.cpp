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

unordered_map<string, Funcion> tablaFuncs; 
string nomPrograma;
int tipoActual;

int main(void){

    if (yyparse()==0)
        cout << "Apropiado!\n";
    else
        cout << "MAAAAAL!\n";
    cout << nomPrograma << endl;
    
    Funcion estaFunc;
    Variable estaVar;
    for ( auto it = tablaFuncs.begin(); it != tablaFuncs.end(); ++it ){
        string key = it->first;
        estaFunc = tablaFuncs[key];
        cout << "Funcion: " << estaFunc.nombre << ", tipo: " << estaFunc.tipo << endl;
        
        for ( auto it = (estaFunc.tablaVars).begin(); it != (estaFunc.tablaVars).end(); ++it ){
            string keyVar = it->first;
            estaVar = estaFunc.tablaVars[keyVar];
            cout << "\tVariable: " << estaVar.nombre << ", tipo: " << estaVar.tipo << endl;
        }
    }
    return 0;
}