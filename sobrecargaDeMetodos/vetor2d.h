#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
private:
    float x, y;

public:
    // protótipos das funções:
    void setX(float x_);
    float getX(void);
    void setY(float y_);
    float getY(void);
    // SOBRECARGAS do método produto:
    float produto(Vetor2d v0); // produto escalar
    Vetor2d produto(float a);  // produto por um escalar
};

#endif // VETOR2D_H
