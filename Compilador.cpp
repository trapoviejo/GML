#include <iostream>
#include <string>
#include <stdlib.h>
#include <unordered_map>
#include "Funcion.cpp"
#include "Variable.cpp"

using namespace std;

int main(void){
    if (yyparse()==0)
        cout << "Apropiado!\n";
    else
        cout << "MAAAAAL!\n";
    return 0;
}