#include "derivada.h"



void Derivada::operator =(Base &x)
{
    a = x.getA(); // a recebe o valor retornado pelo método get
    b = x.getB(); // b recebe o valor retornado pelo método get
    c = 0; // inicialização de c da forma correta agora com a sobrecarga
}

void Derivada::bar(int z){
    c = z;
}
