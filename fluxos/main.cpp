#include <iostream>

int main(){
    int x;
    //sobrecarga do operador >>
    std::cin >> x;  //É o mesmo de: std::cin.operator>>(x);
    x++;
    //sobrecarga do operador <<
    std::cout << "x = " << x << std::endl; //É o mesmo de: std::cout.operator<<(x);
    return 0;
}

/*A ideia de fluxos basicamente é com se dá a entrada de dados e saída deles
Geralmente usa-se o cout para imprimir dados na saída em uma tela (terminal) e o
cin para recebimento de dados do teclado
Poŕem ao invés de receber o teclado e imprimir em um terminal pode-se direcionar o fluxo para um arquivo
e da mesma forma ao ivés de receber o fluxo do teclado, pode-se recebê-lo de um arquivo
Isso geralmente é feito usando uma classe chamada <ofstream> quem mantem uma conexão do buffer interno com o fluxo de dados
e prover operaçõs de I/O com esse buffer
Está definida no header <fstream> que lida tanto com a entrada quanto com a saída
- abre o arquivo, conectando com o fluxo
- envia dados para o fluxo
- fecha o arquivo

Após essa etapas acima a iteração com  o fluxo se dá de maneira similar com o cin e cout*/
