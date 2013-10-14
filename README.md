GML
===

Proyecto compilador GameMakerLite

Como buildear:

flex lexico.l
bison -dy sintaxis.y
g++ lex.yy.c y.tab.c -o compilador.exe -std=c++11