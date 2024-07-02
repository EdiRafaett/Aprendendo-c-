#include "vetor2d.h"

// DECLARAÇÃO DAS FUNÇÕES DA CLASSE:

void Vetor2d::setX(float x_) {
    if (x_ > 0) {
        x = x_;
    } else {
        x = 0;
    }
}

float Vetor2d::getX(void) { return x; }

void Vetor2d::setY(float y_) {
    if (y_ > 0) {
        y = y_;
    } else {
        y = 0;
    }
}

float Vetor2d::getY(void) {
    return y;
}

float Vetor2d::produto(Vetor2d v0) {
    float escalar;
    escalar = x * v0.x + y * v0.y; // usa-se . aqui e não um método get ou set pois estamos trabalhando dentro da própria classe e o acesso se dá dessa maneira
    return (escalar);
}
Vetor2d Vetor2d::produto(float a) {
    Vetor2d ret;
    ret.x = x * a;
    ret.y = y * a;
    return (ret);
}
