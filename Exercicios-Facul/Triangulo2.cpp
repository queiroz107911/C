/* Determinar se, dados os comprimentos de quatro varetas
é ou não é possível selecionar três varetas, dentre as quatro, e formar um triângulo.

Entrada
A entrada é composta por apenas uma linha contendo quatro números inteiros A, B, C e D (1 ≤ A, B, C, D ≤ 100).

Saída
Seu programa deve produzir apenas uma linha contendo apenas um caractere, que deve ser
‘S’ caso seja possível formar o triângulo, ou ‘N’ caso não seja possível formar o triângulo*/

#include <iostream>
using namespace std;

int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    if((A + B > C && A + C > B && B + C > A) ||  
       (A + B > D && A + D > B && B + D > A) || 
       (A + C > D && A + D > C && C + D > A) ||
       (B + C > D && B + D > C && C + D > B)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;

}

