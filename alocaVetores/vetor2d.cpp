#include "vetor2d.h"
#include "iostream"

Vetor2d::Vetor2d() {
    //iniciando varáveis
    x = 0;
    y = 0;
    std::cout << "Chamada do contrutor padrão" << std::endl;
}

Vetor2d::Vetor2d(float x_, float y_){
    x = x_;
    y = y_;
    std::cout << "chamada do construtor com argumentos" << std::endl;
}

Vetor2d::~Vetor2d(){
    std::cout << "Chamada do destrutor" << std::endl;
}

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")\n";
}
