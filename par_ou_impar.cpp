#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;
    int teste = 1;
    
    while(true) {

        cin >> N;
        if(N == 0) break;
        string nome1, nome2;
        cin >> nome1 >> nome2;

        
        
        for(int i = 0; i < N; i++) {
            int A, B;
            cin >> A >> B;

            
        }
        int A, B;
        int soma = A + B;
        int ganhador1, ganhador2;
            
            if(soma % 2 == 0) {
                cout << "Teste " << teste++ << endl;
                cout << nome1 << endl;
            } else {
                cout << "Teste " << teste++ << endl;
                cout << nome2 << endl;
            }

         
    }
    
       
    return 0;  
}