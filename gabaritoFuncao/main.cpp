#include <iostream>

template <typename T>
T media(T a, T b){
    return(a + b)/2;
}
int main(){
    int a = 3;
    int b = 4;
    float x = 3;
    float y = 4;

    std::cout << "media (int) = " << media<int>(a,b) << std::endl; // = 3 // esse <int> pode ser omitido
    std::cout << "media (float) = " << media(x,y) << std::endl; // = 3.5 //tipo descoberto de forma automática
    std::cout << "media (float) = " << media<float>(a,b) << std::endl; //apesar de a e b ser inteiro, a versão criada da funçãoi gabarito foi de float. Nesse caso há um casting de int para float dos dados
    std::cout << "media (int) = " << media<int>(x,y) << std::endl;//apesar de a e b ser float, a versão criada da função gabarito foi de int. Nesse caso há um casting de float para int dos dados

    // std::cout << "media(????) = " << media(a,x) << std::endl; // sobrecarga int ou float???????. PORÉM se especificar um tipo funciona
    std::cout << "media(???) = " << media <int> (a, y) << std::endl; //assim da certo pois especifica-se qual a o tipo de dado a função gabarito deve usar
    std::cout << "media(???) = " << media <float> (a, y) << std::endl; //assim da certo pois especifica-se qual a o tipo de dado a função gabarito deve usar
}

/*Gbaritos ou templates permite criar algoritmos abstraindo o tipo de dado e usando um dado de tipo
genérico. Dessa maneira um algoritmo que funcione em diversas ocasiões onde só haverá alteração
no tipo de dado pode ser usado de forma genérica sem ficar criando diversas implementações
com alterações apenas dos tipos de dado. Gabritos usa uma palavra reservada chamada template
Cada template só funciona para a função que venha imediatamente abaixo dele
antes da função coloca-se a seguinte construção: template<typename T> Esse T pode ser qualquer valor
desejado e irá aparecer no lugar dos tipos da função para torná-la genérica Quando a invocação
dessa função for feita é onde se passa os os tipos desejados.
O compilador cria uma cópia da função genérica no momento da execução com o tipo de dado que foi passado
Se for chamada várias vezes com tipo de dados diferentes será chamada várias vezes.
OBS: Ao passar valores de varios tipos na chamada de uma função genérica o compilado não saberá qual
tipo deve retornar e portanto deve-se se atentar a isso
*/
