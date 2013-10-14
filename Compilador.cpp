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

int main(void){

    if (yyparse()==0)
        cout << "Apropiado!\n";
    else
        cout << "MAAAAAL!\n";
    cout << nomPrograma << endl;
    
    Funcion estaFunc;
    for(int i = 0; i < tablaFuncs.size(); i++){
        estaFunc = tablaFuncs[i];
        cout << "Funcion: " << estaFunc->nombre << ", tipo: " << estaFunc->tipo << endl;
    }
    return 0;
}