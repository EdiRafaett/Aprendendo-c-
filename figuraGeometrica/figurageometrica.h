#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class Figurageometrica{
public:
    Figurageometrica();
    virtual void draw()=0; //método virtual puro (=0) = sem implementação
    virtual ~Figurageometrica(); //virtual para chamar o destrutor do objeto
};

#endif // FIGURAGEOMETRICA_H
