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
