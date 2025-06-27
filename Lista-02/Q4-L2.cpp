/*AED20251_T1_241039251_<L02>_<Q03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L02 - Q04
*/


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>  
#include <cmath>
using namespace std;


class FormaGeometrica {
    protected:
        int base;
        int altura;
    
    public:
        FormaGeometrica(int a, int b) {
            this->base = a;
            this->altura = b;
        }

        // metodo virtual puro, a classe não pode mais ser instanciada diretamente
        virtual double calcularArea() = 0;
};      

// Classe que herda de FormaGeometrica + constructor + metodo usando polimorfismo + abstração
class Retangulo : public FormaGeometrica {
public:
    Retangulo(int a, int b) : FormaGeometrica(a, b) {}

    double calcularArea() override {
        return base * altura;
    }

};


class Instrumento {
    public:
        virtual void tocar() = 0; // metodo virtual puro, a classe não pode mais ser instanciada diretamente

        void imprime() {}

};

class Violao : public Instrumento {
    public:
        void tocar() override {
            cout << "Tocaram uma músca com o violao" << endl;
        }
};

class Piano : public Instrumento {
     public:
        void tocar() override {
            cout << "Tocaram uma músca com o piano" << endl;
        }
};


int main() {
    FormaGeometrica* f = new Retangulo(); 
    // por FormaGeometrica ser uma classe abstrata nao se pode criar um objeto dela diretamente
    // mas pode utilizar um ponteiro e usar esse ponteiro para apontar para um objeto de uma classe derivada(retangulo)
    // o new aloca um objeto da classe retangulo na memoria e retorna esse endereço de memoria que é alocado em f
    // sendo assim, mesmo que f seja do tipo FormaGeometrica* ele aponta para um retangulo
    
    f->desenhar(); // Saída: Desenhando um círculo
    // a -> é usada para acessar membros de um objeto apontado por ponteiro
    // por f ser um ponteiro você usa f->desenhar() ao invés de f.desenhar()

    Instrumento c;
    c.tocar();
    // isso vai gerar erro, pois  classe abstrata não pode ser instanciada
    cout << "-------------------";
    // isso esta certo
    Instrumento* a = new Piano();
    a->tocar();

    return 0;

}