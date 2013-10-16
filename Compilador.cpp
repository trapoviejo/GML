#include "Compilador.h"

Compilador::Compilador(){
    //TODO... ?
}

Compilador::~Compilador() {
    //TODO
}

bool Compilador::InsertaFunc(string nomFunc, int tipo) {
    unordered_map<string,Funcion>::const_iterator it = tablaVars.find(nomFunc);
    if(it == tablaVars.end()){
        //No existia la funcion, entonces la creo e inserto en la tabla
        Funcion func(nomFunc, tipo);
        std::pair<std::string,Funcion> par (nomFunc, func);
        tablaFuncs.insert(par);
        //funcionActual = nomFunc;
        funcionActual = func;
        return true;
    }
    return false; //No inserte la funcion (ya existia)
}

bool Compilador::ExisteFunc(string nomFunc) {
    unordered_map<string,Funcion>::const_iterator it = tablaFuncs.find(nomFunc);
    return (it != tablaFuncs.end());
}

bool Compilador::InsertaVarEnFuncActual(String nombre, int tipo) {
    Variable var(nombre, tipo);
    //return tablaFuncs[funcionActual].InsertaVar(var);
    return funcionActual.InsertaVar(var);
}

bool Compilador::ExisteVar(string nomVar) {
    //Revisar primero en scope actual (funcionActual)
    if(funcionActual.ExisteVar(nomVar)){
        return true;
    //Revisar en variables globales (nomPrograma)
    }else if((nomPrograma != funcionActual) && nomPrograma.ExisteVar(nomVar)){
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

Compilador compilador();

int main(void){

    if (yyparse()==0)
        cout << "Apropiado!\n";
    else
        cout << "MAAAAAL!\n";
    
    compilador.ImprimeTablaFuncs();
    
    return 0;
}
