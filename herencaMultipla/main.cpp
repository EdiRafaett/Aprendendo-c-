#include <iostream>
#include "c.h"

using namespace std;

int main(){
    C c;
    c.setX(1);
    c.setY(2);
    c.setZ(3);
    c.print(); //Como foi reimplementado em C o método print chamado é dele
    c.A::print(); //forma de chama o método print da classe A
    c.B::print(); //forma de chamar o método print da classe B
    return 0;
}

/*ANOTAÇÕES:*/

/*
Herança multipla: Como o próprio nome sugere herança multipla permite uma subclasse
herdar de duas outras super classes. Não é tão usado como herança simples mas pode
ser necessário em alguns casos.
Caso o método print não tivesse sido implementado na classe C e não fosse especificado de qual
das classes (A ou B) se queria usar o método haveria um erro de ambiguidade pois tanto na classe A,
quanto na classe B há métodos de mesmo nome.

*/
