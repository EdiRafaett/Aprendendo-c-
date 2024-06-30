#include <iostream>
#include "vetor.h" //incluindo arquivo de header da classe

int main(){
    Vetor v1, v2, v3(7,8), v4(3); // v1, v2 e v3 são os identificadores (nomes) dos objetos da classe Vetor2d (é através deles que chamaremos os métodos da classe
    // Através do objeto "v1" e v2 com o ponto chama-se a função membro da classe desejada.

    //preenchidos com zero pelo construtor
    std:: cout << "v1.x = " << v1.getX() << std::endl;
    std:: cout << "v1.y = " << v1.getY() << std::endl;
    // sobrecarga do construtor que permite x e y serem passados dessa maneira:
    std:: cout << "v3.x = " << v3.getX() << std::endl;
    std:: cout << "v3.y = " << v3.getY() << std::endl;
    //Construtor termina de preencher v4:
    std:: cout << "v4.x = " << v4.getX() << std::endl;
    std:: cout << "v4.y = " << v4.getY() << std::endl;


    v1.setX(3); //passando valor como argumento
    v1.setY(4); // passando valor como argumento
    v2.setX(5);
    v2.setY(6);

    return 0;
}
// ANOTAÇÕES:
//Para cada objeto criado tem-se que chamar os métodos setX e setY o que pode se tornar meio inviável
//Se for necessário atribuir um valor inicial ao objeto usa-se a função construtor
//O construtor padrão defaut não passa argumentos, é chamado automáticamente e não possui retorno.
//O destrutor é chamado automaticamente após a finalização do uso de um objeto
// Ao executar o código nota-se que o construtor padrão foi chamado duas vezes para iniciar os objetos v1 e v2
// Já no caso de v3 ele foi criado passando já seus valores de x e de y... Para que isso seja possível existe uma especie
// de sobrecarga do construtor onde é possível passar para o objeto valores no momento da criação. Esse construtor é chamado
// de construtor com argumentos (Esse construtor pode ser usado como construtor padrão se necessário. Isso será mostrado abaixo)
// Também existe o caso de v4, onde o primeiro valor é passado e o segundo não... nesse caso o construtor com argumentos irá
//preencher o segundo argumento y com o valor que for passado no parametro no arquivo de header.
// Potanto existe uma maneira de usar apenas um construtor para todos os casos, se necessário for: basta usar apenas um construtor com argumentos
// e passar os valor que mx e my deverão receber no arquivo de header, dessa meneira o seguinte acontece:
// v1 e v2 >> preenche (x,y) com (0,0)(valores definidos no header)
// v3 >> Como recebeu ambos valores é iniciado com sobrecarga do operador com os valores que recebeu
// v4 >> Como recebeu apenas o primeiro valor tem o segundo valor preenchido ficando (3,0). Não é possivel receber o segundo valor e preencher o primeiro.



