#include "Compilador.h"

string tipos[7] = {"int", "float", "pos", "string", "boolean", "entity", "list"};

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
   {TIPO_VOID,    TIPO_VOID,  TIPO_ENTITY,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //suma
   
  {{TIPO_INT,     TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_FLOAT,   TIPO_FLOAT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_POS,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,    TIPO_VOID,  TIPO_ENTITY,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},
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
   {TIPO_VOID,  TIPO_VOID,  TIPO_INT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_INT,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}},       //_x
   
  {{TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_INT,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_INT,  TIPO_VOID},  
   {TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID,  TIPO_VOID}}     //_y
   };

Compilador::Compilador(){
    InicializaMemoria();
    InicializaCubo();
    cuadruplos.open ("cuadruplos.txt");
    contFunciones = 0;
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
    rangoMemoria[0][0][0] = 100;    //int
    rangoMemoria[0][0][1] = 1000;   //float
    rangoMemoria[0][0][2] = 2000;   //pos
    rangoMemoria[0][0][3] = 3000;   //string
    rangoMemoria[0][0][4] = 4000;   //boolean
    rangoMemoria[0][0][5] = 5000;   //entity
    rangoMemoria[0][0][6] = 6000;   //lista

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
    //YA NO DEBEN EXISTIR (TODAS LAS CONSTANTES SON GLOBALES)
    /*rangoMemoria[1][2][0] = 35000;  //int
    rangoMemoria[1][2][1] = 36000;  //float
    rangoMemoria[1][2][2] = 37000;  //pos
    rangoMemoria[1][2][3] = 38000;  //string
    rangoMemoria[1][2][4] = 39000;  //boolean
    rangoMemoria[1][2][5] = 40000;  //entity
    rangoMemoria[1][2][6] = 41000;  //list*/
    
    //POINTER
    rangoMemoria[0][0][7] = 35000;  //global
    rangoMemoria[1][0][7] = 36000;  //local
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
            operando.direccion = (rangoMemoria[scope][1][tipo-10000]) + (tablaFuncs[funcionActual].temps[tipo-10000]);
            tablaFuncs[funcionActual].temps[tipo-10000]++;
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

/*
int Compilador::TipoResultante(int oper, int op1, int op2){
    return cuboSemantico[oper - 20000][op1 - 10000][op2 - 10000];
}*/

int Compilador::TipoResultante(int oper, Variable op1, Variable op2){
    int tipo1, tipo2;    
    if(op1.tipo == TIPO_POINTER){
        tipo1 = op1.subtipo;
    }else{
        tipo1 = op1.tipo;
    }
    if(op2.tipo == TIPO_POINTER){
        tipo2 = op2.subtipo;
    }else{
        tipo2 = op2.tipo;
    }
    return cuboSemantico[oper - 20000][tipo1 - 10000][tipo2 - 10000];
}

bool Compilador::GeneraCuadruplo(){
    Variable operando2 = pilaOperandos.top();
    pilaOperandos.pop();
    //cout << "Operando: " << operando2.nombre << ", tipo: " << operando2.tipo << endl;
    Variable operando1 = pilaOperandos.top();
    pilaOperandos.pop();
    //cout << "Operando: " << operando1.nombre << ", tipo: " << operando1.tipo << endl;
    int operador = pilaOperadores.top();
    pilaOperadores.pop();
    
    int tipoResultante = TipoResultante(operador, operando1, operando2);
    
    //Si el "tipo" resultante es void es que no es válida la operación para esos dos tipos de operandos
    if(tipoResultante == TIPO_VOID){
        cout << "Operando 1: " << operando1.nombre << ", tipo: " << operando1.tipo << endl;
        cout << "Operando 2: " << operando2.nombre << ", tipo: " << operando2.tipo << endl;
        cout << "Operador: " << operador << endl;
        return false;
    }
    
    InsertaOperando("temp", tipoResultante, GML_ES_TEMPORAL);
    Variable resultado = pilaOperandos.top(); //Solo lo vemos (para la direccion), no lo quitamos!
    Cuadruplo quad = Cuadruplo(operador, operando1.direccion, operando2.direccion, resultado.direccion);
    vectorCuadruplos.push_back(quad);
    //cout << operador << " " << operando1.nombre << " " << operando2.nombre << " " << resultado.nombre;
    //cout << " (" << operando1.direccion << " " << operando2.direccion << " " << resultado.direccion << ")" << endl;
    
    return true;
}

bool Compilador::GeneraCuadruploGotof(){
    //Revisar semantica (debe ser booleano)
    //cout << "Antes del top" << endl;
    Variable operando = pilaOperandos.top();
    //cout << "Antes del pop" << endl;
    pilaOperandos.pop();
    //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
    //cout << "Antes del chequeo de tipos" << endl;
    if(operando.tipo != TIPO_BOOLEAN){
        return false;
    }
    //cout << "Operando: " << operando.nombre << ", tipo: " << operando.tipo << endl;
    //Generar cuadruplo
    Cuadruplo quad = Cuadruplo(OP_GOTOF, operando.direccion, GML_SALTO_PENDIENTE);
    vectorCuadruplos.push_back(quad);
    //cout << "Cuadruplo: " << quad.operador << " " << quad.operando1 << " " << quad.operando2 << " " << quad.resultado << endl;
    
    //Guardar direccion para actualizar salto luego
    pilaSaltos.push(vectorCuadruplos.size()-1);
    //cout << "Hice push en pila saltos" << endl;
    return true;
}

bool Compilador::GeneraCuadruploAsignacion(){
    Variable operando1 = pilaOperandos.top();
    pilaOperandos.pop();
    Variable resultado = pilaOperandos.top();
    pilaOperandos.pop();
    //cout << "Operando: " << operando1.nombre << ", tipo: " << operando1.tipo << endl;
    
    int tipoRes, tipoOp;
    if(resultado.tipo == TIPO_POINTER){
        tipoRes = resultado.subtipo;
    }else{
        tipoRes = resultado.tipo;
    }

    if(operando1.tipo == TIPO_POINTER){
        tipoOp = operando1.subtipo;
    }else{
        tipoOp = operando1.tipo;
    }
    
    if(tipoRes != tipoOp){
        return false;
    }
    Cuadruplo quad = Cuadruplo(OP_ASIGNACION, operando1.direccion, resultado.direccion);
    vectorCuadruplos.push_back(quad);
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
        int dir = (rangoMemoria[0][2][tipo-10000]) + (ctes[tipo-10000]);
        Variable miConst(constante, tipo, dir);
        ctes[tipo-10000]++;
        std::pair<std::string,Variable> par (constante, miConst);
        tablaConsts.insert(par);
    }
    //Si ya existia no hace nada
}

bool Compilador::InsertaFunc(string nomFunc, int tipo) {
    
    if(ExisteFunc(nomFunc))
        return false; //Ya existia, por lo tanto no inserto

    //No existia la funcion, entonces la creo e inserto en la tabla
    int direccion = vectorCuadruplos.size();
    Funcion func(contFunciones, nomFunc, tipo, direccion);
    contFunciones++;
    std::pair<std::string,Funcion> par (nomFunc, func);
    tablaFuncs.insert(par);
    funcionActual = nomFunc;
    return true;
}

bool Compilador::ExisteFunc(string nomFunc) {
    unordered_map<string,Funcion>::const_iterator it = tablaFuncs.find(nomFunc);
    return (it != tablaFuncs.end());
}

bool Compilador::InsertaVarEnFuncActual(string nombre, int tipo, bool esParam) {
    int scope;
    if(funcionActual == nomPrograma){
        scope = 0; //scope global
    }else{
        scope = 1; //scope local
    }
    int memoriaAsignada = (rangoMemoria[scope][0][tipo-10000]) + (tablaFuncs[funcionActual].vars[tipo-10000]);
    tablaFuncs[funcionActual].vars[tipo-10000]++;
    Variable var(nombre, tipo, memoriaAsignada, subtipoListaActual);
    return tablaFuncs[funcionActual].InsertaVar(var, esParam);
}

bool Compilador::InsertaVarEnFuncActual(string nombre, int tipo) {
    return InsertaVarEnFuncActual(nombre, tipo, false);
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
    cout << endl << "Tabla de funciones con variables:" << endl;
    cuadruplos << tablaFuncs.size() << endl;  //número total de funciones (incluye bloque global)
    for ( auto it = tablaFuncs.begin(); it != tablaFuncs.end(); ++it ){
        string key = it->first;
        estaFunc = tablaFuncs[key];
        cout << "Funcion: " << estaFunc.nombre << " (" << estaFunc.numFuncion << "), ";
        cout << "tipo: " << estaFunc.tipo << ", direccion: " << estaFunc.direccion << endl;
        cout << "\tParams:";
        for (int i=0; i<estaFunc.params.size(); i++){
            cout << " " << estaFunc.params.at(i);
        }
        cout << endl;

        if(conVars){
            for ( auto it = (estaFunc.tablaVars).begin(); it != (estaFunc.tablaVars).end(); ++it ){
                string keyVar = it->first;
                estaVar = estaFunc.tablaVars[keyVar];
                cout << "\tVariable: " << estaVar.nombre << ", tipo: " << estaVar.tipo << ", direccion: " << estaVar.direccion << endl;
            }
            
            cout << "\t" << "Numero de variables y temporales:" << endl;
            cuadruplos << estaFunc.numFuncion;
            for (int i = 0; i < 7; i++){
                cout << "\t\t" << tipos[i] << ":\t" << estaFunc.vars[i] << "\t" << estaFunc.temps[i] << endl;
                cuadruplos << " " << estaFunc.vars[i] << " " << estaFunc.temps[i];
            }
            cout << "\t\t" << "pointers" << ":\t" << estaFunc.vars[7] << endl;
            cuadruplos << estaFunc.vars[7] << endl; //POINTERS           
        }
    }
}

void Compilador::ImprimeTablaConsts(){
    cout << endl << "Tabla de constantes:" << endl;
    Variable estaConst;
    for ( auto it = tablaConsts.begin(); it != tablaConsts.end(); ++it ){
        string key = it->first;
        estaConst = tablaConsts[key];
        cout << "Constante: " << estaConst.nombre << ", tipo: " << estaConst.tipo << ", dir: " << estaConst.direccion << endl;
        cuadruplos << estaConst.direccion << " " << estaConst.nombre << endl;
    }
}

void Compilador::ImprimeNumeroConsts(){
    cout << endl << "Numero de constantes:" << endl;
    for (int i = 0; i < 7; i++){
        cout << "\t" << tipos[i] << ":\t" << ctes[i] << endl; 
        cuadruplos << ctes[i] << " ";
    }
    cuadruplos << endl;
}

void Compilador::ImprimePilaOperandos(){
    cout << endl << "Pila de operandos:" << endl;
    Variable esteOperando;
    while( ! pilaOperandos.empty() ){
        esteOperando = pilaOperandos.top();
        pilaOperandos.pop();
        cout << "Operando: " << esteOperando.nombre << ", tipo: " << esteOperando.tipo << endl;
    }
}

void Compilador::ImprimeCuadruplos(){
    cout << endl << "Cuadruplos generados:" << endl;
    Cuadruplo esteCuadruplo;
    int i = 0;
    for (std::vector<Cuadruplo>::iterator it = vectorCuadruplos.begin() ; it != vectorCuadruplos.end(); ++it){
        cout << i << ":\t" << it->operador << "\t" << it->operando1 << "\t" << it->operando2 << "\t" << it->resultado << endl;
        i++;
        cuadruplos << it->operador << " " << it->operando1 << " " << it->operando2 << " " << it->resultado << endl;
    }
}

bool Compilador::AccionAdd(string nomLista){
    //Obtener la dirección de la lista a la que se quiere agregar
    Variable cabezaLista = GetVar(nomLista);
    //Verificar que efectivamente sea tipo lista
    if(cabezaLista.tipo != TIPO_LIST){
        return false;
    }
    
    //Obtener resultado de la expresión (lo que se agrega a la lista)
    Variable porAgregar = pilaOperandos.top();
    pilaOperandos.pop();
    //Chequeo de concordancia de tipo de lista con tipo de resultado
    if(cabezaLista.subtipo != porAgregar.tipo){
        return false;
    }
    
    //Dame un POINTER para el contenido de la lista
    int scope = 1;
    if(EsScopeGlobal()){
        scope = 0;
    }
    int ptrValor = (rangoMemoria[scope][0][TIPO_POINTER-10000]) + (tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]);
    tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]++;
    Cuadruplo quad = Cuadruplo(OP_GETDIR, porAgregar.tipo, -1, ptrValor);
    vectorCuadruplos.push_back(quad);
    
    //Asigna el resultado a la dirección apuntada por ptrValor
    quad = Cuadruplo(OP_ASIGNACION, porAgregar.direccion, -1, ptrValor);
    vectorCuadruplos.push_back(quad);    
    
    //Dame un POINTER para el nuevo nodo de la lista
    int ptrNodo = (rangoMemoria[scope][0][TIPO_POINTER-10000]) + (tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]);
    tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]++;
    quad = Cuadruplo(OP_GETDIR, TIPO_LIST, -1, ptrNodo);
    vectorCuadruplos.push_back(quad);
    
    //Generar el cuádruplo SETVAL para establecer la dirección del valor del nodo
    quad = Cuadruplo(OP_SETVAL, ptrNodo, ptrValor, -1);
    vectorCuadruplos.push_back(quad);
    
    //Obtén el siguiente de la cabeza de la lista (primer elemento) y guárdalo en pointer temporal
    int ptrTemp = (rangoMemoria[scope][0][TIPO_POINTER-10000]) + (tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]);
    tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]++;
    quad = Cuadruplo(OP_GETNEXT, cabezaLista.direccion, -1, ptrTemp);
    vectorCuadruplos.push_back(quad);

    //Generar un cuádruplo SETNEXT para cambiar el next del nodo recién creado a la actual cabeza de la lista
    quad = Cuadruplo(OP_SETNEXT, ptrNodo, ptrTemp, -1);
    vectorCuadruplos.push_back(quad);
    
    //Generar un cuádruplo SETNEXT para cambiar el next del nodo cabeza de la lista al nodo recién creado
    quad = Cuadruplo(OP_SETNEXT, cabezaLista.direccion, ptrNodo, -1);
    vectorCuadruplos.push_back(quad);
    
    return true;
}

bool Compilador::AccionElemento(string nomLista){
    //Verificar que sea lista
    Variable cabezaLista = GetVar(nomLista);
    if(cabezaLista.tipo != TIPO_LIST){
        return false;    
    }
    //cout << "SI es lista" << endl;
    //Verificar que indice sea entero
    Variable indice = pilaOperandos.top();
    pilaOperandos.pop();
    if(indice.tipo != TIPO_INT){
        return false;
    }
    //cout << "Indice SI es INT" << endl;
    //cout << "ya verifique tipo y lista" << endl;
    
    //Obtener pointer y asignar al pointer la dir de la cabeza de la lista    
    int scope = 1;
    if(EsScopeGlobal()){
        scope = 0;
    }
    int ptrNodo = (rangoMemoria[scope][0][TIPO_POINTER-10000]) + (tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]);
    tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]++;
    Cuadruplo quad = Cuadruplo(OP_ASIGNACION, cabezaLista.direccion, -1, ptrNodo);
    vectorCuadruplos.push_back(quad);

    //Guardar número de quad siguiente
    int dirSalto = vectorCuadruplos.size();    
    
    //Generar cuádruplo GETNEXT ptrNodo X ptrNodo
    quad = Cuadruplo(OP_GETNEXT, ptrNodo, -1, ptrNodo);
    vectorCuadruplos.push_back(quad);
    //cout << "ya genere quad GETNEXT" << endl;

    //Generar cuádruplo VERIF indice ptrNodo X
    quad = Cuadruplo(OP_VERIF, indice.direccion, ptrNodo, -1);
    vectorCuadruplos.push_back(quad);
    //cout << "ya genere quad VERIFINDICE" << endl;
    
    //Generar cuádruplo RESTA indice 1 indice
    InsertaConst("1", TIPO_INT);
    Variable uno = tablaConsts["1"]; //usamos uno como constante
    quad = Cuadruplo(OP_RESTA, indice.direccion, uno.direccion, indice.direccion);
    vectorCuadruplos.push_back(quad);    

    //Generar MAYOROIGUALQUE indice 0 tempBool
    InsertaConst("0", TIPO_INT);
    Variable cero = tablaConsts["0"]; //usamos cero como constante
    int tempBool = (rangoMemoria[scope][1][TIPO_BOOLEAN-10000]) + (tablaFuncs[funcionActual].temps[TIPO_BOOLEAN-10000]);
    tablaFuncs[funcionActual].temps[TIPO_BOOLEAN-10000]++;
    quad = Cuadruplo(OP_MAYOROIGUALQUE, indice.direccion, cero.direccion, tempBool);
    vectorCuadruplos.push_back(quad);     

    //Generar GOTOV tempBool X (número de quad guardado)
    quad = Cuadruplo(OP_GOTOV, tempBool, -1, dirSalto);
    vectorCuadruplos.push_back(quad);

    //Obtener pointer para que apunte al elemento
    int ptrElem = (rangoMemoria[scope][0][TIPO_POINTER-10000]) + (tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]);
    tablaFuncs[funcionActual].vars[TIPO_POINTER-10000]++;
    quad = Cuadruplo(OP_GETVAL, ptrNodo, -1, ptrElem);
    vectorCuadruplos.push_back(quad); 
    Variable elemento = Variable("ptrElementoLista", TIPO_POINTER, ptrElem, cabezaLista.subtipo);
    pilaOperandos.push(elemento);
    
    return true;
}

bool Compilador::AccionEntidadPos(){
    //Saca resultado de expresión de posición (y verifica que lo sea)
    Variable pos = pilaOperandos.top();
    pilaOperandos.pop();
    //cout << "Operando: " << pos.nombre << ", tipo: " << pos.tipo << endl;
    if(pos.tipo != TIPO_POS && !(pos.tipo == TIPO_POINTER && pos.subtipo == TIPO_POS)){
        //cout << "NO ES POS" << endl;        
        return false;
    }
    
    //Obtenemos entidad a la que queremos asignar dicha posición
    //PERO NO LA QUITAMOS DE LA PILA
    Variable entidad = pilaOperandos.top();
    //Verificamos que sea entidad
    if(entidad.tipo != TIPO_ENTITY && !(entidad.tipo == TIPO_POINTER && entidad.subtipo == TIPO_ENTITY)){
        //cout << "NO ES ENTITY" << endl; 
        return false;
    }
    
    //Generamos cuádruplo de asignación de pos a una entidad
    Cuadruplo quad = Cuadruplo(OP_SETPOS, pos.direccion, -1, entidad.direccion);
    vectorCuadruplos.push_back(quad);
    
    return true;
}

bool Compilador::AccionEntidadSprite(){
    //Saca resultado de expresión de sprite (y verifica que sea string)
    Variable sprite = pilaOperandos.top();
    pilaOperandos.pop();
    if(sprite.tipo != TIPO_STRING && !(sprite.tipo == TIPO_POINTER && sprite.subtipo == TIPO_STRING)){
        return false;
    }
    
    //Obtenemos entidad a la que queremos asignar dicha posición
    //PERO NO LA QUITAMOS DE LA PILA
    Variable entidad = pilaOperandos.top();
    //Verificamos que sea entidad
    if(entidad.tipo != TIPO_ENTITY && !(entidad.tipo == TIPO_POINTER && entidad.subtipo == TIPO_ENTITY)){
        return false;
    }
    
    //Generamos cuádruplo de asignación de pos a una entidad
    Cuadruplo quad = Cuadruplo(OP_SETSPRITE, sprite.direccion, -1, entidad.direccion);
    vectorCuadruplos.push_back(quad);
    
    return true;
}

bool Compilador::AccionEntidadPass(){
    //Saca resultado de expresión de si es pasable o no (y verifica que sea boolean)
    //cout << "Inicio de pass" << endl;
    Variable pass = pilaOperandos.top();
    pilaOperandos.pop();
    if(pass.tipo != TIPO_BOOLEAN && !(pass.tipo == TIPO_POINTER && pass.subtipo == TIPO_BOOLEAN)){
        return false;
    }
    //cout << "Verifique que fuera boolean, antes de sacar entity" << endl;
    //Obtenemos entidad a la que queremos asignar dicha posición
    //AHORA SI LA QUITAMOS DE LA PILA (es la última asignación)
    Variable entidad = pilaOperandos.top();
    pilaOperandos.pop();
    //Verificamos que sea entidad
    if(entidad.tipo != TIPO_ENTITY && !(entidad.tipo == TIPO_POINTER && entidad.subtipo == TIPO_ENTITY)){
        return false;
    }
    //cout << "Verifique que fuera entity" << endl;
    //Generamos cuádruplo de asignación de pass a una entidad
    Cuadruplo quad = Cuadruplo(OP_SETPASS, pass.direccion, -1, entidad.direccion);
    vectorCuadruplos.push_back(quad);
    //cout << "Inserte quad" << endl;
    return true;
}

bool Compilador::AccionDraw(){
    Variable porDibujar = pilaOperandos.top();
    pilaOperandos.pop();
    //Sólo se pueden dibujar entidades
    int tipo;
    if(porDibujar.tipo == TIPO_POINTER){
        tipo = porDibujar.subtipo;
    }else{
        tipo = porDibujar.tipo;
    }
    if(tipo != TIPO_ENTITY){
        return false;
    }
    
    //Genera cuádruplo de draw
    Cuadruplo quad = Cuadruplo(OP_DRAW, porDibujar.direccion, -1, -1);
    vectorCuadruplos.push_back(quad);
    return true;
}

Compilador compilador;

int main(void){

    if (yyparse()==0){
        cout << "Apropiado!" << endl;
        compilador.ImprimeTablaFuncs(true);
        compilador.cuadruplos << "%" << "%" << endl;
        compilador.ImprimeNumeroConsts();        
        compilador.ImprimeTablaConsts();        
        compilador.cuadruplos << "%" << "%" << endl;
        compilador.ImprimeCuadruplos();
    }
    else
        cout << "MAAAAAL!" << endl;
    
    compilador.cuadruplos.close();
    return 0;
}
