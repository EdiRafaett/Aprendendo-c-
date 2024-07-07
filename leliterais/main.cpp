#include <iostream>
#include <cstdlib>
#include <fstream>


int main(){
    std::ifstream fin;
    std::ofstream fout;
    std::string str;
    char buffer [50];
    fin.open("/home/rafaett/Aprendendo-cpp/leliterais/literais.txt"); //abertura do fluxo
    if(!fin.is_open()){
        exit(0);
    }
    //usando tamanho de buffer maximo:
    //fin.get(buffer, 50); //leitura da linha inteira e a linha inteira é cpoiada para o buffer (até a quantidade de caracteres)
    //std::cout << "buffer = " << buffer << std::endl;
    //Leitura de fluxo completo:
    //std::getline(fin, str); //lê a linha completa e manda para o string str (nao há limite de buffer, pode haver tantos caracteres quanto necesário)
    std::getline(fin,str, ','); // lê no arquivo até encontrar o caractere conhecido "," quando encontra o fluxo para de ler e envia para str (não se limita a apenas uma linha)
    std::cout <<"str = " << str << std::endl;
    std::getline(fin,str, ','); //lê após a primeira virgula até encontrar a segunda
    std::cout <<"str = " << str << std::endl;
    std::getline(fin,str, ','); //lê após a segunda virgula até encontrar a terceira
    std::cout <<"str = " << str << std::endl;
    std::getline(fin,str, ','); //e assim por dianta....
    std::cout <<"str = " << str << std::endl;

    return 0;
}
