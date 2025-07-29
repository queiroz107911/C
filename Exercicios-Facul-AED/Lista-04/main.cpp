#include "grafos.h"
#include <iostream>
using namespace std;

int main() {
    vector<vector<int>> matriz = {
        { 0, 4, 0, 0, 0 }, 
        { 4, 0, 8, 0, 0 }, 
        { 0, 8, 0, 7, 2 }, 
        { 0, 0, 7, 0, 6 }, 
        { 0, 0, 2, 6, 0 }  
    };

    Grafo grafo(matriz);

    cout << "1 - Origem-destino" << endl;
    grafo.dijkstra('A', 'D');

    cout << "\n2 - Arvore Geradora Minima" << endl;
    grafo.prim();

    return 0;
}
