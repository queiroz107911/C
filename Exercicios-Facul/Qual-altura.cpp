/*Nick calculava o ângulo do arremesso, que formava sempre uma parábola, e extraía uma função de segundo grau da trajetória. 
Ajude Nick e Mory a ganhar muitos prêmios neste programa.

Entrada
A primeira linha contém um número inteiro T (2 <= T <= 99) relativo ao número de casos de teste. 
As T linhas seguintes possuem três valores inteiros A (A < 0), B e C (-100 <= B, C <= 100)
representando os coeficientes de uma função de segundo grau, na forma ax2 + bx + c.

Saída
Para cada caso de teste de entrada do seu programa, você deve imprimir um número real
com aproximação de duas casas decimais, a altura máxima do arremesso de uma fruta*/

#include <iostream>
#include <iomanip>  // Para controlar a precisão na saída
using namespace std;

int main() {
    int T;
    cin >> T;  // Lê o número de casos de teste

    for (int i = 0; i < T; i++) {
        int A, B, C;
        cin >> A >> B >> C;  // Lê os coeficientes da função quadrática

        // Calcula a posição do vértice
        double x_vertice = -static_cast<double>(B) / (2 * A);

        // Calcula a altura máxima substituindo x_vertice na função
        double altura_maxima = A * x_vertice * x_vertice + B * x_vertice + C;

        // Imprime a altura máxima com 2 casas decimais
        cout << fixed << setprecision(2) << altura_maxima << endl;
    }

    return 0;
}
