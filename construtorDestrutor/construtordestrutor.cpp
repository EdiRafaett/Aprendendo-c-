#include "construtordestrutor.h"
#include<iostream>

//DELCARAÇÃO DO CONSTRUTOR PADRÃO:
/*Vetor::Vetor(){
    x = y = 0; //Inicia x e y com zero.

    std::cout << "construtor padrão chamado" << std::endl;
} */

Vetor::~Vetor(){
    std::cout << "Destrutor da classe chamado" << std::endl;
}

Vetor::Vetor(float mx, float my){
    x = mx;
    y = my;

    std::cout << "construtor com argumentos chamado" << std::endl;
}

//DECLARAÇÃO DAS FUNÇÕES DA CLASSE:

void Vetor::setX(float mx){
    x =mx;
}

void Vetor::setY(float my){
    y = my;
}


float Vetor::getX(void){
    return x;
}

float Vetor::getY(void){
    return y;
}

