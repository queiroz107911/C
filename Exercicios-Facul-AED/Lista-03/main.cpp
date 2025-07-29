/*AED20251_T2_241039251_<L03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <fstream>
#include "Ordenacao.h"   
#include "TiposDeOrdenacao.h"
using namespace std;


int main() {
    // Teste para caso Melhor
    int quantidade = 10;
    cout << "Teste para MELHOR caso:\n";

    // criei um vector para armazenar cada caso teste
    // assim consigo aplicar o mesmo metodo de ordenação para cada caso
    // e depois faço isso com todos os outros casos
    // e assim consigo ver o tempo de execução de cada caso teste
    vector<TIPO_CASO> casos = {TIPO_CASO::MELHOR, TIPO_CASO::MEDIO, TIPO_CASO::PIOR};
    vector<string> nomes = {"MELHOR", "MEDIO", "PIOR"};

    for (int i = 0; i < casos.size(); ++i) {
        cout << "\n Teste -> " << nomes[i] << " caso:\n";


    OrdenacaoPorTroca ordenacaoTroca_bubble("Bubble Sort", quantidade, TIPO_CASO::MELHOR);
    ordenacaoTroca_bubble.bubbleSort(); 
    }   

    return 0;
}
