/*AED20251_T1_241039251_<L02>_<Q02>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L02 - Q02
*/
#ifndef Q2_H
#define Q2_H

#include <iostream>
#include <string>

using namespace std;

// Deixei sem constructor para que o próprio c++ construa para mim, por ser um constructor "fácil"

// classe que servirá como "pai" para as classes subsequentes
class Animal {
    public:
        // Não é necessario criar um constructor e nem atributos em nenhuma das classes, pois o constructor gerado automaticamente já servirá para o funcionamento do programa
        // e não é necessário controlar algo na construção dos objetos. Os atributos não são necessários, pois não é pedido na questão e sua ausência não impede o funcionamento do programa
        virtual void emitirSom() {}  // Este método pode ser sobrescrito em classes derivadas por meio do virtual

};

// classe "filha" herdando informações da classe "pai", Animal
class Gato : public Animal {
    public:
        emitirSom() override {} // Método sobrescrito
};

// classe "filha" herdando informações da classe "pai", Animal
class Cachorro : public Animal {
    public:
        emitirSom() override {} // Método sobrescrito
};

class Instrumento {
    public:
        virtual void tocar() {}  // Este método pode ser sobrescrito em classes derivadas por meio do virtual

};

// classe "filha" herdando informações da classe "pai", Instrumento
class Guitarra : public Instrumento {
    public:
        void tocar() override {}  // Método sobrescrito

};

// classe "filha" herdando informações da classe "pai", Instrumento
class Piano : public Instrumento {
    public:
        void tocar() override {}  // Método sobrescrito

};

class Funcionario {
public:
    virtual void calcularSalario() {}

};

class Gerente : public Funcionario {
public:
    void calcularSalario() override {}

};

class Vendedor : public Funcionario {
public:
    void calcularSalario() override {}
};

class Livro {
    protected:
        string titulo;
        string autor;
        int numPaginas;

    public:
        Livro(string titulo, string autor, int numPaginas) {
            this->titulo = titulo;
            this->autor = autor;
            this->numPaginas = numPaginas;
        } // Constructor "Padrao"

        // Livro(string titulo, string autor, int numPaginas): titulo(titulo), autor(autor), numPaginas(numPaginas) {} 
        // Constructor com boas praticas que evita chamada dupla de construtores para tipos complexos
};


#endif













