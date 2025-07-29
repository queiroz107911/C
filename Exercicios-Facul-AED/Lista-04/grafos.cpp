#include "grafos.h"
#include <queue>
#include <iostream>
using namespace std;

// encontra o indice do vertice
int indiceVertice(const vector<Vertice>& vertices, char v) {
    for (int i = 0; i < (int)vertices.size(); i++) {
        if (vertices[i].vertice == v) return i;
    }
    return -1; // não encontrado
}

void Grafo::TransformaMatrizEmLista() {
    arestas.clear();
    vertices.clear();

    int n = (int)matrizAdj.size();
    // Cria vertices com labels 'A', 'B', ... ou baseados no índice (ou outro critério)
    for (int i = 0; i < n; i++) {
        Vertice v;
        v.vertice = 'A' + i;  // atribui letras sequenciais
        v.visitado = 0;
        v.flags = 0;
        vertices.push_back(v);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (matrizAdj[i][j] != 0) { // 0 = sem aresta
                Aresta a;
                a.origem = vertices[i].vertice;
                a.destino = vertices[j].vertice;
                a.peso = matrizAdj[i][j];
                arestas.push_back(a);
            }
        }
    }
}

void Grafo::TransformaListaEmMatriz() {
    vertices.clear();
    vector<char> charsVertices;
    for (auto& a : arestas) {
        bool origemExiste = false, destinoExiste = false;
        for (char c : charsVertices) {
            if (c == a.origem) origemExiste = true;
            if (c == a.destino) destinoExiste = true;
        }
        if (!origemExiste) charsVertices.push_back(a.origem);
        if (!destinoExiste) charsVertices.push_back(a.destino);
    }

    for (auto c : charsVertices) {
        Vertice v;
        v.vertice = c;
        v.visitado = 0;
        v.flags = 0;
        vertices.push_back(v);
    }

    int n = (int)vertices.size();
    matrizAdj.assign(n, vector<int>(n, 0)); // inicializa com zeros

    for (auto& a : arestas) {
        int i = indiceVertice(vertices, a.origem);
        int j = indiceVertice(vertices, a.destino);
        if (i != -1 && j != -1) {
            matrizAdj[i][j] = a.peso;
            matrizAdj[j][i] = a.peso; // não direcionado
        }
    }
}

// gratu do vertice
void Grafo::grauVertices(char v) {
    int grau = 0;
    for (auto& a : arestas) {
        if (a.origem == v) grau++;
        if (a.destino == v) grau++;
        if (a.origem == v && a.destino == v) grau++; // laço conta duas vezes
    }
    cout << "Grau do vertice " << v << " é " << grau << endl;
}

// busca em profundidade
void Grafo::dfs(char inicio) {
    for (auto& vert : vertices) {
        vert.visitado = 0;
    }

    int start = indiceVertice(vertices, inicio);
    if (start == -1) {
        cout << "Vertice inicial nao encontrado!" << endl;
        return;
    }

    vector<int> stack;
    stack.push_back(start);

    cout << "DFS: ";

    while (!stack.empty()) {
        int u = stack.back();
        stack.pop_back();

        if (vertices[u].visitado == 0) {
            cout << vertices[u].vertice << " ";
            vertices[u].visitado = 1;
            for (int v = 0; v < (int)vertices.size(); v++) {
                if (matrizAdj[u][v] != 0 && vertices[v].visitado == 0) {
                    stack.push_back(v);
                }
            }
        }
    }
    cout << endl;
}

// busca em largura
void Grafo::bfs(char inicio) {
    for (auto& vert : vertices) {
        vert.visitado = 0;
    }

    int start = indiceVertice(vertices, inicio);
    if (start == -1) {
        cout << "Vertice inicial nao encontrado!" << endl;
        return;
    }

    queue<int> fila;
    fila.push(start);
    vertices[start].visitado = 1;

    cout << "BFS: ";

    while (!fila.empty()) {
        int u = fila.front();
        fila.pop();
        cout << vertices[u].vertice << " ";

        for (int v = 0; v < (int)vertices.size(); v++) {
            if (matrizAdj[u][v] != 0 && vertices[v].visitado == 0) {
                vertices[v].visitado = 1;
                fila.push(v);
            }
        }
    }
    cout << endl;
}


bool Grafo::ehConexo() {   // DFS para verificar se todos os vértices são acessíveis
    if (vertices.empty()) return true;

    for (auto& vert : vertices) vert.visitado = 0;

    dfs(vertices[0].vertice);

    for (auto& vert : vertices) {
        if (vert.visitado == 0) return false;
    }
    return true;
}

void Grafo::caminhoMaisCurto(char origem, char destino) {
    dijkstra(origem, destino);
}

bool Grafo::ehArvore() { // um grafo é árvore se for conexo e tiver A = V - 1
    return ehConexo() && (cardinalidadeArestas() == cardinalidadeVertices() - 1);
}

bool Grafo::ehAnel() {if (vertices.size() < 3) return false; 
// O grafo precisa ser conexo / precisa ter pelo menos 3 vértices / Cada vértice precisa se conectar com dois outros vértices, nem mais nem menos

    if (!ehConexo()) return false;

    for (const auto& v : vertices) {
        int grau = 0;
        for (const auto& a : arestas) {
            if (a.origem == v.vertice || a.destino == v.vertice) {
                grau++;
                if (a.origem == a.destino)
                    grau++; // laço conta duas vezes
            }
        }

        if (grau != 2)
            return false;
    }

    return true;
}

bool Grafo::ehEstrela() {int centro = 0;  // um vértice tem grau N-1, todos os outros têm grau 1
    int folhas = 0;

    for (const auto& v : vertices) {
        int grau = 0;
        for (const auto& a : arestas) {
            if (a.origem == v.vertice || a.destino == v.vertice) {
                grau++;
                // se for laço conta duas vezes
                if (a.origem == a.destino)
                    grau++;
            }
        }

        if (grau == vertices.size() - 1)
            centro++;
        else if (grau == 1)
            folhas++;
        else
            return false; // se não for grau N-1 ou 1, não é estrela
    }

    return centro == 1 && folhas == vertices.size() - 1;
}


bool Grafo::ehTotalmenteConexo() {int n = vertices.size(); // todos os pares de vértices estão ligados: grau == N-1 para todos

    for (const auto& v : vertices) {
        int grau = 0;
        for (const auto& a : arestas) {
            if (a.origem == v.vertice || a.destino == v.vertice) {
                grau++;
                if (a.origem == a.destino)
                    grau++;
            }
        }

        if (grau != n - 1)
            return false;
    }

    return true;
}

// Implementei somente as que vou usar no .main
// OBS -> NAO CONSEGUI REALIZAR OS CODIGOS DENTRO DE CADA ALGORITMO, PEGUEI UMA SOLUÇÃO JA PRONTA, PORÉM O RESTO EU MESMO FIZ E IMPLEMENTEI A LOGICA
void Grafo::dijkstra(char origem, char destino) {
    int n = matrizAdj.size();
    vector<int> distancia(n, 1000000000);
    vector<int> anterior(n, -1);
    vector<bool> visitado(n, false);

    int origemIdx = indiceVertice(vertices, origem);
    int destinoIdx = indiceVertice(vertices, destino);

    if (origemIdx == -1 || destinoIdx == -1) {
        cout << "Origem ou destino nao encontrado no grafo!" << endl;
        return;
    }

    distancia[origemIdx] = 0;
    vector<pair<int, int>> fila;
    fila.push_back({0, origemIdx});

    while (!fila.empty()) {
        int menor = 0;
        for (int i = 1; i < (int)fila.size(); ++i) {
            if (fila[i].first < fila[menor].first) menor = i;
        }
        int atual = fila[menor].second;
        fila.erase(fila.begin() + menor);

        if (visitado[atual]) continue;
        visitado[atual] = true;

        for (int vizinho = 0; vizinho < n; ++vizinho) {
            int peso = matrizAdj[atual][vizinho];
            if (peso > 0 && !visitado[vizinho]) {
                int novaDist = distancia[atual] + peso;
                if (novaDist < distancia[vizinho]) {
                    distancia[vizinho] = novaDist;
                    anterior[vizinho] = atual;
                    fila.push_back({novaDist, vizinho});
                }
            }
        }
    }

    if (distancia[destinoIdx] == 1000000000) {
        cout << "Nao existe caminho de " << origem << " até " << destino << "." << endl;
    } else {
        cout << "O menor caminho de " << origem << " até " << destino << " é: " << distancia[destinoIdx] << endl;

        vector<char> caminho;
        for (int v = destinoIdx; v != -1; v = anterior[v])
            caminho.push_back(vertices[v].vertice);
        for (int j = caminho.size() - 1; j >= 0; --j) {
            cout << caminho[j];
            if (j != 0) cout << " -> ";
        }
        cout << endl;
    }
}


void Grafo::prim() {int n = vertices.size();
    vector<int> chave(n, 2147483647);
    vector<int> pai(n, -1);
    vector<bool> naMST(n, false);

    chave[0] = 0;

    for (int i = 0; i < n - 1; ++i) {
        int u = -1;
        int minChave = 2147483647;
        for (int v = 0; v < n; ++v) {
            if (!naMST[v] && chave[v] < minChave) {
                minChave = chave[v];
                u = v;
            }
        }

        if (u == -1) break;

        naMST[u] = true;

        for (int v = 0; v < n; ++v) {
            if (matrizAdj[u][v] != 0 && !naMST[v] && matrizAdj[u][v] < chave[v]) {
                chave[v] = matrizAdj[u][v];
                pai[v] = u;
            }
        }
    }

    cout << "\n arvore Geradora Mínima :\n";
    int custoTotal = 0;
    for (int i = 1; i < n; ++i) {
        if (pai[i] != -1) {
            cout << vertices[pai[i]].vertice << " - " << vertices[i].vertice
                 << " (Peso: " << matrizAdj[pai[i]][i] << ")\n";
            custoTotal += matrizAdj[pai[i]][i];
        }
    }
    cout << "Custo total da árvore: " << custoTotal << endl;
}
