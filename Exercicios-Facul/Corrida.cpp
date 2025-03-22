/* Escreva um programa que, dados as distâncias até a linha de chegada, as velocidades e os números das duas charretes que lideram a corrida
determina quem seria o vencedor da corrida (você pode supor que as charretes não cruzam a linha de chegada simultaneamente).

Entrada
A entrada consiste de duas linhas; cada linha descreve uma das charretes que lidera a corrida. 
A descrição de uma charrete consiste de três inteiros N (1 ≤ N ≤ 99), D (0 < D ≤ 1000) e V (0 < V ≤ 50) indicando, respectivamente
o número da charrete, a sua distância à linha de chegada em metros, e a sua velocidade, em quilômetros por hora. 
Os números das duas charretes são distintos.

Saída
Imprima uma única linha, contendo um único número inteiro, indicando o número da charrete que seria vencedora, conforme descrito acima*/

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