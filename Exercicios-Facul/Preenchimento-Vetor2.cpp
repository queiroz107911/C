/* Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. 
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. 
Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição. 
Cada valor do vetor deve ser apresentado com 4 casas decimais*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double X;
    cin >> X;
    
    int i;
    double N[100];  

    N[0] = X; 
    // Preenche as outras posições com metade do valor da anterior
    for (i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2;
    }

    for (i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
    }

    return 0;
}
