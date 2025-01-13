#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int Raio; // Raio da pizza
    int L; // Altura da pizza
    int W; // Largura da pizza
    int pedido = 1;

    while(true) {
        cin >> Raio;
        if(Raio == 0) break; // Para quando Raio = 0
        cin >> W >> L;

        double Diagonal_Pizza = sqrt(L * L + W * W);
        double Diametro_Mesa = 2.0 * Raio;

        if(Diagonal_Pizza <= Diametro_Mesa) {
            cout << "Pizza" << pedido << " fits on the table." << endl;
        } else {
            cout << "Pizza" << pedido <<  " does not fit on the table." << endl;
        }
        pedido++;

    }
    return 0;
}

// resoolver usando ponteiros e alocação dinamica de memoria