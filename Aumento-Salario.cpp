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

    // Definir precisão padrão para o cout (novo salário e reajuste com 2 casas decimais)
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

