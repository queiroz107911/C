#include <iostream>
using namespace std;

int main() {
    int num;

    // Continua lendo até atingir o fim da entrada
    while (cin >> num) {
        cout << "Você digitou: " << num << endl;
    }
    
    cout << "Fim de arquivo atingido." << endl;
    return 0;
}
