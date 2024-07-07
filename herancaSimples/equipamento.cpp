#include "equipamento.h"
#include <iostream>
#include <cstring>

//IMPLEMENTAÇÃO DOS MÉTODOS DA SUPER CLASSE:

//Implementação do construtor:
Equipamento::Equipamento(int x){
    std::cout << "construtor da classe Equipamento chamado" << ". Valor do inicializador = " << x << std::endl;
}

//Implementação do destrutor
Equipamento::~Equipamento()
{
    std::cout << "Destrutor da classe Equipamento chamado" << std::endl;
}
//Implementação dos métodos:

void Equipamento::setNome(const char *_nome){
    strcpy(nome, _nome);
}

void Equipamento::setFabricante(const char *_fabricante){
    strcpy(fabricante, _fabricante);

}
void  Equipamento::setPreco(float _preco){
    preco = _preco;

}
char* Equipamento::getNome(void){
    return nome;

}
char* Equipamento::getFabricante(void){
    return fabricante;
}
float Equipamento::getpreco(void){
    return preco;
}
