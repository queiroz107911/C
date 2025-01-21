#include <iostream>
using namespace std;

// Declaração do tipo de registro
struct ficha { 
    int matricula;
    float media;};



int main() {
    // Declaração do nome do registro
    ficha fichapessoa;
    // Declaração para acessar um membro do registro, se usa o .
    cin >> fichapessoa.media; 

    return 0;
    
}