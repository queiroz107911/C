/*
Nome: João Pedro Queiroz Aguiar
Matricula: 241039251
*/

#ifndef CONTAPJESPECIAL_H
#define CONTAPJESPECIAL_H

#include <iostream>
#include <string>
#include "contaPJ.h"

using namespace std;

class ContaPJEspecial : public ContaPJ {
    protected:
        string cnpj;
        string razaoSocial;
        int limite;

    public:
        ContaPJEspecial(string numero, string cnpj, string razaoSocial, int saldo): ContaPJ(numero, cnpj, razaoSocial, saldo) {}
        ContaPJEspecial(string numero, int limite): ContaPJ(numero, "00000", "cnpj", 0), limite(limite) {}

        int getLimite();
        void setLimite(int limite);
        int depositar(int valor) {};
        bool gastar(int valor) {};
        string toString();

};


#endif