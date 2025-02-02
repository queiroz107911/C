/* Dados três valores, verifique se os três podem formar um triângulo. 
Em caso afirmativo, verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um triângulo retângulo ou não.

Entrada
A entrada consiste em três números inteiros A,B e C (0 < A,B,C < 105).

Saída
A saída deve conter a string "Invalido" se os valores lidos não formarem um triângulo. 
Se os valores formarem um triângulo a saída deve ser 
"Valido-Equilatero", "Valido-Escaleno" ou "Valido-Isoceles" de acordo com a característica do triângulo seguido de 
"Retangulo: S" se o triângulo for retângulo ou "Retangulo: N" se não for*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Verifica se os lados formam um triângulo válido
    if (A + B > C && A + C > B && B + C > A) {
        // Determina o tipo de triângulo
        if (A == B && B == C) {
            cout << "Valido-Equilatero" << endl;
        } else if (A == B || A == C || B == C) {
            cout << "Valido-Isoceles" << endl;
        } else {
            cout << "Valido-Escaleno" << endl;
        }

        // Determina o maior lado
        int maior = A, lado1 = B, lado2 = C;
        
        if (B > maior) {
            maior = B;
            lado1 = A;
            lado2 = C;
        }
        if (C > maior) {
            maior = C;
            lado1 = A;
            lado2 = B;
        }

        // Verifica se é um triângulo retângulo usando o Teorema de Pitágoras
        if (maior * maior == lado1 * lado1 + lado2 * lado2) {
            cout << "Retangulo: S" << endl;
        } else {
            cout << "Retangulo: N" << endl;
        }
        
    } else {
        // Caso os lados não formem um triângulo válido
        cout << "Invalido" << endl;
    }

    return 0;
}
