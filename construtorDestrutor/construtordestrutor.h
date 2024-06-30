#ifndef CONSTRUTORDESTRUTOR_H
#define CONSTRUTORDESTRUTOR_H

class Vetor{
private:
    float x,y;
public:
    //método construtor defaut (padrão):
   // Vetor();

    //método destrutor:
    ~Vetor(); //Função membro da classe com o mesmo nome da classe com ~ antes do nome

    //Método construtor com argumentos:
    Vetor(float mx = 0, float my = 0); //Só é chamada no momento em que o objeto é criado
    //protótipos das funções:
    void setX(float mx);
    void setY(float my);
    float getX(void);
    float getY(void);
};

#endif // CONSTRUTORDESTRUTOR_H
