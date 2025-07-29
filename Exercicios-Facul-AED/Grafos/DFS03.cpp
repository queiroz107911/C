// Classificação de arestas em DFS

#include <iostream>
#include <vector>
using namespace std;

enum Cor { BRANCO, CINZA, PRETO };

void dfs(int u, const vector<vector<int>>& grafo, vector<int>& cor) {
    cor[u] = CINZA;

    for (int v : grafo[u]) {
        if (cor[v] == BRANCO) {
            cout << "Aresta de árvore: " << u << " → " << v << endl;
            dfs(v, grafo, cor);
        }
        else if (cor[v] == CINZA) {
            cout << "Aresta de retorno (ciclo): " << u << " → " << v << endl;
        }
        else if (cor[v] == PRETO) {
            cout << "Aresta de avanço ou cruzamento: " << u << " → " << v << endl;
        }
    }

    cor[u] = PRETO;
}

int main() {
    int n = 4;
    vector<vector<int>> grafo(n);

    // Grafo orientado
    grafo[0] = {1, 2};
    grafo[1] = {2};
    grafo[2] = {3};
    grafo[3] = {};

    vector<int> cor(n, BRANCO);
    dfs(0, grafo, cor);
    return 0;
}
