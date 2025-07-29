// Grafo Não Direcionado/Orientado

#include <iostream>
using namespace std;

int main() {
    int vertices = 4;
    int matriz[4][4] = {0};

    // Adiciona arestas não direcionadas
    matriz[0][1] = 1;
    matriz[1][0] = 1;

    matriz[0][2] = 1;
    matriz[2][0] = 1;

    matriz[1][3] = 1;
    matriz[3][1] = 1;

    // Exibir matriz
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
