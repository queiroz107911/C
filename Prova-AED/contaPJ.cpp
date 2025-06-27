#include <iostream>
#include <string>
#include "conta.h"
#include "contaPJ.h"


string ContaPJ::toString() {
    return "CNPJ: " + this->cnpj + "Razao Social: " + this->razaoSocial + "Saldo: " + to_string(saldo);
}

