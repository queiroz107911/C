#include <iostream>
#include <string>
using namespace std;

int main() {

    string minhaString ("meu conteudo");

    for (int i; i < minhaString.size(); i++) {
        cout << minhaString.at(i) << '\n';
        
        }

    return 0;   
}