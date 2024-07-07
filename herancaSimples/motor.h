#ifndef MOTOR_H
#define MOTOR_H
#include "equipamento.h" //inclusão de header da classe pai

//Criação da subclasse ou classe herdeira:
class Motor : public Equipamento{
    float potencia;
    float velocidade;
public:
    Motor();
    ~Motor();
    //Métodos especificadores da classe herdeira:
    void setPotencia(float _potencia);
    void setVelocidade(float _velocidade);
    float getPotencia(void);
    float getVelocidade(void);

};

#endif //MOTOR_H
