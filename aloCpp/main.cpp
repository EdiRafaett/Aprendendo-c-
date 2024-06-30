#include "funcao1.h" //Incluindo arquivo de header da função que será usada na main
#include "funcao2.h" //Incluindo arquivo de header da função que será usada na main
#include <iostream> //arquivo de header para fluxo de saída em c++

int main(){
    std::cout << "Alô, c++!\n";
    funcao1(); //chamando função 1
    funcao2(); //chamando função 2
    return 0;
}
//ANOTAÇÕES:
// Em C usa-se funções para imprimir (printf) e receber dados(scanf),já em C++ usa-se fluxos de saída.
// Extensões que podem ser usadas para arquivos em c++: arquivos de código fonte: .cpp, .cc, .cxx e arquivos de header: .h, .hpp, .hxx
//Processo de compilação: Em C++ pode-se ter vários arquivos de código e de header que na hora da compilação vão gerar arquivos código objeto (.o) que serão linkeditados (juntos) para criar um executável

