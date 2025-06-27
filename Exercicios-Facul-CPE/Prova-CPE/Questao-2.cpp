/* struct lista{
  int valor;
  struct lista *proximo;
} */

/* buscar(cabeca, k){ // k é o valor a ser pesquisado dentro da lista
  x = cabeca // cabeca é um ponteiro para o início da lista
  enquanto x != nulo e x.valor != k
     x = x.proximo
  retorna x
} */

/*inserir(cabeca, v){ 
  declara x // aloca espaço na memória para o novo item da lista
  x.valor = v
  se cabeca = NULL{
    cabeca = x
  }senao{
   x.proximo = cabeca
   cabeca = x
  }
   
} */

#include <iostream>
using namespace std;

struct lista {
    string palavra;
    lista* proximo;
};

// Função para inserir um elemento na lista 
void inserir(lista*& cabeca, string valor) {
    lista* novalista = new lista; 
    novalista->palavra = valor;
    novalista->proximo = cabeca;  
    cabeca = novalista;  
}

// Função para buscar um elemento na lista 
bool buscar(lista* cabeca, string valor) {
    lista* atual = cabeca;
    while (atual != nullptr) {
        if (atual->palavra == valor) {
            return true;  
        }
        atual = atual->proximo;
    }
    return false;  
}

int main() {
    int N;
    while (true) {
        cin >> N;
        if (N == 0) break;
        
        lista* cabeca = nullptr;  // Inicializa a lista como vazia
        string palavra, chaveBusca;

        for (int i = 0; i < N; i++) {
            cin >> palavra;
            inserir(cabeca, palavra);  // Insere cada palavra na lista
        }

        cin >> chaveBusca;  // Leitura da palavra de busca

        // Faz a busca na lista
        if (buscar(cabeca, chaveBusca)) {
            cout << "valor " << chaveBusca << " encontrado" << endl;
        } else {
            cout << "valor nao encontrado" << endl;
        }

        // Libera memória da lista
        while (cabeca != nullptr) {
            lista* temp = cabeca;
            cabeca = cabeca->proximo;
            delete temp;
        }
    }

    return 0;
}
