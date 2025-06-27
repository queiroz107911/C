/* É possível colocar uma pizza grande com formato retangular sobre a superfície de uma mesa redonda 
de modo que não fiquem partes penduradas na borda da mesa

Entrada
Cada caso de teste começa com um número inteiro R, sendo o raio da superfície da mesa onde os participantes estão sentados (1 ≤ R ≤ 1000). 
Então 2 números inteiros W e L especificando a largura e altura da pizza (1 ≤ W ≤ L ≤ 1000). 
A entrada termina com R = 0. Caso contrário, 1 ≤ R ≤ 1000. 
Então seguem 2 números inteiros W e L especificando a largura e o comprimento da pizza, 1 ≤ W ≤ 1000.

Saída
Haverá uma saída para cada caso de teste informando se uma pizza cabe ou não na mesa com seu número do pedido. 
Uma pizza que toca a borda da mesa sem ultrapassá-la é considerada como válida*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int Raio; // Raio da pizza
    int L; // Altura da pizza
    int W; // Largura da pizza
    int pedido = 1;

    while(true) {
        cin >> Raio;
        if(Raio == 0) break; // Para quando Raio = 0
        cin >> W >> L;

        double Diagonal_Pizza = sqrt(L * L + W * W);
        double Diametro_Mesa = 2.0 * Raio;

        if(Diagonal_Pizza <= Diametro_Mesa) {
            cout << "Pizza" << pedido << " fits on the table." << endl;
        } else {
            cout << "Pizza" << pedido <<  " does not fit on the table." << endl;
        }
        pedido++;

    }
    return 0;
}

// resoolver usando ponteiros e alocação dinamica de memoria