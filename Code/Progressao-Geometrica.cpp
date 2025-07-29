#include <iostream>
using namespace std;

int main() {
    size_t size = 10;  
    double numbers[size] {10};
    numbers[0] = 1;
    
    for (size_t i = 1; i < size; i++) {
        numbers[i] = numbers[i-1] * 1.1;
}
    for (size_t i = 0; i < size; i++) {
        cout << numbers[i] << "\n";
}

    return 0;
}

/* 

size_t --> Tipo de dado;
{n} --> Denota que a posição 0 do vetor é n e o restante 0;
numbers[0] = 1 --> Evita que a primeira posição seja 0,
caso não tivesse {10}, definindo o valor inicial;
numbers[i-1] --> Acessa a posição e não o valor do vetor, 
se i=2 -> numbers[2-1] = numbers[1] = posição 1.

*/