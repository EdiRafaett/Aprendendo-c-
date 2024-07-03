#ifndef FUNCAOAMIGA_H
#define FUNCAOAMIGA_H

class Vetor2d{
private:
    float x, y;
public:
    //declaração do construtor
    Vetor2d(float _x = 0, float _y = 0);
    //Declaração da função amiga (declarada dentro da própria classe)
    friend Vetor2d operator*(float a, Vetor2d v);
    //Declaração da função de impressão
    void print();
};



#endif // FUNCAOAMIGA_H
