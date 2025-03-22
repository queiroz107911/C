/* Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., 
até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
*/

#include <iostream>
using namespace std;

int main() {

    int N[20];
    int i;
    for(i = 0; i < 20; i++) {
        cin >> N[i];

    }

    for (int i = 0; i < 10; i++) {
        int temp = N[i];  // Salva o valor de N[i] em uma variável temporária
        N[i] = N[19 - i];  // A posição i do vetor recebe o valor da posição 19-i
        N[19 - i] = temp;  // A posição 19-i recebe o valor armazenado na variável temp
    }

    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl; 
    }

    cin.get();
    return 0;
}

