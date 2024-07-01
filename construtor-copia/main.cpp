#include <iostream>
#include "vetor.h"

int main(){
    Vetor v1(3,4), v2(5,6), v3;
    v3 = v1.soma(v2);
    v1.print();
    v2.print();
    v3.print();

    return 0;
}

//ANOTAÇÕES:
//O construtor de cópia em C++ é um tipo de construtor especial usado para criar uma nova instância
//de uma classe como uma cópia de uma instância existente. Ele é chamado automaticamente quando você cria
//um objeto a partir de outro objeto da mesma classe.
//Da execução do programa:
//Os dois primeiros construtores (com argumentos) são da criação de v1 e v2
// O terceiro construtor (defaut) vem da criação de v3
// o quarto construtor (defaut) vem da criação do ret
//TODOS OS OBJETOS CRIADOS DA CLASSE VÃO CHAMAR O CONSTRUTOR (mesmo sendo o caso de ser um argumento de um dos métodos como é o casod a função soma)
// No caso de v1 como argumento da função soma ele necessita de um construtor específico chamado de construtor de cópia
//por isso antes da criação desse construtor v1 argumento estava chamando somente o destrutor.
// v1 argumento foi criado apartir da cópia do vetor v2
// Após criar o construtor de cópia temos todas as chamadas dos construtores necessárias e a mesma quantidade de destrutores.
//Rever essse assunto depois.
