/* Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima X conforme exemplo apresentado abaixo. 

Entrada
A entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da variável X e pelo final de linha.
Cuide para que tenha um espaço antes e depois do sinal de igualdade*/

#include <iostream>
using namespace std;

int main () {

    int A, B, X;
    cin >> A >> B;

    X = A + B;
    cout << "X = " << X << endl;

    return 0;
}