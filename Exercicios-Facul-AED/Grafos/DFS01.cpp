// Grafo não Orientado/Direcionado

#include <iostream>
#include <vector>
using namespace std;

void dfs(int atual, vector<vector<int>>& grafo, vector<bool>& visitado) {
    visitado[atual] = true;
    cout << atual << " ";

    for (int vizinho : grafo[atual]) {
        if (!visitado[vizinho]) {
            dfs(vizinho, grafo, visitado);
        }
    }
}

int main() {
    int n = 4;
    vector<vector<int>> grafo(n);
    
    // Grafo não orientado: adicionar ida e volta
    grafo[0] = {1, 2};
    grafo[1] = {0};
    grafo[2] = {0, 3};
    grafo[3] = {2};

    vector<bool> visitado(n, false);
    dfs(0, grafo, visitado);
    return 0;
}
