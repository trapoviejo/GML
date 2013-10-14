#include <iostream>
#include <string>
#include <stdlib.h>
#include <unordered_map>
#include "Funcion.h"
#include "Variable.h"
#include "y.tab.h"   

int yyparse();

using namespace std;

unordered_map<string, Funcion> tablaFuncs; 
string programa;

int main(void){


    if (yyparse()==0)
        cout << "Apropiado!\n";
    else
        cout << "MAAAAAL!\n";
    cout << programa;
    return 0;
}