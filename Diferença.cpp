/* Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas*/

#include <iostream>
using namespace std;

int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int diff = (A* B) - (C * D);

    cout << "DIFERENÇA = " << diff << endl;

    return 0;
}