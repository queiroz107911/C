/* A função que Rafael escolheu é r(x, y) = (3x)² + y².
Já Beto escolheu a função b(x, y) = 2(x²) + (5y)².
Carlos, por sua vez, escolheu a função c(x, y) = -100x + y³.

Dados os valores x e y, diga quem escolheu a função com o maior resultado.

Entrada
A primeira linha de entrada contém um inteiro N que determina a quantidade de casos de teste. 
Cada caso de teste consiste em dois inteiros x e y (1 ≤ x, y ≤ 100), indicando as variáveis a serem inseridas na função.

Saída
Para cada caso de teste imprima uma linha, contendo uma frase, indicando quem ganhou a competição. 
Por exemplo, se Rafael ganhar a competição, imprima “Rafael ganhou”. Assuma que nunca haverá empates*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Número de casos de teste
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y; // Leitura dos valores de x e y
        
        // Cálculo das funções

        
        int rafael = (3 * x) * (3 * x) + y * y;
        int beto = 2 * (x * x) + (5 * y) * (5 * y);
        int carlos = -100 * x + y * y * y;
        
        // Determinando quem ganhou
        if (rafael > beto && rafael > carlos) {
            cout << "Rafael ganhou" << endl;
        } else if (beto > rafael && beto > carlos) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }
    }

    return 0;
}
