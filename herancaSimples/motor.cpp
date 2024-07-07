#include "motor.h" //inclusão de header da classe
#include <iostream>

//Construtor de destrutor da classe herdeira
Motor::Motor() : Equipamento(3), potencia(20){ //Qual construtor quero chamar e como chamar esse construtor da classe base, iniciandoa variável potencia (variavel da classe derivada) na lista de inicializador
    std::cout << "Construtor da classe Moto chamado"<< std::endl;
}
Motor::~Motor(){
    std::cout << "Destrutor da classe Motor chamado" << std::endl;

}
//Implementação de métodos próprios da classe herdeira
void Motor::setPotencia(float _potencia){
    potencia = _potencia;
}
void Motor::setVelocidade(float _velocidade){
    velocidade = _velocidade;
}
float Motor::getPotencia(void){
    return potencia;
}
float Motor::getVelocidade(void){
    return velocidade;
}

