#include "b.h"
#include <iostream>

B::B() {
    std::cout << "construtor B \n";
}

B::~B(){
    std::cout << "Destrutor B \n";
}

void B::setY(int y_){
    y = y_;
}

void B::print(){
    std:: cout << "y = " << y << "\n";

}
