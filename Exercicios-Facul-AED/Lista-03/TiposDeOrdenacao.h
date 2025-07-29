/*AED20251_T2_241039251_<L03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include <vector>
#include "Ordenacao.h"
using namespace std;

// Criação de cada classe de ordenação com seus respectivos metodos fazendo herança com a classe ordenação dentro de Ordenacao
// Constructors utilizando boas práticas
// Cada metodo será chamado e estruturado no .cpp
class OrdenacaoPorTroca : public Ordenacao {
    public:
        OrdenacaoPorTroca(string nomeAlgoritmo, int quantidade, TIPO_CASO caso) : Ordenacao(nomeAlgoritmo, quantidade, caso){}
        void bubbleSort();
        void quickSort();
};
class OrdenacaoPorSelecao : public Ordenacao {
    public:
        OrdenacaoPorSelecao(string nomeAlgoritmo, int quantidade, TIPO_CASO caso) :Ordenacao(nomeAlgoritmo, quantidade, caso){}
        void selectionSort();
        void heapSort();
};
class OrdenacaoPorInsercao : public Ordenacao {
    public:
        OrdenacaoPorInsercao(string nomeAlgoritmo, int quantidade, TIPO_CASO caso) : Ordenacao(nomeAlgoritmo, quantidade, caso) {}
        void insertionSort();
        void shellSort();
};
class OrdenacaoPorMistura : public Ordenacao {
    public:
        OrdenacaoPorMistura(string nomeAlgoritmo, int quantidade, TIPO_CASO caso) : Ordenacao(nomeAlgoritmo, quantidade, caso) {}
        void mergeSort();
        void timSort();
};
