//USANDOA  IDEIA DE CLASSE DIRETO NA MAIN:
#include <iostream>

class Vetor2d{
private:
    int x, y;
public:
    void setX(float x_){
        if(x_ > 0){
            x =x_; // O método setX que tem acesso as variáveis privadas passa o valor que recebeu no argumento x_ para o x que é privado
        }
        else{
            x = 0;
        }
    }
    void setY(float y_){
        y = y_; // O método setY que tem acesso as variáveis privadas passa o valor que recebeu no argumento y_ para o y que é privado
    }
    float getX(void){
        return x; // retona o valor da variável privada x

    }
    float getY(void){
        return y; // retona o valor da variável privada y
    }
};

int main(){
    Vetor2d v; // v é o identificador (nome) de um objeto da classe Vetor2d (é através de v que chamaremos os métodos da classe
    // Através do objeto "v" com o ponto chama-se a função membro da classe desejada.
    v.setX(-3); //passando -3 como argumento
    v.setY(5); // passando 5 como argumento

    std::cout << v.getX() << std::endl; // invocando o método getX para retornar o valor da variável privada x
    std::cout << v.getY() << std::endl; // invocando o método getY para retornar o valor da variável privada y

    return 0;
}

//ANOTAÇÕES:
// Cada função membro funciona como uma função comum (recebe parametros e devolve parametros)
//v.x = -3 Isso não é possível pois x é privada nesse contexto não é acessível diretamente pela main so podendo ser acessada por um dos métodos da classe
// Veja que caso x fosse definida como public seria possível modificala direto da main, mas quem garante que algumas condições seriam satisfeitas? e se x não pouder ser menor que zero?
// Nada garante que valores negativos não fossem passados para o x
// Aí que entram os métodos da classe, neles podem haver uma série de condições (como os vistos no setX) para os valores, diferentemente de apenas passar o valor direto para a variável


