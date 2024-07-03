#include "funcaoamiga.h"
#include <iostream>

//iniciando Vetor2d (construtor)
Vetor2d::Vetor2d(float _x, float _y){
    x = _x;
    y = _y;
}
//Implementação de um método para imprimir
void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")\n";
}
//Implementação da função amiga que foi declarada como amiga no header(pode ser implementada nesse arquivo junto com os métodos)
Vetor2d operator*(float a, Vetor2d v){
    Vetor2d ret;
    ret.x = a * v.x;
    ret.y = a * v.y;
    return ret;

}
