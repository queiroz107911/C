/* Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”
caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double A, B, C;
    cin >> A >> B >> C;
    
    double DELTA = B * B - 4 * A * C;
    
    if(A == 0 || DELTA < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double R1 = (-B + sqrt(DELTA)) / (2 * A);
        double R2 = (-B - sqrt(DELTA)) / (2 * A);
        cout.precision(5);
        cout << fixed;
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;

}