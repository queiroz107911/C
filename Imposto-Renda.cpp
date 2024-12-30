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
