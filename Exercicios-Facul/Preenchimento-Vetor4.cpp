/* Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. 
Só que o tamanho de cada um dos dois vetores é de 5 posições. 
Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. 
Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
Cada vetor pode ser preenchido tantas vezes quantas for necessário.

Entrada
A entrada contém 15 números inteiros.

Saída
Imprima a saída conforme o exemplo abaixo.*/

#include <iostream>
using namespace std;

int main() {

    int Vetor_Par[5];
    int Vetor_Impar[5];
    int i = 0;
    int a = 0; // indices para os vetores
    int b = 0;
    int numero;

    while(i < 15) {
        cin >> numero;
    
    if(numero % 2 == 0) {
        Vetor_Par[a] = numero;
        a++;  // incrementa o indice do vetor

        if(a == 5) {
            for(int x = 0; x < 5; x++) {
                cout << "par[" << x << "] = " << Vetor_Par[x] << endl;
            }
            a = 0;
        }
    } 
    // se for impar  
    else {
        Vetor_Impar[b] = numero; // armazena no vetor
        b++;

        // se o vetor atingir 5 elementos, imprime e reinicia
        if(b == 5) {
            for(int x = 0; x < 5; x++) {
                cout << "impar[" << x << "] = " << Vetor_Impar[x] << endl;
            }
            b = 0; // reinicia o indice do vetor
        }
    }
    i++; // incrementa o indice para ler o proximo numero
}

// imprime os valores restantes, se houver, apos a ler os 15 números
    for(int x = 0; x < b; x++) {
        cout << "impar[" << x << "] = " << Vetor_Impar[x] << endl;
    }
    for(int x = 0; x < a; x++) {
        cout << "par[" << x << "] = " << Vetor_Par[x] << endl;
    }

    return 0;
}