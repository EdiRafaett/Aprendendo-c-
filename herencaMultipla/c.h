#ifndef C_H
#define C_H
#include "a.h"
#include "b.h"

class C: public A, public B {
    int z;
public:
    C();
    ~C();
    void setZ(int z_);
    void print();
};

#endif // C_H
