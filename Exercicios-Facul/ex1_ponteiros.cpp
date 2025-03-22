#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 90, b = 2, c = 3;
    int *ptr = &a; // declara um ponteiro para um inteiro // um ponteorp para uma variavel do tipo int
    printf("Valor de ptr: %p, Conteudo de ptr: %d\n", ptr, *ptr);
    printf("B: %d, C: %d", b, c);
    
    return 0;
}