#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>

using namespace std;

class Conta {
    protected:
        string numero;
        int saldo = 0;

    public:       
        Conta(string a, int b) {
            this->numero = a;
            this->saldo = b;
        };

        Conta(string numero) {
            this->numero = numero;
            this->saldo = 0;
}


        string getNumero() {return this->numero; }
        void setNumero(string numero) { this->numero = numero; }
        int getSaldo() {return this->saldo; }
        void setSaldo(int saldo) {this->saldo = saldo; } 

        int deposito(int valor) {}
        bool gastar(int valor) {}
        string toString();
};













#endif