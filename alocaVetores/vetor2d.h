#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float x, y;
public:
    Vetor2d(); //construtor padrão
    Vetor2d(float x_, float y_); //construtor com argumento
    ~Vetor2d(); //destrutor
    void print(); //método de impressão


};

#endif // VETOR2D_H
