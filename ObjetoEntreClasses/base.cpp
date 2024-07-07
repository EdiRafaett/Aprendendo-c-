#include "base.h"


void Base::foo(int x, int y){
    a = x;
    b = y;
}
//Métodos que retoram o valor de a e b
int Base::getA(){
    return a;
}

int Base::getB(){
    return b;
}
