/*
Nome: João Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include "conta.h"
#include "contaPF.h"
#include "contaPJ.h"
#include "ContaPFEspecial.h"
#include "ContaPJEspecial.h"

using namespace std;

int main() {
    cout << "ContaPFEspecial com saldo inicial- " << endl;
    ContaPFEspecial pf1("001", "12321312130", "Maria", 500, 200);
    cout << pf1.toString() << endl;
    
    cout << "-------------" << endl;

    cout << "ContaPJEspecial com saldo inicial- " << endl;

    


    return 0;
}






