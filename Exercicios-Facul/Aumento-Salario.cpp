/* A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:
Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00
15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float A; 
    cin >> A;
    
    float Reajuste;
    float Percentual_1 = 15;
    float Percentual_2 = 12;
    float Percentual_3 = 10;
    float Percentual_4 = 7;
    float Percentual_5 = 4;

    cout << fixed << setprecision(2);

    if (A >= 0 && A <= 400.00) {
        Reajuste = (Percentual_1 / 100) * A;
        cout << "Novo salario: " << (Reajuste + A) << endl;
        cout << "Reajuste ganho: " << Reajuste << endl;
        // Usar printf para o percentual sem casas decimais
        printf("Em percentual: %.0f %%\n", Percentual_1);
    } else if (A >= 400.01 && A <= 800.00) {
        Reajuste = (Percentual_2 / 100) * A;
        cout << "Novo salario: " << (Reajuste + A) << endl;
        cout << "Reajuste ganho: " << Reajuste << endl;
        printf("Em percentual: %.0f %%\n", Percentual_2);
    } else if (A >= 800.01 && A <= 1200.00) {
        Reajuste = (Percentual_3 / 100) * A;
        cout << "Novo salario: " << (Reajuste + A) << endl;
        cout << "Reajuste ganho: " << Reajuste << endl;
        printf("Em percentual: %.0f %%\n", Percentual_3);
    } else if (A >= 1200.01 && A <= 2000.00) {
        Reajuste = (Percentual_4 / 100) * A;
        cout << "Novo salario: " << (Reajuste + A) << endl;
        cout << "Reajuste ganho: " << Reajuste << endl;
        printf("Em percentual: %.0f %%\n", Percentual_4);
    } else if (A > 2000.00) {
        Reajuste = (Percentual_5 / 100) * A;
        cout << "Novo salario: " << (Reajuste + A) << endl;
        cout << "Reajuste ganho: " << Reajuste << endl;
        printf("Em percentual: %.0f %%\n", Percentual_5);
    } 
    
    return 0;

}

