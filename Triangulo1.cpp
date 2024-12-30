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