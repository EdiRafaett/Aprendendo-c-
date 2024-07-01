#include "vetor.h"
#include <iostream>


Vetor::Vetor(){
    x = y = 0;
    std::cout << "Construtor padrão" << std::endl;
}

Vetor::Vetor(float mx, float my){
    x = mx; y = my;
    std::cout << "Construtor com argumentos" << std:: endl;

}

Vetor::Vetor(const Vetor& v){
    x = v.x;
    y = v.y;
    std::cout << "Construtor de cópia" << std::endl;
}

Vetor::~Vetor(){
    std::cout << "Destrutor" << std::endl;
}

Vetor Vetor::soma(Vetor v1){
    Vetor ret;
    ret.x = x+v1.x;
    ret.y = y+v1.y;
    return ret;

}

void Vetor::print()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}


