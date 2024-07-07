#include <iostream>
#include "vetor2d.h"


int main(){
    Vetor2d *v1, *v2, *v3;

    v1 = new Vetor2d; //alocação de 1 elemento
    v2 = new Vetor2d(3,4); //alocação de 1 elemento passando esse elemento
    v3 = new Vetor2d[5]; //alocação de 5 elementos


    v1 -> print(); //como v1 é ponteiro usa-se a setinha v1[0].print = *(v1+0),  também funcionaria porém não é muito usado
    v2 -> print(); //como v2 é ponteiro usa-se a setinha
    v3[2].print(); //v3 é ponteiro porém [2] leva para o segundo elemento do array (DESREFERENCIAÇÃO), ou seja, usa-se ponto
    (v3+2) -> print(); //Também leva ao conteúdo do segundo elemento do array, sóq ue dessa maneira usa-se setinha

    delete v1;
    delete v2;
    delete[] v3;
}
//No total foram chamados 7 construtores, pois cada posição de v3 chama o construtor uma vez e 7 destrutores
