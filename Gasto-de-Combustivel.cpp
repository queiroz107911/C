#include <iostream>
using namespace std;

int main () {

    int tempo, velocidade;
    cin >> tempo >> velocidade;

    double litros, distancia;
    distancia = tempo * velocidade;
    litros = distancia / 12;

    cout.precision(3);
    cout << fixed;
    cout << litros << endl;

    return 0;
}