#include <iostream>
#include <string>
#include "conta.h"
#include "contaPF.h"


using namespace std;

string ContaPF::toString() {
    return "CPF: " + this->cpf + "\n" + "Titular: " + this->titular + "\n" + "Saldo: " + to_string(this->saldo);
}


