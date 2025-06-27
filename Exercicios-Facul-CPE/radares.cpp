/* A imagem abaixo mostra uma avenida de tamanho 15 quilômetros e radares com cobertura de 4 quilômetros, 
cada cor representa um radar, então é possível notar que a quantidade mínima de radares necessários para cobrir a avenida é 4.

Entrada
A primeira linha consiste em um inteiro C que representa a quantidade de casos de teste. 
Cada caso de teste é composto por dois inteiros N e M que indicam o tamanho da avenida e a área de cobertura do radar.

(1 ≤ N ≤ 109)

(1 ≤ M ≤ 109)

Saída
Seu programa deve exibir a menor quantidade de radares necessários para cobrir toda avenida*/

#include <iostream>
using namespace std;

int main() {
    int C; // Quantidade de casos de teste
    cin >> C;

    while (C--) {
        int N, M; // Comprimento da avenida e área de cobertura do radar
        cin >> N >> M;

        // Calcular a quantidade mínima de radares
        int radares_necessarios = (N + M - 1) / M;

        // Exibir o resultado
        cout << radares_necessarios << endl;
    }

    return 0;
}
