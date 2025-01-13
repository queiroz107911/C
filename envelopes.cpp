#include <iostream>
#include <algorithm> // para a função sort
using namespace std;

int main() {
    int n;
    cin >> n;  // Lê o número de casos de teste

    while (n--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;  // Lê as dimensões dos dois envelopes

        // Ordena as dimensões de ambos os envelopes
        int envelope1[] = {a1, b1};
        int envelope2[] = {a2, b2};
        
        sort(envelope1, envelope1 + 2);  // Ordena as dimensões do primeiro envelope
        sort(envelope2, envelope2 + 2);  // Ordena as dimensões do segundo envelope

        // Verifica se o envelope 1 pode ser colocado dentro do envelope 2
        if (envelope1[0] < envelope2[0] && envelope1[1] < envelope2[1]) {
            cout << "S" << endl;  // Se for possível, imprime "S"
        } else {
            cout << "N" << endl;  // Se não for possível, imprime "N"
        }
    }

    return 0;
}
