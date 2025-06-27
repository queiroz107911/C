/* 
Dabriel está brincando com suas duas maravilhosas strings e, ao fazer algumas operações com elas, percebeu uma coisa: 
sempre existe uma terceira string que contém como subsequência as suas outras duas strings. 

Uma subsequência é formada através da remoção de alguns caracteres, e os restantes se mantém na mesma posição relativa. 
Por exemplo: A string 'casa' contém como subsequência a string 'cs', mas não contém a string 'ac'.

Após um tempo analisando essas propriedades
Dabriel percebeu que para gerar a terceira string bastava concatenar as outras duas, uma coisa muito trivial. 
Portanto, ele solicitou sua ajuda para determinar qual o tamanho da menor string que possui as duas como subsequência.

Entrada
A primeira linha contém a string A (1 ≤ |A| ≤ 1000), e a segunda linha contém a string B (1 ≤ |B| ≤ 1000). Elas são formadas apenas por letras minúsculas do alfabeto.

Saída
Informe qual o tamanho da menor string que possui como subsequências as strings A e B. */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int n = A.size();
    int m = B.size();

    // Matriz para calcular a LCS
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Preencher a matriz LCS
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Calcula o tamanho da menor supersequência comum
    int scss = n + m - dp[n][m];
    cout << scss << endl;

    return 0;
}
