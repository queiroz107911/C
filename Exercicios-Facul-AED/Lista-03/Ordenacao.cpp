/*AED20251_T2_241039251_<L03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Ordenacao.h"
using namespace std;

// definição dos metodos para cada caso teste

// getter para o vetorprincipal
vector<int> Ordenacao::getVetorOrdenado() {
    return vetorPrincipal;
}
// metodo que gera numeros aleatorios entre 1 e quantidade 
void Ordenacao::gerarNumerosAleatorios(int quantidade){
    vetorPrincipal.clear();
    for (int i = 0; i < quantidade; i++) {
        int numero = std::rand() % quantidade + 1;  
        vetorPrincipal.push_back(numero);
    }
}

void Ordenacao::casoPior(int quantidade){
    for(int i = quantidade; i >= 1; i--){
        vetorPrincipal.push_back(i);
    }
    guardaNumeros(quantidade);
}

void Ordenacao::casoMedio(int quantidade) {
    gerarNumerosAleatorios(quantidade);
    guardaNumeros(quantidade);
}

void Ordenacao::casoMelhor(int quantidade) {
    for(int i = 1; i <= quantidade; i++){
        vetorPrincipal.push_back(i);
    }
    guardaNumeros(quantidade);
}
// metodo que guarda o que esta dentro do vetor principal(sem aplicar os metodos de ordenacao) no vetor auxilar para serem usados depois
void Ordenacao::guardaNumeros(int quantidade){
    vetorAuxiliar = vetorPrincipal;
}
        