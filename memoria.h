int rangoMemoria[2][3][7];
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