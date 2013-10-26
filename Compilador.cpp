#include "Compilador.h"

int cuboSemantico[16][7][7] = {
  {{TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //or

  {{TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //and

  {{TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //>=
   
  {{TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},      //<= 

  {{TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},    
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //>  
   
  {{TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //<

  {{TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //==
   
  {{TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_BOOLEAN,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_BOOLEAN,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //!=

  {{TIPO_INT,     TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_FLOAT,   TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_POS,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //suma
   
  {{TIPO_INT,     TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_FLOAT,   TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_POS,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //resta
   
  {{TIPO_INT,     TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_FLOAT,   TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //multiplicacion
   
  {{TIPO_INT,     TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_FLOAT,   TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //division

  {{TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //_x
   
  {{TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}}     //_y
   };

Compilador::Compilador(){
    InicializaMemoria();
    InicializaCubo();
}

Compilador::~Compilador() {
    //TODO
}

void Compilador::InicializaCubo(){

}

void Compilador::InicializaMemoria(){
    /*Dimensiones
     - global (0) o local (1)
     - variables (0), temporales (1), o constantes (2)
     - cada uno de los tipos (0 a 8 como estan en gml.tipos.h, -10000)
    */

    //Globales, variables
    rangoMemoria[0][0][0] = 100;      //int
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

bool Compilador::EsScopeGlobal(){
    return (funcionActual == nomPrograma);
}

bool Compilador::InsertaOperando(string nombre, int tipo, int clase){
    Variable operando;
    switch (clase) {
        case GML_ES_VARIABLE:
        {
            //Checa por existencia
            if(!ExisteVar(nombre)){
                return false;
            }
            //Obtiene operando apropiado
            operando = GetVar(nombre);
            
            break;
        }
        
        case GML_ES_CONSTANTE:
        {
            //Inserta la constante
            InsertaConst(nombre, tipo);
            //Obtiene operando apropiado
            operando = tablaConsts[nombre];
            
            break;
        }
        
        case GML_ES_TEMPORAL:
        {
            int scope;
            if(EsScopeGlobal()){
                scope = 0;
            }
            else{
                scope = 1;
            }
            operando.nombre = nombre;
            operando.tipo = tipo;
            operando.direccion = rangoMemoria[scope][1][tipo-10000];
            rangoMemoria[scope][1][tipo-10000]++;
            
            break;
        }
        
        default:
        {
            return false; //Debe ser de una de las clases anteriores
            break;
        }
    }
    
    pilaOperandos.push(operando);
    return true;
}

void Compilador::InsertaOperador(int op){
    pilaOperadores.push(op);
    //return true;
}
void Compilador::PonFondoFalso(){
    pilaOperadores.push(GML_FONDO_FALSO);
}

void Compilador::QuitaFondoFalso(){
    
    if (pilaOperadores.top() != GML_FONDO_FALSO){
        cout << "MEGA ERROR" << endl;
    }
    
    pilaOperadores.pop();
}

bool Compilador::ChecaPrioridad(int actual){
    if(pilaOperadores.empty() || pilaOperadores.top() == GML_FONDO_FALSO){
        return false; //No genero cuadruplo si no hay operador pendiente! (dentro del parentesis si aplica)
    }
    int pendiente = pilaOperadores.top();
    if(pendiente < actual){
        //No genero cuadruplo si el pendiente es de menor prioridad que el nivel actual!
        return false;
    }
    //Si hay pendiente y es de mayor o igual prioridad, debo generar cuadruplo!
    return true;
}

int Compilador::TipoResultante(int oper, int op1, int op2){
    return cuboSemantico[oper - 20000][op1 - 10000][op2 - 10000];
}

bool Compilador::GeneraCuadruplo(){
    Variable operando2 = pilaOperandos.top();
    pilaOperandos.pop();
    Variable operando1 = pilaOperandos.top();
    pilaOperandos.pop();
    int operador = pilaOperadores.top();
    pilaOperadores.pop();
    
    int tipoResultante = TipoResultante(operador, operando1.tipo, operando2.tipo);
    
    //Si el "tipo" resultante es void es que no es válida la operación para esos dos tipos de operandos
    if(tipoResultante == TIPO_VOID){
        return false;
    }
    
    InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
    Variable resultado = pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
    cout << operador << " " << operando1.nombre << " " << operando2.nombre << " " << resultado.nombre;
    cout << "(" << " " << operando1.direccion << " " << operando2.direccion << " " << resultado.direccion << ")" << endl;
    
    return true;
}



Variable Compilador::GetVar(string nomVar) {
    Variable var;
    
    //Revisar primero en scope actual (funcionActual)
    var = tablaFuncs[funcionActual].GetVar(nomVar);
    
    //Revisar en variables globales (nomPrograma)
    if(!(tablaFuncs[funcionActual].ExisteVar(nomVar)) && (nomPrograma != funcionActual)){
        var = tablaFuncs[nomPrograma].GetVar(nomVar);
    }
    
    return var;
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

void Compilador::ImprimePilaOperandos(){
    Variable esteOperando;
    while( ! pilaOperandos.empty() ){
        esteOperando = pilaOperandos.top();
        pilaOperandos.pop();
        cout << "Operando: " << esteOperando.nombre << ", tipo: " << esteOperando.tipo << endl;
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
        cout << endl << "Pila de operandos:" << endl;
        compilador.ImprimePilaOperandos();
    }
    else
        cout << "MAAAAAL!" << endl;

    return 0;
}
