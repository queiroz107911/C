/*
Nome: João Pedro Queiroz Aguiar
Matricula: 241039251
*/

#ifndef CONTAPFESPECIAL_H
#define CONTAPFESPECIAL_H

#include <iostream>
#include <string>
#include "contaPF.h"

using namespace std;


class ContaPFEspecial : public ContaPF {
    protected:
        int limite;

    public:
        ContaPFEspecial(string numero, string cpf, string titular, int saldo, int limite): ContaPF(numero, cpf, titular, saldo), limite(limite) {};
        ContaPFEspecial(string numero, int limite): ContaPF(numero, "00000", "nome do titular", 0), limite(limite) {};

        int getLimite();
        void setLimite(int limite);
        int depositar(int valor) {};
        bool gastar(int valor) {};
        string toString();


};

#endif
