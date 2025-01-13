#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N; 

    for (int i = 0; i < N; i++) {
        int F1, F2;
        cin >> F1 >> F2; // Quantidade de figurinhas de Ricardo e Vicente

        // Cálculo do MDC 
        while (F2 != 0) {
            int resto_divisão = F1 % F2;
            F1 = F2;
            F2 = resto_divisão;
        }

        cout << F1 << endl; 
    }

    return 0;
}


