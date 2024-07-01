#ifndef VETOR_H
#define VETOR_H

class Vetor
{
private:
    float x, y;
public:
    //construtor defaut
    Vetor();
    //construtor com argumentos
    Vetor(float mx, float my);
    //Construtor de cópia
    Vetor(const Vetor& v); // Passagem por referencia
    //Destrutor
    ~Vetor();
    Vetor soma(Vetor v1);
    void print();
};

#endif // VETOR_H
