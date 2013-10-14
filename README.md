GML
===

Proyecto compilador GameMakerLite

Como buildear:

flex lexico.l

bison -dy sintaxis.y

WINDOWS (con MinGW):
g++ lex.yy.c y.tab.c Compilador.cpp Funcion.cpp Variable.cpp -o compilador.exe -std=c++11

LINUX:
g++ lex.yy.c y.tab.c Compilador.cpp Funcion.cpp Variable.cpp -o compilador.exe -std=c++0x
