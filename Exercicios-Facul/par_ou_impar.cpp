/* Dada uma seqüência de informações sobre partidas de Par ou Ímpar (nomes dos jogadores e números que os jogadores escolheram)
você deve escrever um programa para indicar o vencedor de cada uma das partidas.

Entrada
A entrada é composta de vários conjuntos de testes. 
A primeira linha de um conjunto de testes contém um inteiro N (0 ≤ N ≤ 1000), que indica o número de partidas de Par ou Ímpar que aconteceram. 
As duas linhas seguintes contêm cada uma um nome de jogador. 
Um nome de jogador é uma cadeia de no mínimo um e no máximo dez letras (maiúsculas e minúsculas)
As N linhas seguintes contêm cada uma dois inteiros A e B que representam o número de dedos que cada jogador mostrou
em cada partida (0 ≤ A ≤ 5 e 0 ≤ B ≤ 5). 
Em todas as partidas, o primeiro jogador sempre escolhe Par. O final da entrada é indicado por N = 0.

Saída
Para cada conjunto de teste da entrada, seu programa deve produzir a saída da seguinte forma. 
A primeira linha deve conter um identificador do conjunto de teste, no formato “Teste n”, onde n é numerado seqüencialmente a partir de 1. 
As próximas N linhas devem indicar o nome do vencedor de cada partida. A próxima linha deve ser deixada em branco. 
A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;
    int teste = 1;
    
    while(true) {

        cin >> N;
        if(N == 0) break;
        string nome1, nome2;
        cin >> nome1 >> nome2;

        
        
        for(int i = 0; i < N; i++) {
            int A, B;
            cin >> A >> B;

            
        }
        int A, B;
        int soma = A + B;
        int ganhador1, ganhador2;
            
            if(soma % 2 == 0) {
                cout << "Teste " << teste++ << endl;
                cout << nome1 << endl;
            } else {
                cout << "Teste " << teste++ << endl;
                cout << nome2 << endl;
            }

         
    }
    
       
    return 0;  
}