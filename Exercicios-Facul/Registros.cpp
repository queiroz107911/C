#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Data{
    int Mes;
    int Ano;
    int Dia;
};

struct Pessoa{
    string nome;
    float altura;
    Data Data_de_nascimento;
};

void CriarData(Data &D) {
    D.Mes = 1 + (rand()% 12);
    D.Ano = 1950 + (rand()% 49);
    D.Dia = 1 + (rand()% 30);
}

void LerPessoas(string nome, float altura, Data Data_de_nascimento) {
     



}


int main() {
    Pessoa pessoa1[10];
    Data Data1;
   

    return 0;

}