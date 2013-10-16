#include "Compilador.h"

Compilador::Compilador(){
    //TODO... ?
}

Compilador::~Compilador() {
    //TODO
}

bool Compilador::InsertaFunc(string nomFunc, int tipo) {
    
    if(ExisteFunc(nomFunc))
        return false; //Ya existia, por lo tanto no inserto

    //No existia la funcion, entonces la creo e inserto en la tabla
    Funcion func(nomFunc, tipo);
    std::pair<std::string,Funcion> par (nomFunc, func);
    tablaFuncs.insert(par);
    funcionActual = nomFunc;
    return true;
}

bool Compilador::ExisteFunc(string nomFunc) {
    unordered_map<string,Funcion>::const_iterator it = tablaFuncs.find(nomFunc);
    return (it != tablaFuncs.end());
}

bool Compilador::InsertaVarEnFuncActual(string nombre, int tipo) {
    return tablaFuncs[funcionActual].InsertaVar(nombre, tipo);
}

bool Compilador::ExisteVar(string nomVar) {
    //Revisar primero en scope actual (funcionActual)
    if(tablaFuncs[funcionActual].ExisteVar(nomVar)){
        return true;
    //Revisar en variables globales (nomPrograma)
    }else if((nomPrograma != funcionActual) && tablaFuncs[nomPrograma].ExisteVar(nomVar)){
        return true;
    }
    return false;
}

void Compilador::ImprimeTablaFuncs(bool conVars) {
    Funcion estaFunc;
    Variable estaVar;
    for ( auto it = tablaFuncs.begin(); it != tablaFuncs.end(); ++it ){
        string key = it->first;
        estaFunc = tablaFuncs[key];
        cout << "Funcion: " << estaFunc.nombre << ", tipo: " << estaFunc.tipo << endl;
        
        if(conVars){
            for ( auto it = (estaFunc.tablaVars).begin(); it != (estaFunc.tablaVars).end(); ++it ){
                string keyVar = it->first;
                estaVar = estaFunc.tablaVars[keyVar];
                cout << "\tVariable: " << estaVar.nombre << ", tipo: " << estaVar.tipo << endl;
            }
        }
    }
}

Compilador compilador;

int main(void){

    if (yyparse()==0)
        cout << "Apropiado!\n";
    else
        cout << "MAAAAAL!\n";
    
    compilador.ImprimeTablaFuncs(true);
    
    return 0;
}
