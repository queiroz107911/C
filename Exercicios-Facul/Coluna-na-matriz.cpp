/* Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada
um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. 
A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.

Entrada
A primeira linha de entrada contem um número C (0 ≤ C ≤ 11) indicando a coluna que será considerada para operação. 
A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M') indicando a operação (Soma ou Média) 
que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal*/

#include <iostream>
#include <iomanip>  // Para definir a precisão do resultado
using namespace std;

int main() {
    int C;  // Coluna a ser considerada
    char T;  // Tipo de operação ('S' ou 'M')
    double matriz[12][12];  // Matriz 12x12

    // Leitura da coluna e operação
    cin >> C >> T;

    // Leitura da matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    double resultado = 0.0;
    
    // Realizando a operação na coluna C
    for (int i = 0; i < 12; i++) {
        resultado += matriz[i][C];
    }

    // Se a operação for 'M' (média), dividimos pela quantidade de elementos
    if (T == 'M') {
        resultado /= 12.0;
    }

    // Imprimimos o resultado com 1 casa decimal
    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}
