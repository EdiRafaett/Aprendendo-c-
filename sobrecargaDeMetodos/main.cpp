// VETOR 2D COM MÓDULOS:
#include "vetor2d.h"
#include <iostream>

int main() {
    Vetor2d v, v2, v3, v4; //Objetos da classe
    v.setX(3); //Método setX chamado para passar o valor 3 para v
    std::cout << v.getX() << std::endl; //Método getX chamado para retornar o valor de v e ser impresso

    v2.setX(3); v2.setY(4); //Método setX e setY chamado para passar os valores para v2
    v3.setX(1); v3.setY(10); //Método setX e setY chamado para passar os valores para v3

    // Produto escalar:
    float result; //variável criada
    result = v2.produto(v3); //"pede" a v2 que calcule o produto escalar dele com v3
    std::cout << "escalar = " << result << std::endl;

    // Produto POR escalar:

    v4 = v2.produto(2);
    std::cout << "Produto por escalar = " << v4.getX() << "," << v4.getY() << std::endl;

    return 0;
}
// ANOTAÇÕES:
//  Nesse código está sendo abordado a sobrecarga de métodos da classe,
//  ou seja, um método de mesmo nome poderá realizar várias ações parecidas.
// Resumindo: É possível  criar métodos de mesmo nome passando parâmetros diferentes,
// isso é o que se chamada de sobrecarga de métodos.
