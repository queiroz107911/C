/* Dadas as dimensões de uma caixa com suprimentos e o raio interno da esfera que é disparada pelo canhão
seu programa deverá dizer se é possível enviar tal caixa para Marte usando tal esfera.

Entrada
Cada entrada contém apenas uma linha com quatro inteiros L, A, P e R, (0 ≤ L, A, P, R ≤ 1000) que representam
a largura, altura e profundidade da caixa, e o raio da esfera.

Saída
Seu programa deve imprimir um único caractere: 'S' (sem aspas) 
se é possível colocar a caixa dentro da esfera, ou 'N' (sem aspas) caso contrário*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    
    int Largura, Altura, Profundidade, Raio_Esfera;
    cin >> Largura >> Altura >> Profundidade >> Raio_Esfera;

    int Diametro_Esfera = 2 * Raio_Esfera;
    int Diagonal_Caixa = sqrt(Largura * Largura + Altura * Altura + Profundidade * Profundidade);

    if(Diagonal_Caixa <= Diametro_Esfera) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;

}