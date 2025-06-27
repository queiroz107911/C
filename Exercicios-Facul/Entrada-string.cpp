/* 
Crie 3 variáveis para armazenar uma frase de no máximo 100 caracteres;
Leia uma frase para a primeira variável;
Leia uma frase para a segunda variável;
Leia uma frase para a terceira variável;
Imprima a primeira variável lida no passo 2, a segunda variável lida no passo 3, a terceira variável lida no passo 4. Não esqueça de pular linha;
Imprima a primeira variável lida no passo 3, a segunda variável lida no passo 4, a terceira variável lida no passo 2. Não esqueça de pular linha;
Imprima a primeira variável lida no passo 4, a segunda variável lida no passo 2, a terceira variável lida no passo 3. Não esqueça de pular linha;
Repita o procedimento 5, imprimindo só 10 caracteres de cada variável.
Entrada
A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem três linhas. 
Na primeira linha tem uma variável A que armazena uma frase de no máximo 100 caracteres. 
Na segunda linha tem uma variável B que armazena uma frase de no máximo 100 caracteres. 
Na terceira linha tem uma variável C que armazena uma frase de no máximo 100 caracteres. 
Conforme mostrado no exemplo de entrada a seguir.

Saída
Para cada arquivo da entrada, terá um arquivo de saída. 
O arquivo de saída tem quatro linhas da forma descrita nos itens 5, 6, 7 e 8. Conforme mostra o exemplo de saída a seguir.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B, C;

    // Leitura de múltiplos casos de teste
    while (getline(cin, A) && getline(cin, B) && getline(cin, C)) {
        // Impressão das frases completas
        cout << A << B << C << endl;
        cout << B << C << A << endl;
        cout << C << A << B << endl;

        // Impressão dos primeiros 10 caracteres de cada frase
        cout << A.substr(0, 10) << B.substr(0, 10) << C.substr(0, 10) << endl;
    }

    return 0;
}
