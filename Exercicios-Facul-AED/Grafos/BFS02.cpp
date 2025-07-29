// Grafo Orientado/Direcionado

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int inicio, vector<vector<int>>& grafo, vector<bool>& visitado) {
    queue<int> fila;
    fila.push(inicio);
    visitado[inicio] = true;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();
        cout << atual << " ";

        for (int vizinho : grafo[atual]) {
            if (!visitado[vizinho]) {
                fila.push(vizinho);
                visitado[vizinho] = true;
            }
        }
    }
}

int main() {
    int n = 4;
    vector<vector<int>> grafo(n);

    // Grafo orientado
    grafo[0] = {1, 2};
    grafo[1] = {3};
    grafo[2] = {};
    grafo[3] = {};

    vector<bool> visitado(n, false);
    bfs(0, grafo, visitado);
    return 0;
}
