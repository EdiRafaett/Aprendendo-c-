#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

//Criação da Super classe
class Equipamento{
private:
    char nome[100];
    char fabricante[100];
    float preco;
public:
    Equipamento(int x);
    ~Equipamento();
    //Métodos da super classe
    void setNome(const char *_nome);
    void setFabricante(const char *_fabricante);
    void  setPreco(float _preco);
    char* getNome(void);
    char* getFabricante(void);
    float getpreco(void);
};

#endif //EQUIPAMENTO_H
