/*AED20251_T2_241039251_<L03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
*/

#ifndef ORDENACAO_H
#define ORDENACAO_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Enum para os tipos de caso de teste
enum class TIPO_CASO {
    PIOR,
    MEDIO,
    MELHOR
};

// Classe base para algoritmos de ordenação
class Ordenacao {
    protected:
        string nomeAlgoritmo;
        vector<int> vetorAuxiliar;
        vector<int> vetorPrincipal;
        int quantidade;
        TIPO_CASO caso;
        clock_t ligaTempo; 
        clock_t desligaTempo;

    public:
        Ordenacao(string nomeAlgoritmo, int quantidade, TIPO_CASO caso) {
            this->nomeAlgoritmo = nomeAlgoritmo;
            this->quantidade = quantidade;
            this->caso = caso;
            srand(static_cast<unsigned int>(time(nullptr)));  // inicializa o tempo, dentro do constructor para evitarmúltiplas inicializações
        }

    // étodos utilitários
    virtual void gerarNumerosAleatorios(int quantidade);
    virtual void casoPior(int quantidade);
    virtual void casoMedio(int quantidade);
    virtual void casoMelhor(int quantidade);
    virtual void guardaNumeros(int quantidade);
    void ligaTempo();
    void desligaTempo();
    vector<int> getVetorOrdenado();
};

#endif