#include <iostream>
#include "base.h"
#include "derivada.h"

int main(){
    Base  b;
    Derivada d;

    b = d; //Appenas a parte da classe Base é copiada.

    d = b; //só é possivel com a sobrecarga do operador "="

}

//NOTA:
/*No primeiro caso o objeto B pode receber as propriedades do objeto d sem a sobrecarga do operador =
 pois a classe herdeira tem relação de "É UMA" com a classe Base, então não faria sentido a classe Base não
conseguir receber propriedades de uma classe que herda dela, porém o que é recebido são apenas aquelas que não
são especificas da classe herdeira.
No segundo caso não é possivel sem uso de uma sobrecarga visto que a classe derivada é especificadora da classe base
Qual valor c receberia da classe base? c ficaria indefinido
É como ter duas listas: uma mais generica com apenas duas colunas e uma mais especifica com 3 colunas
Poederia até ser possivel copiar as colunas a e b da especifica para a generica, porém o que receberia a coluna c se
o contrario fosse feito? fica em aberto uma ideia de como inicializar essa coluna c e é aí que entra a sobrecarga do =.  */
