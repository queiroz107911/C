#include <iostream>
using namespace std;

int main() {

    int *ptr_a;
    ptr_a = malloc(sizeof(int));
    // cria a area necessaria para 1 inteiro e coloca em ptr_a o endereço dessa area

    if (ptr_a == NULL){
    printf("Memoria insuficiente!\n");
    exit(1);
    }  

    free(ptr_a); // libera a area alocada

    return 0;
}