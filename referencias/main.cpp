#include <iostream>

//Passagem de parametros por referencia
//incluir "&" antes do nome da variável
void funcao(int &x){

    std::cout << "Endereço de x = " << &x << std::endl;
    std::cout << "Valor de x antes = " << x << std::endl;
    x = 4;
    std::cout << "Valor de x depois = " << x << std::endl;

}

int main(){
    int y;
    y = 3;
    std::cout << "Endereço de y = " << &y << std::endl;
    std::cout << "Valor de y antes da chamada da função = " << y << std::endl;
    funcao(y);
    std:: cout << "Valor de y depois da chamada da função = " << y << std::endl;
    return 0;
}
//ANOTAÇÕES:
//Note que tanto o endereço de x quanto o de y são os mesmos.
//Na passagem por referencia o bloco de memória é o mesmo, só que nesse caso na main ela tem o nome y e na função funcao ela tem o nome x
//Ou seja, tanto x como y referenciam o mesmo bloco de memória.

