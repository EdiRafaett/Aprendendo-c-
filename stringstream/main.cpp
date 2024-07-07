#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream> //classe usada para converter um string em um fluxo de entrada

using namespace std;

int main(){
    std::ifstream fin;
    std::string s;
    std::stringstream ss;
    fin.open("/home/rafaett/Aprendendo-cpp/stringstream/sstream.txt");
    if(!fin.is_open()){
        exit(0);
    }
    while (std::getline(fin, s)){ //toda vez que entra-se no loop o getline ler um literal comportando a linha inteira e grava no string s
        ss.clear();//limpa o estado do fluxo do stream para evitar algum erro
        ss.str(s); // o fluxo ss agora recebe o string gravado em s
        ss >> s; //ss agora é tratado como fluxo de entrada e extrai desse fluxo um determinado literal (no caso so o primeiro elemento da linha)
        std::cout << s << std::endl; //s agora armazena só esse primeiro elemento que será imprimido

        if(s.compare("para") == 0){ //Se esse primeiro elemento da linha  recebido for o indicado, realiza a ação
            std::cout << ">>>> cmd: Para veículo\n";
        }
        if(s.compare("adiante") == 0){ //Se esse primeiro elemento da linha  recebido for o indicado, realiza a ação

            int dist; //variável do tipo inteira
            ss >> dist; //para entra arqui a palavra adiante ja foi extraída, agora extra-se o proximo que é o inteiro
            std::cout << ">>>> cmd: Adiante " << dist << " metros\n"; //imprime esse valor
        }
    }

    fin.close(); //fecha o arqiovo
    ss.clear(); //limpeza do fluxo ss
    ss << "José tinha " << 4 << " irmãos\n";
    ss << "x = " << 0.45 << "y = " << 1E3 << std::endl;
    std::cout << ss.str() << std::endl; //str() converte o fluxo que está guardado em ss em string para que possa ser mostrado na tela



}

//NOTAS:
/*
A ideia nesse código é ler uma linha inteira de um arquivo, armazená-la como string
e  depois processá-la argumento a argumento
se o nome "tal" vem na frente o próximo armazene em um inteiro por exemplo.
Ou seja, o string que veio de um fluxo de entrada é usado como se fosse um fluxo de entrada

*/
