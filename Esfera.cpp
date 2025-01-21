/* Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Entrada
O arquivo de entrada contém um valor de ponto flutuante (dupla precisão), correspondente ao raio da esfera.

Saída
A saída deverá ser uma mensagem "VOLUME" conforme o exemplo fornecido abaixo, 
com um espaço antes e um espaço depois da igualdade
O valor deverá ser apresentado com 3 casas após o ponto*/

#include <iostream>
using namespace std;

int main() {

    double R, pi, volume;
    cin >> R;
    pi = 3.14159;
    volume = (4/3.0) * pi * R * R * R;

    cout.precision(3);
    cout << fixed;
    cout << "VOLUME = " << volume << endl;

    return 0;
}