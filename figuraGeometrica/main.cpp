#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"

using namespace std;

int main(){
    //Figurageometrica fig; CLASSES ABSTRATAS NÃO PODEM TER OBJETOS CONCRETOS
    Figurageometrica *pfig[10];
    Reta r;
    Circulo c;

    pfig[0] = &r; // o ponteiro da classe Figurageometrica aponta para o objeto da classe Reta r
    pfig[0]->draw(); //= ----------------POLIMORFISMO-----------------

    pfig[1] = &c;
    pfig[1]->draw();

    //PODEM SER ALOCADOS DINAMICAMENTE (BEM MAIS VERŚATIL):
    std::cout << "Array: \n";
    pfig[0] = new Reta;
    pfig[1] = new Circulo;
    pfig[2] = new Circulo;
    pfig[3] = new Reta;

    for(int i = 0; i < 4; i++){
        pfig[i]->draw(); //chamado o draw para cada um dos objetos da classe
    }
    //Note que todo o processo de alocação acima (criar objeto da classe, passsar o endereço... não é mais necessário)

    for(int i = 0; i < 4; i++){
        delete pfig[i]; //se não colocar o virtual na frente o destrutor da erro pois chama o destrutor de Figurageometrica
    }
    return 0;
}

//NOTAS:
/*Em primeiro momento o draw da classe Reta não tinha sido implementado e o que foi chamado
foi o da classe Figurageometrica
- Inicialmente o ponteiro pfig que aponta para o objeto r da classe Reta chamou o método draw de FiguraGeometrica
Porém aí que entra o conceito de polimorfismo, onde a ideia é que esse ponteiro chame o método draw
da classe do objeto para o qual ele está apontando.
para que isso aconteça basata usar a palavra reservada "virtual" na frente do método em questão de
Figurageometrica e o método que será usado é o da classe do objeto para o qual o ponteiro aponta.
O ponteiro da classe FiguraGeometrica está assumindo a forma de um objeto da classe reta (POLIMORFISMO)
Inicialmente tinha-se ponteiros diferentes apontando para cada objeto, agora tem-se um array de ponteiros
onde cada posição do ponteiro pode apontar para um objeto diferente
CLASSES ABSTRATAS:
Se formos analizar todas as classes herdeiras de figurageometrica para que funcionem precisam ter o método
draw implementado e já figurageometrica não nessecita desse método pois  ela não é desenhavel (é abstrata)
para que seja uma classe abstrata uma classe deve ter pelo menos um método virtual puro onde não se implementa esse método
mas meio que obriga as classes herdeiras a terem esse método implementado. Para isso o método é colocado =0*/
//classes abstaratas não tem seus métodos implementados e por essa razão não podem ter objetos CONCRETOS
//ISSO obriga que as demais classes concretas tenham seus métodos implementados
//OBS: se um método for criado em uma subclasse ele não pode ser chamado usando ponteiro da super classe
//uma vez que esse método não está previsto na classe pai.
