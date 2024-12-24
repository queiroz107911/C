#include <iostream>
using namespace std;

int main() {

    int numero, horas;
    double valorhora, salario;
    cin >> numero >> horas >> valorhora;

    salario = horas * valorhora;
    cout.precision(1);

    cout << "NUMBER = " << numero << endl;
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}