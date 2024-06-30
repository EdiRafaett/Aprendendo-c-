//Diretivas de compilação condicional:
#ifndef VETOR2DCOMCLASSE_H //"se não estiver declarado VETOR2DCOMCLASSE_H[...]"
#define VETOR2DCOMCLASSE_H //[...]defina (declare) VETOR2DCOMCLASSE_H
//OBS: Caso VETOR2DCOMCLASSE_H já tenha sido compilado o ifndef verificará e não compilará novamente (só compila da primeira vez)

//No arquivo de header acontecem as declarações das classes
class Vetor2dComClasse{
private:
    float x,y;
public:
    //protótipos das funções:
    void setX(float x_);
    void setY(float y_);
    float getX(void);
    float getY(void);
};

#endif // VETOR2DCOMCLASSE_H
//Esse endif é até onde o arquivo de header será compilado se for verificado que não foi compilado ainda.
