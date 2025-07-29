/*
Nome: João Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include "contaPJ.h"
#include "contaPJEspecial.h"

using namespace std;

int ContaPJEspecial::getLimite() {
    return limite;
}

void ContaPJEspecial::setLimite(int limite) {
    this->limite = limite;
}

string ContaPJEspecial::toString() {
    return "Numero: " + this->numero + "\n" + "CNPJ: " + this->cnpj + "\n" + "Razao Social: " + this->razaoSocial + "\n" + "Saldo: " + to_string(this->saldo) + "\n" + "Limite: " + to_string(this->limite);
}

int ContaPJEspecial::depositar(int valor) {
    saldo += valor;
    return saldo;
}

bool ContaPJEspecial::gastar(int valor) {
    if(valor <= saldo) {
        saldo -= valor;
        return true;
    } else {
        return false;
    }
};






