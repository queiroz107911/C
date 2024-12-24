#include <iostream>
using namespace std;

int main() {

    int i = 0;
    int senha = 123;
    int TextoUsuario;

    while (i <= 2){
        cout << "Insira a senha" << endl;
        cin >> TextoUsuario;
    if (TextoUsuario == senha){
        cout << "Bem vindo" << endl;
        break;
    } else {
        cout << "Senha invalida, tente novamente" << endl;  
    }  
    
    i = i + 1;

    }
    return 0;
}