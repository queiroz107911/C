#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

string Conta::toString() {
    return "Conta: " + numero + " | Saldo: " + to_string(saldo);
}

int Conta::deposito(int valor) {
    saldo += valor;
    return saldo;
}
        
bool Conta::gastar(int valor) {
    if(valor <= saldo) {
        saldo -= valor;
        return true;
    } else {
        return false;
    }
}



