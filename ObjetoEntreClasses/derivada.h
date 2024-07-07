#ifndef DERIVADA_H
#define DERIVADA_H
#include "base.h"
class Derivada : public Base{
    int c;
public:
    void operator = (Base &x);
    void bar(int z);
};


#endif // DERIVADA_H
