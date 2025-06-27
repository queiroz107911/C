#ifndef CONTAPJ_H
#define CONTAPJ_H

#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

class ContaPJ : public Conta {
    protected:
        string cnpj;
        string razaoSocial;

    public:
        ContaPJ(string numero, string cnpj, string razaoSocial, int saldo) : Conta(numero, 0) {
            this->cnpj = cnpj;
            this->razaoSocial = razaoSocial; 
            // this->saldo = 0;  // <- Isso não deve, porque está sobrescrevendo o saldo passado!
        }

        string getCNPJ() {return this->cnpj; }
        void setCNPJ(string cnpj) { this->cnpj = cnpj; }
        string getRazaoSocial() {return this->razaoSocial; }
        void setRazaoSocial(string razaoSocial) {this->razaoSocial = razaoSocial; }
        
        string toString();

};


#endif