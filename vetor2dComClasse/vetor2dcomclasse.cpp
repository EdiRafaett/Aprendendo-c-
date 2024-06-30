#include "vetor2dcomclasse.h"

//DECLARAÇÃO DAS FUNÇÕES DA CLASSE:

void Vetor2dComClasse::setX(float x_){
    if(x_ > 0){
        x =x_; // O método setX que tem acesso as variáveis privadas passa o valor que recebeu no argumento x_ para o x que é privado
    }
    else{
        x = 0;
    }
}


void Vetor2dComClasse::setY(float y_){
    y = y_; // O método setY que tem acesso as variáveis privadas passa o valor que recebeu no argumento y_ para o y que é privado

}


float Vetor2dComClasse::getX(void){
    return x; // retona o valor da variável privada x
}

float Vetor2dComClasse::getY(void){
    return y; // retona o valor da variável privada y
}

//ANOTAÇÕES:

// A implementação de um dos metódos da classe deve conter o nome da classe
// depois do tipo de retorno para indicar que não se trata de uma função comum e sim uma da classe
