#include <iostream>
#include "alo.h" //arquivo de header da classe


int main(){
    Alo<int> aloInt(3, 4); //criação de objeto <int>
    Alo<double> aloDouble(3.2, 4.5); //criação de objeto <double>
    std::cout << "x = " << aloInt.getX() << std:: endl; //chamada do método
    std::cout << "x = " << aloDouble.getX() << std:: endl; //chamada do método
    return 0;
}

//NOTA:
/* Além de funções genéricas há também as classes genéricas que podem ser usadas com a finalidade de serivir para um mesmo fim, porém
usando tipos de dados diferentes, então usa-se gabarito para criar essa classe para que ela possa lidar com esses diversos tipos de dados
usa-se template<typename T> anterior a classe que deseja-se criar genérica. Cada um desses tampletes só vale para a classe imediantemente abaixo
No momento de uso da classe para criação do objeto esses valores de T serão instanciados e todos os valores de T modificados pelo tipo desejado
Lembrando que mais de um typename pode ser passado no template, assim como também variáveis de tipos definidos que sempre serão daquele tipo,
podendo ser iniciadas dentro da propria definição do template
*/

/* Usando gabaritos tanto a declaração quanto a implementação do método devem estar no arquivo .h
pois ccaso estejam emqarquivos diferentes o compilador não teŕa acesso a implementação quando receber
o tipode dado que será usado. Por isso ao usar template o idel é que todo o código necessário para
a classe esteja no arquivo ,h*/
