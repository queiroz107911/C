#include <iostream>
#include <cmath>
using namespace std;

int main() {

    
    int Largura, Altura, Profundidade, Raio_Esfera;
    cin >> Largura >> Altura >> Profundidade >> Raio_Esfera;

    int Diametro_Esfera = 2 * Raio_Esfera;
    int Diagonal_Caixa = sqrt(Largura * Largura + Altura * Altura + Profundidade * Profundidade);

    if(Diagonal_Caixa <= Diametro_Esfera) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;

}