#include <iostream>
using namespace std;

int main() {

    // distancia velocidade numeros das duas charretes
    int Numero1, Distancia1, Velocidade1;
    int Numero2, Distancia2, Velocidade2;
    cin >> Numero1 >> Distancia1 >> Velocidade1;
    cin >> Numero2 >> Distancia2 >> Velocidade2;

    double Velocidade1_metros = (Velocidade1 / 3.6);
    double Velocidade2_metros = (Velocidade2 / 3.6);

    double Tempo_carreta1 = Distancia1 / Velocidade1_metros;
    double Tempo_carreta2 = Distancia2 / Velocidade2_metros;

    if(Tempo_carreta1 < Tempo_carreta2) {
        cout << Numero1 << endl;
    } else {
        cout << Numero2 << endl;
    }


    return 0;

}