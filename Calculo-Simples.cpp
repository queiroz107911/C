#include <iostream>
using namespace std;

int main() {

    int codigo1, numero1, codigo2, numero2;
    double valor1, valor2, total;
    cin >> codigo1 >> numero1 >> valor1;
    cin >> codigo1 >> numero2 >> valor2;

    total = (numero1 * valor1) + (numero2 * valor2);
    printf("VALOR A PAGAR R$ %.2f\n", total);

    return 0;
}