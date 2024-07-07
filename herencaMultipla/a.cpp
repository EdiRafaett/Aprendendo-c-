#include "a.h"
#include "iostream"

A::A() {
    std::cout << "Construtor A\n";
}

A::~A(){
    std::cout <<"Destrutor A\n";
}

void A::setX(int x_){
x = x_;
}

void A::print(){
    std::cout << "x = " << x << "\n";
}
