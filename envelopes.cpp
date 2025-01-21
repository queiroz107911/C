/* Uma empresa quer mandar um envelope para obter uma resposta de um cliente e quer saber se é possível colocar esse envelope dentro de outro. 
Ambos envelopes são retangulares e um só pode ser colocado dentro do outro se as dimensões forem ambas menores. 
Dadas as dimensões dos dois envelopes, responda se é possível ou não colocar o primeiro dentro do segundo.

Entrada
A entrada consiste de uma série de testes. 
A primeira linha contém um único inteiro indicando o número n (1 ≤ n ≤ 20) de casos de testes. 
A seguir vêm n linhas contendo, cada uma, um caso de teste. Cada caso de teste se compõe de 4 inteiros: 
os dois primeiros são as dimensões do envelope que deve ir dentro e os dois últimos, a dimensão do envelope principal.

Saída
Para cada caso de teste imprima, em uma linha:

. 'S' se for possível colocar o primeiro envelope dentro do segundo, ou

. 'N', caso contrário.*/

#include <iostream>
#include <algorithm> // para a função sort
using namespace std;

int main() {
    int n;
    cin >> n;  // Lê o número de casos de teste

    while (n--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;  // Lê as dimensões dos dois envelopes

        // Ordena as dimensões de ambos os envelopes
        int envelope1[] = {a1, b1};
        int envelope2[] = {a2, b2};
        
        sort(envelope1, envelope1 + 2);  // Ordena as dimensões do primeiro envelope
        sort(envelope2, envelope2 + 2);  // Ordena as dimensões do segundo envelope

        // Verifica se o envelope 1 pode ser colocado dentro do envelope 2
        if (envelope1[0] < envelope2[0] && envelope1[1] < envelope2[1]) {
            cout << "S" << endl;  // Se for possível, imprime "S"
        } else {
            cout << "N" << endl;  // Se não for possível, imprime "N"
        }
    }

    return 0;
}

