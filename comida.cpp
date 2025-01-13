#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        double Comida_Disponivel;
        cin >> Comida_Disponivel;
        
        int dias = 0;
        while(Comida_Disponivel > 1.0) {
            Comida_Disponivel /= 2;
            dias++;
            
        }
        
        cout << dias << " dias" << endl;
    }


    return 0;
}