/* Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Entrada
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais
representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada

Saída
Imprima o número e o salário do funcionário com um espaço em branco antes e depois da igualdade. 
No caso do salário, também deve haver um espaço em branco após o $*/

#include <iostream>
using namespace std;

int main() {

    int numero, horas;
    double valorhora, salario;
    cin >> numero;
    cin >> horas;
    cin >> valorhora;


    salario = horas * valorhora;
    cout.precision(1);

    cout << "NUMBER = " << numero << endl;
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}