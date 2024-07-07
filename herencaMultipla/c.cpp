#include "c.h"
#include <iostream>

C::C() {
    std::cout << "Construtor C\n";
}

C::~C(){
    std::cout << "Destrutor C\n";
}

void C::setZ(int z_){
    z = z_;
}

void C::print(){
    std::cout << "z = " << z << "\n";
}
