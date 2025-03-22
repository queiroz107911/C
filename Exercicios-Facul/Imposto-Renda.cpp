/* Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. 
Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00
pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. 
No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. 
O valor deve ser impresso com duas casas decimais.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas após o ponto. 
Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento"*/

#include <iostream>
#include <iomanip>  // Para usar setprecision
using namespace std;

int main() {
    // Leitura do salário
    double salario;
    cin >> salario;

    // Variável para armazenar o imposto a ser pago
    double imposto = 0.0;

    // Lógica para calcular o imposto
    if (salario <= 2000.00) {
        cout << "Isento" << endl;
    } else if (salario <= 3000.00) {
        imposto = (salario - 2000.00) * 0.08;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    } else if (salario <= 4500.00) {
        imposto = (1000.00 * 0.08) + (salario - 3000.00) * 0.18;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    } else {
        imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + (salario - 4500.00) * 0.28;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }

    return 0;
}
