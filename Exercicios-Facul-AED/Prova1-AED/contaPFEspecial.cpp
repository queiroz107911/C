/*
Nome: João Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include "contaPFEspecial.h"

using namespace std;

int ContaPFEspecial::getLimite() {
    return limite;
}

void ContaPFEspecial::setLimite(int limite) {
    this->limite = limite;
}

string ContaPFEspecial::toString() {
    return "Numero: " + this->numero + "\n" + "CPF: " + this->cpf + "\n" + "Titular: " + this->titular + "\n" + "Saldo: " + to_string(this->saldo) + "\n" + "Limite: " + to_string(this->limite);
}

int ContaPFEspecial::depositar(int valor) {
    valor += saldo;
    return saldo;
};

bool ContaPFEspecial::gastar(int valor) {
    if(valor <= saldo) {
        saldo -= valor;
        return true;
    } else {
        return false;
    }
};




