#include "grafo.h"
#include <iostream>

int main() {
    // Criando vértices: A, B, C, D
    // Matriz de adjacência representando os pesos das arestas
    // 0 significa que não há ligação direta entre os vértices

    vector<vector<int>> matriz = {
        //A  B  C  D
        { 0, 1, 4, 0 }, // A
        { 1, 0, 2, 6 }, // B
        { 4, 2, 0, 3 }, // C
        { 0, 6, 3, 0 }  // D
    };

    // Criando o grafo com a matriz
    Grafo g(matriz);

    // Adicionando manualmente os vértices com letras (baseado na ordem da matriz)
    g.dfs('A'); // Isso inicializa e registra os vértices se for necessário
    g.bfs('A'); // Garante que os vértices estão preenchidos com char corretos (A, B, C, D)

    // ----------- 1. Problema de origem-destino (Dijkstra) ----------
    cout << "\n--- Problema de Origem-Destino ---" << endl;
    g.caminhoMaisCurto('A', 'D'); // menor caminho de A até D usando Dijkstra

    // ----------- 2. Problema de árvore geradora mínima (Prim) ----------
    cout << "\n--- Problema da Árvore Geradora Mínima ---" << endl;
    g.prim();

    return 0;
}
