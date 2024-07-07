//Exemplo de uso de fluxos para gravação de dados:

#include <iostream>
#include <fstream> //Para usar fluxo em arquivo
#include <cstdlib> // usar o exit
using namespace std;

int main()
{
    std::ofstream fout; //O fluxo de saída
    fout.open("nome.txt"); //abre o fluxo (especifica-se onde quer salvar passando o caminho)
    if(!fout.is_open()){ //Verifica o fluxo
        exit(1);
    }
    fout <<"Fulaninho de tal \n"; //Grava o nome no arquivo
    fout.close(); //fecha o fluxo

    return 0;
}
