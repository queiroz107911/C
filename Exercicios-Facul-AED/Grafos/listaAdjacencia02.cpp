// Grafo Não Direiconado/Orientado

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices = 4; // A, B, C, D
    vector<vector<int>> listaAdj(vertices);

    // Adiciona as arestas (não direcionadas)
    listaAdj[0].push_back(1); // A-B
    listaAdj[1].push_back(0);

    listaAdj[0].push_back(2); // A-C
    listaAdj[2].push_back(0);

    listaAdj[1].push_back(3); // B-D
    listaAdj[3].push_back(1);

    // Exibir
    for (int i = 0; i < vertices; i++) {
        cout << "Vertice " << i << ": ";
        for (int vizinho : listaAdj[i])
            cout << vizinho << " ";
        cout << endl;
    }
}
