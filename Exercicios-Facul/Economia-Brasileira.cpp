/*Sua tarefa é fazer uma pesquisa para saber se a maioria da população está ou não satisfeita com o cenário econômico atual.

Entrada
A primeira linha contém um inteiro Q (4 ≤ Q ≤ 233000) representando o número de pessoas que participaram da pesquisa. 
A segunda linha contém Q inteiros Vi (0 ≤Vi ≤ 1, 1 ≤ i ≤ Q), representando a opinião do i-ésimo cidadão Brasileiro sobre o cenário econômico atual. 
Sendo "0" os que consideram o cenário atual satisfatório e "1" os que consideram não satisfatório.

Saída
Seu programa deve imprimir "Y" caso a maioria da população esteja de acordo com o cenário econômico. 
Caso contrário imprima "N"*/

#include <iostream>
using namespace std;

int main() {
    int Q;
    cin >> Q; // Leitura do número de pessoas

    int satisfacao = 0; // Contador de satisfação (número de "0"s)
    
    // Leitura das opiniões e contagem dos "0"s
    for (int i = 0; i < Q; i++) {
        int opinião;
        cin >> opinião;
        if (opinião == 0) {
            satisfacao++; // Incrementa quando a opinião é "0"
        }
    }
    
    // Se o número de "0"s for maior que a metade da população, imprime "Y"
    if (satisfacao > Q / 2) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
