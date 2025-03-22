/* bubbleSort( A : lista de itens ordenaveis ) 
 repita{ 
 trocado := false 
   repita de 0 ate tamanho( A ) - 2 { 
      verificar se os elementos estão na ordem certa 
     se A[ i ] > A[ i + 1 ] { 
        trocar elementos de lugar 
       trocar( A[ i ], A[ i + 1 ] ) 
       trocado := true 
     } 
    } 
      enquanto houver elementos sendo reordenados. 
 }enquanto trocado == true */


#include <iostream>
using namespace std;

// Função para ordenar os valores do vetor
void bubbleSort(int array[], int n) {
    bool trocado;
    do {
        trocado = false;
        for(int i = 0; i < n - 1; i++) {
            if(array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]); 
                trocado = true;
            }
        }
    } while(trocado);
}


int main() {
    
    int array[10];
    int tamanho = 0;

    // Lê os números digitados e armazena dentro do vetor
    for(int i = 0; i < 10; i++) {
        int numeros;
        cin >> numeros;
        if(numeros < 0) 
        break; 
        array[tamanho++] = numeros;
    }

    
    bubbleSort(array, tamanho);

    // Imprime os vetores ordenados
    for(int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    } 
    cout << endl;
 
    return 0;
}