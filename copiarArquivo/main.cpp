// Esse cpodigo faz a leitura caractere a caractere usando as funções get e put fazendo uma cópia do arquivo:
#include <iostream>
#include <cstdlib>
#include <fstream> //criar fluxos para leitura e escrita de arquivos

using namespace std;

int main(){
    std::ifstream fin; //fluxo para a entrada de dados (leitura do arquivo)
    std::ofstream fout; // fluxo para a daída de dados (escrita em um arquivo)
    char ch; //vai receber os caracteres
    fin.open("/home/rafaett/Aprendendo-cpp/copiarArquivo/entrada.txt"); //abre o fluxo para a leitura do arquivo
    fout.open("/home/rafaett/Aprendendo-cpp/copiarArquivo/saida.txt"); //abre o fluxo para a gravação no arquivo
    while (fin.get(ch)){ //enquanto ch estiver recebendo caracteres do fluxo o laço continua
        fout.put(ch); // gravando ch em um arquivo de saida
    }

    fin.close(); //fechando fluxo de entrada
    fout.close(); //fechando fluxo de saida

    return 0;
}

//NOTAS:
/*Note que esse código pega caractere a caractere enquanto anterior a esse (ler nome) só conseguia pegar a primeira palavra
 e parava no primeiro espaço. Porém como fazer para ler um literal inteiro até o fim sem que pare nos espaços?
existe algumas maneiras de fazer isso que é informando caracteres connhecidos que irão servir como caracteres de parada,
definir uma quantidade máxima de caracteres ou ler uma linha inteira, por exemplo.*/
