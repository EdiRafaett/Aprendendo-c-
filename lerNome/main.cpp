#include <fstream> //usar o fluxo
#include <cstdlib> //usar o exit
#include <iostream> // uso do cout
using namespace std;

int main(){

    std::ifstream fin; //fluxo de entrada
    std::string s; // string que recberá os dados do fluxo
    fin.open("/home/rafaett/Aprendendo-cpp/escreveNome/nome.txt"); //abertura do fluxo
    if(!fin.is_open()){ //verifica de a abertura do fluxo ocrreu
        exit(1);
    }
    fin >> s; // o nome digitado no arquivo é lido
    std::cout << "O que foi lido: " << s << std::endl; //impressão do que foi lido
    fin.close(); //fecha o fluxo

    return 0;
}

//NOTA:
/* O codigo acima  mostra como é feita a leitura de um arquivo, porém o nome que encontrava-se dentro do arquivo era um nome
composto e ó foi lido o primeiro nome. Para que fosse lido tudo existe alguns métodos que serão vistos posteriormente*/
