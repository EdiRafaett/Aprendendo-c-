#include "motor.h" //header da classe filha
#include <iostream>

int main() {
    Motor m;
    m.setFabricante("ACME");
    m.setPreco(23.45);
    m.setNome("speedatron");
    m.setPotencia(130);
    m.setVelocidade(280);
    std::cout << m.getFabricante() << "\n"
              << m.getpreco() << "\n"
              << m.getNome() << "\n"
              << m.getPotencia() << "\n"
              << m.getVelocidade() << "\n";
}

// ANOTAÇÕES:

// Herança em C++ basicamente relaciona duas classes A e B, onde A seria a
// classe pai e a B a filha....
// Basicamente B herda caracteristicas da classe Pai pois teria uma relação de
// tipo "É UM" com um objeto da classe A.
// Basicamente a classe filha recebe essa herança e apenas apresenta
// caracteristicas mais especificas quando comparada com a classe pai.
// pergunte-se: "O motor É UM equipamento?" a resposta é sim.
// Essa regra basicamente define se uma classe é herdeira de outra...
// se ficar dúvidas, provavelmente B não será herdeira de A.
// Então a classe filha tem os métodos do pai e apenas é mais especificas... por
// exemplo: o carro "É UM" veículo. Isso permitirá reutilizar muito código e
// deixar o código mais enxuto a declaração de uma classe herdeira é feita da
// seguinte maneira: class Derivada : public Base{}; Após criada acrecenta-se na
// classe herdeira as propriedades e métodos da especiealização. se a classe B
// herdou da classe A, B é chamada de subclasse ou classe derivada
// A é chamada de super classe ou de classe base
//Apesar de motor ser uma classe herdeira e ter acesso aos métodos ela não pode alterar as variáveis privadas...
//ou seja, herança não permite a alteração de dados privados da classe herdada.
// A alteração dessas variáveis só será possivel via métodos herdados que irão acessar as variáveis privadas e fazer a modificação
//Caso seja preciso que subclasses (herdeiras) acesssem variáveis da superclasse será necessário que essas variáveis sejam
// do tipo protected e não privadas.
//Além do especificado public também há o protected e o private que vem na declaração da função amiga....
//Eles mudam como a classe herdeira enxerga variáveis publicas, privates e protected... Apesar
//de haver essas duas a mais usada é a do tipo public que permite a subclasse acessar tudo que é publico e protected
//Se necessário for usar alguma das outras duas pesquisar um pouco
//Com excessão dos construtores da superclasse e dos destrutores todos os outros métodos são herdados
// A subclasse deve ter seus próprios construtores e destrutores
//Existe uma ordem dos construtores:
// primeiro os construtores da super classe são chamados para depois os da subclasse o inverso ocorre com os
//destrutores.... primeiro o destrutor da classe herdeira para depois o da classe base
// Normalmente o construtor que é chamado na classe de base é o construtor padrão, mas deve haver o construtor, a não ser que
// use-se outro construtor que forneça valores iniciais (como o que recebe os valores no header) que substitua o construtor
//padrão
// O ideal é que os construtores estejam em todas as classes que foram produzidas, caso essa classe venha a ser usada
// por alguém em outro momento
//Se  construtor defaut não exite na classe de base ou seja necessário chamar outro construtor  utiliza-se uma lista
//de inicializadores seguindo o construtor da classe derivada.
//Em outras palavras, a classe derivada "diz" à classe base como ela deve ser inicializada para que a classe derivada
//possa construir-se de forma adequada, utilizando os valores passados para os seus próprios membros adicionais ou específicos.
//Também posso usar a lista de inicializador para iniciar uma variavel da subclasse (ao invés de iniciar dentro do proprio construtor dela)
