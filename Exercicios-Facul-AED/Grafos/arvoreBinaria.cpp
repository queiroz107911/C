// estrutura de nó de árvore binária

struct Node {
    int valor;
    Node* esquerda;
    Node* direita;

    Node(int v) {
        valor = v;
        esquerda = nullptr;
        direita = nullptr;
    }
};
