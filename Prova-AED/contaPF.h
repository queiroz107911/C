/*
Nome: João Pedro Queiroz Aguiar
Matricula: 241039251
*/

#ifndef CONTAPF_H
#define CONTAPF_H

#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

class ContaPF : public Conta {
    protected:
        string cpf;
        string titular;
        
    public:
        ContaPF(string numero, string cpf, string titular, int saldo): Conta(numero, saldo) {
            this->cpf = cpf;
            this->titular = titular; 
            this->saldo = 0;
        }

        string getCPF() {return this->cpf; }
        void setCPF(string cpf) { this->cpf = cpf; }
        string getTitular() {return this->titular; }
        void setTitular(string titular) {this->titular =titular; } 
        
        string toString();

};


#endif