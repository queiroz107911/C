/*AED20251_T1_241039251_<L02>_<Q02>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L02 - Q02
*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Q2.h"

using namespace std;

// Animal / Gato / Cachorro

void Animal::emitirSom() {
    cout << "O animal fez barulho" << endl;
}

void Gato::emitirSom() {
    cout << "Miau" << endl;
}

void Cachorro::emitirSom() {
    cout << "Au Au" << endl;
}

// Instrumento / Guitarra / Piano

void Instrumento::tocar() {
    cout << "O instrumento foi tocado" << endl;
}

void Guitarra::tocar() {
    cout << "Tocaram uma música com Guitarra" << endl;
}

void Piano::tocar() {
    cout << "Tocaram uma música com o Piano" << endl;
}

// Funcionario / Gerente / Veendedor

void Funcionario::calcularSalario() {
    cout << "Salario base" << endl;
}

void Gerente::calcularSalario() {
    cout << "Salario do gerente calculado" << endl;
}

void Vendedor::calcularSalario() {
    cout << "Salario do vendedor calculado." << endl;
}

// Livro

Livro::Livro(string titulo, string autor, int numPaginas) {
    this->titulo = titulo;
    this->autor = autor;
    this->numPaginas = numPaginas;
} // Colocar constructor no .cpp para manter o código limpo, evitar erros de duplicação e tornar a compilação mais eficiente(boas praticas)

