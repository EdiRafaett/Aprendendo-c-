//VETOR 2D COM MÓDULOS:
#include <iostream>
#include "vetor2dcomclasse.h" //Arquivo de header para ter acesso a classe e os métodos dela

int main(){
    Vetor2dComClasse v; // v é o identificador (nome) de um objeto da classe Vetor2d (é através de v que chamaremos os métodos da classe
    // Através do objeto "v" com o ponto chama-se a função membro da classe desejada.
    v.setX(3); //passando valor como argumento
    v.setY(5); // passando valor como argumento

    std::cout << v.getX() << std::endl; // invocando o método getX para retornar o valor da variável privada x
    std::cout << v.getY() << std::endl; // invocando o método getY para retornar o valor da variável privada y

    return 0;
}


