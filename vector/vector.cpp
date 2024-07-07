#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; // Objeto v da classe vector

    // push_back() adiciona elementos no fim do vetor
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    /*
    Essa forma acima é a mesma coisa de fazer:
    int *x = new int[3];
    x[0] = 4;
    x[1] = 5;
    x[2] = 6;
    */
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;

    //Porém vamos supor que seja necessário adcionar um novo elemento:
    //jeito 1:
    v.push_back(7); //só isso já adiciona o 7 no fim do vetor
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    //jeito 2:
    /*
    int *y = new int[4];
    y[3] = 7;
    for (int i = 0; i < 3; i++) {
        y[i] = x[i];
    }
    note que seria bem masi trabalhoso do que apenas usar a classe vector da STL
    o proprio vector já faz isso pra você redimensionando o vetor   
    */
   //Quero remover o ultimo elemento do vetor:
    v.pop_back(); //remove o ultimo elemento do vetor
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    //v.clear(); //limpa o vetor

    for ( int i = 0; i < v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;

    //Mais alguns exemplos:
    //pode-se criar um vetor de vetores:
    std::vector<std::vector<int>> matriz;
    matriz.push_back(v);
    matriz.push_back(v);
    matriz.push_back(v);


    std::cout << "Matriz: " << std::endl;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++){
            std::cout << matriz[i][j] << ", ";
        }
        std::cout << std::endl;
    }
    // mudando um elemento da matriz:
    matriz[1][1] = -10;
    std::cout << "Matriz: " << std::endl;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++){
            std::cout << matriz[i][j] << ", ";
        }
        std::cout << std::endl;
    }
    //ESSES E OUTROS MÉTODOS ESTÃO NA DOCUMENTAÇÃO DA STL QUE PODEM SER LIDOS NO SITE CPLUSPLUS.COM
    // precessos de alocacao e desalocacao de memoria são feitos automaticamente pela classe vector
    /*
Biblioteca padrão de gabaritos: É uma biblioteca que já vem inclusa no c++ e é desenvolvida a mais de 20 anos.
É uma biblioteca com uma gama gigantesca de gabaritos e todas suas funcionalidades são providas pelo namespace std
Essa biblioteca conta com:
containers: armazenam dados, como listas, filas, deques, conjuntos...
iteradores: Genealização de um ponteiro. Serve para caminhar pelos constainers e acessar os dados 
Algoritmos: disponibilizados para fazer processo de busca nos containers usando os iteradores 
functores: classes que implementam a sobrecarga do operator "()" para prover uma infinidade  de funções diferentess, como somar procurar ou ordenar elementos
Diferentes tipos de containers:
Containers sequenciais: vector, list e deque
Adaptadores de containers: stack ou queue
containers associativos: como set ou map ordenados por uma chave
containers associativos desodernados: como o unodered_set dispersas por uma chave 

vector: conjunto de elementos continuos e que podem ser acessados de forma aleatória
vetor não precisa alocar nem liberar memória... a classe vector faz isso automaticamente 
Geralmente alOcoa mais elementos que o necessário
*/
}
