#include <iostream>

using namespace std;

int main(){
    int *x;
    x = new int; //alocação de memória no heap para guardar um inteiro
    *x = 3;
    std::cout << "Endereço de x: " << &x << std::endl; // endereço da memória onde o ponteiro x está armazenado
    std::cout << "Valor de x: " << x << std::endl; //endereço de memória para onde x aponta (onde o 3 está armazenado)
    std::cout << "conteúdo de x: " << *x << std::endl; // conteúdo para o qual x aponta
    delete x; //liberação de memória

}

//ANOTAÇÕES:

//Para tipo primitivos aloca-se usando new e libera usando delete sem colchetes
// Para blocos maiores de elementos new[] e delete[]
