#include <iostream>
#include "funcaoamiga.h"

using namespace std;

int main(){
    Vetor2d v1(3,4), v2;
    v2 = 4*v1; //Forma que pode ser usada após fazer a sobrecarga passando o escalar *(que esta sobrecarregado) e o objeto
    v1.print();
    v2.print();
    v2 = operator*(4,v1); // Essa é equivlente a de cima, porém não se usa assim.....
    v2.print();

}


//ANOTAÇÕES:
/*Em C++, quando você tem operadores como +, -, *, entre outros, você pode definir como esses operadores
devem se comportar para tipos de dados personalizados. Isso é feito através da sobrecarga de operadores.
No exemplo dado:
`v1 * 4` é sobrecarregado pelo operador `*`, onde `v1` é o objeto à esquerda do operador `*` e `4` é o valor à direita.
Em C++, isso pode ser implementado como `v1.operator*(4)`. No entanto, para `4 * v1`, C++ não pode chamar
diretamente `4.operator(v1)` porque `4` não é um objeto que pode ter um método `operator(v1)`.
então basicamente para usar o inteiro na frente do vetor uma ideia seria usar funções amigas da classe visto que elas acessam
os campos da classe e passa o escalar e o objeto da classe como parametros na definição da função amiga
(sobrecarga do operador *).... Dessa maneira nãos será necessário chamar métodos (get e set), o acesso é direto.
Após isso o 4*v1 funcionará normalmente usando a sobrecarga
Lembrando que o primeiro caso v1*4 = v1.operator*(4) isso é uma sobrecarga (indicada pelo operator*) pois está relacionando
um objeto da classe com um escalar.
Portanto, a sobrecarga de operadores (v1 * 4) permite que você relacione um objeto com um inteiro de forma personalizada.
E ao usar uma função amiga, você pode resolver o problema de não poder chamar diretamente 4.operator*(v1),
permitindo que 4 * v1 funcione corretamente.*/
