/* Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:
Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem
Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal*/

#include <iostream>
using namespace std;

int main() {

    // A e B são a base do trapézio e C a altura
    float A, B, C; 
    cin >> A >> B >> C;

    float Perimetro = A + B + C;
    float Area = (A + B) * C / 2;

    cout.precision(1);
    cout << fixed;
    
    // Verificar a condição de existência do Triângulo
    if(A + B > C && A + C > B && B + C > A ) {
        cout << "Perimetro = " << Perimetro << endl;
    } else {
        cout << "Area = " << Area << endl;
        
    }

    return 0;

   


}