//iteradores en c++ são usados para acessar elementos de um container sequencial, como um vetor ou uma lista.
//Os iteradores são semelhantes a ponteiros, mas com uma interface mais rica.
//podem ser diretos ou reversos, quando avança ou retrocede na sequência.
//os constainers sequenciais da STL possuem métodos begin() e end() que retornam iteradores para o primeiro e o último elemento do container, respectivamente.
//end aponta para o elemento após o último, e não para o último elemento.
// o laço continua sendo executado enquanto o iterador não for igual a end.
//a sequencia de valores reside na faixa [v.begin(), v.end()), onde v é um container sequencial.
//tudo isso e todos os métodos podem ser acessados no site cplusplus.com
//PRATICANDO:
#include <iostream>
#include <vector>

int main(){
    int x[] = {4, 3, -8, 13};
    std::vector<int> v(x, x + 4); // x é o endereço do primeiro elemento e x + 4 é o endereço do último elemento
    std::vector<int>::iterator it;
    std::vector<int>::reverse_iterator rit;
    for(it = v.begin(); it != v.end(); it++){ //começa no primeiro elemento e vai até o último verificando se ele é diferente de end
        std::cout << *it << ", ";
    }
    std::cout << std::endl;

    for(rit = v.rbegin(); rit != v.rend(); rit++){ //começa no último elemento e vai até o primeiro verificando se ele é diferente de rend
        std::cout << *rit << ", ";
    }
    //VARRENDO DENTRO DE UMA FAIXA:
    std::cout << std::endl;
    for(it = v.begin()+1; it!= v.begin() + 3; it++){ //começa no segundo elemento e vai até o terceiro verificando se ele é diferente de end
        std::cout << *it << ", ";
    }
}