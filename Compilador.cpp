#include "Compilador.h"

Compilador::Compilador(){
    InicializaMemoria();
}

Compilador::~Compilador() {
    //TODO
}

void Compilador::InicializaMemoria(){
    /*Dimensiones
     - global (0) o local (1)
     - variables (0), temporales (1), o constantes (2)
     - cada uno de los tipos (0 a 8 como estan en gml.tipos.h, -10000)
    */

    //Globales, variables
    rangoMemoria[0][0][0] = 0;      //int
    rangoMemoria[0][0][1] = 1000;   //float
    rangoMemoria[0][0][2] = 2000;   //pos
    rangoMemoria[0][0][3] = 3000;   //string
    rangoMemoria[0][0][4] = 4000;   //boolean
    rangoMemoria[0][0][5] = 5000;   //entity
    rangoMemoria[0][0][6] = 6000;   //list

    //Globales, temporales
    rangoMemoria[0][1][0] = 7000;   //int
    rangoMemoria[0][1][1] = 8000;   //float
    rangoMemoria[0][1][2] = 9000;   //pos
    rangoMemoria[0][1][3] = 10000;  //string
    rangoMemoria[0][1][4] = 11000;  //boolean
    rangoMemoria[0][1][5] = 12000;  //entity
    rangoMemoria[0][1][6] = 13000;  //list

    //Globales, constantes
    rangoMemoria[0][2][0] = 14000;  //int
    rangoMemoria[0][2][1] = 15000;  //float
    rangoMemoria[0][2][2] = 16000;  //pos
    rangoMemoria[0][2][3] = 17000;  //string
    rangoMemoria[0][2][4] = 18000;  //boolean
    rangoMemoria[0][2][5] = 19000;  //entity
    rangoMemoria[0][2][6] = 20000;  //list

    //Locales, variables
    rangoMemoria[1][0][0] = 21000;  //int
    rangoMemoria[1][0][1] = 22000;  //float
    rangoMemoria[1][0][2] = 23000;  //pos
    rangoMemoria[1][0][3] = 24000;  //string
    rangoMemoria[1][0][4] = 25000;  //boolean
    rangoMemoria[1][0][5] = 26000;  //entity
    rangoMemoria[1][0][6] = 27000;  //list

    //Locales, temporales
    rangoMemoria[1][1][0] = 28000;  //int
    rangoMemoria[1][1][1] = 29000;  //float
    rangoMemoria[1][1][2] = 30000;  //pos
    rangoMemoria[1][1][3] = 31000;  //string
    rangoMemoria[1][1][4] = 32000;  //boolean
    rangoMemoria[1][1][5] = 33000;  //entity
    rangoMemoria[1][1][6] = 34000;  //list

    //Locales, constantes
    rangoMemoria[1][2][0] = 35000;  //int
    rangoMemoria[1][2][1] = 36000;  //float
    rangoMemoria[1][2][2] = 37000;  //pos
    rangoMemoria[1][2][3] = 38000;  //string
    rangoMemoria[1][2][4] = 39000;  //boolean
    rangoMemoria[1][2][5] = 40000;  //entity
    rangoMemoria[1][2][6] = 41000;  //list
}

void Compilador::InsertaConst(string constante, int tipo){
    //Checa si existe
    unordered_map<string,Variable>::const_iterator it = tablaConsts.find(constante);
    if(it == tablaConsts.end()){
        Variable miConst(constante, tipo);
        std::pair<std::string,Variable> par (constante, miConst);
        tablaConsts.insert(par);
    }
    //Si ya existia no hace nada
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
    int scope;
    if(funcionActual == nomPrograma){
        scope = 0; //scope global
    }else{
        scope = 1; //scope local
    }
    int memoriaAsignada = rangoMemoria[scope][0][tipo-10000];
    rangoMemoria[scope][0][tipo-10000]++;
    Variable var(nombre, tipo, memoriaAsignada);
    return tablaFuncs[funcionActual].InsertaVar(var);
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
                cout << "\tVariable: " << estaVar.nombre << ", tipo: " << estaVar.tipo << ", direccion: " << estaVar.direccion << endl;
            }
        }
    }
}

void Compilador::ImprimeTablaConsts(){
    Variable estaConst;
    for ( auto it = tablaConsts.begin(); it != tablaConsts.end(); ++it ){
        string key = it->first;
        estaConst = tablaConsts[key];
        cout << "Constante: " << estaConst.nombre << ", tipo: " << estaConst.tipo << endl;
    }
}

Compilador compilador;

int main(void){

    if (yyparse()==0){
        cout << "Apropiado!" << endl;
        cout << endl << "Tabla de funciones con variables:" << endl;
        compilador.ImprimeTablaFuncs(true);
        cout << endl << "Tabla de constantes:" << endl;
        compilador.ImprimeTablaConsts();
    }
    else
        cout << "MAAAAAL!" << endl;

    return 0;
}
