#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <vector>
using namespace std;

struct Vertice {
    char vertice;
    int visitado;
    int flags;
};

struct Aresta {
    char origem;  // linha
    char destino; // coluna
    int peso; // representa a funcao custo do grafo em que seu conteudo esta dentro dos atributos da classe grafo, implicitamente 
};

class Grafo {
private:
    vector<Aresta> arestas;  
    vector<Vertice> vertices;  
    // listas de adjacencia em formato de arestas e vertices
    vector<vector<int>> matrizAdj; 
    
    // variaveis para poder modificar o grafo sem alterar os dados originais, variaveis para teste, copia
    vector<Aresta> arestasDeTeste;
    vector<vector<int>> matrizDeTeste;

public:
// constructors com lista de inicializao -> boa pratica
    Grafo(vector<vector<int>> matrizAdj) : matrizAdj(matrizAdj) {
        TransformaMatrizEmLista();
    }

    Grafo(vector<Aresta> arestas) : arestas(arestas) { 
        TransformaListaEmMatriz();
    }

    // operacoes com a matriz e a lista - transformar um em outro
    void TransformaMatrizEmLista();
    void TransformaListaEmMatriz();

    // informacoes do grafo
    int tamanhoGrafo() const { return vertices.size() + arestas.size(); } // vertices + arestas
    int cardinalidadeVertices() const { return vertices.size(); } // número total de vértices (nós) em um grafo
    int cardinalidadeArestas() const { return arestas.size(); } // número total de arestas (ligações) entre os vértices
    int diferencaCardinalidadesVA() { return cardinalidadeVertices() - cardinalidadeArestas(); } // cVertices - cArestas
    
    void grauVertices(char vertice); 
    // número total de arestas conectados a um vertice (conta todas as arestas ligadas a v) 
    // se houver uma aresta que liga um vértice a ele mesmo (laço), ela conta duas vezes no grau
    // char vertice -> escolher qual vertice quer verificar o grau

    // verificacoes no grafo
    void caminhoMaisCurto(char origem, char destino); // encontrar o menor custo (ou menor número de arestas) entre dois vértices

    bool ehConexo(); // (tem caminho entre todos os pares, isto é, dois loops for que saem - break- na primeira desconexão / busca dfs ou bfs
    bool ehArvore(); // se sim, deve ser conexo e  A = V-1
    bool ehAnel(); // quando o grafo forma um circulo fechado
    bool ehEstrela(); // único vértice central conectado a todos os outros  com grau n-1 os outros vertices tem grau 1 
    bool ehTotalmenteConexo();
    
    // buscas no grafo 
    void dfs(char inicio); // uso do char para "escolher" um vertice de partida para realizar a busca
    void bfs(char inicio);

    // algoritmos de grafos
    void dijkstra(char origem, char destino);
    void prim();
    void kruskal();
    void bellmanFord();

};

#endif
