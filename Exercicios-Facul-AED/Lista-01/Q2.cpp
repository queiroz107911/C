/*AED20251_T2_241039251_<L01>_<Q01>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L01 - Q02 
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>
using namespace std;

// classe carro + constructor + metodos
class Carro {
    public:
        string marca;
        string modelo;
        int ano;
        int velocidade = 0;

    Carro(string a, string b, int c) {
        this->marca = a;
        this->modelo = b;
        this->ano = c;
    }
    // Metodo para exibir os atributos
    void exibirAtributos() {
        cout << "Marca: " << this->marca << endl;
        cout << "Modelo: " << this->modelo << endl;
        cout << "Ano: " << this->ano << endl;
        cout << "Velocidade: " << velocidade << endl;
    }
    // Metodo para acelerar
    int acelerar(int valor) {
        velocidade += valor; // Somando o parâmetro valor a velocidade atual
        if (velocidade < 0) { // Verificaçao e correçao da velocidade
        velocidade = 0;
        }
        cout << "Velocidade: " << velocidade << " Km/h" << endl;

        return velocidade;
    }

    // Metodo para freiar
    void freiar() {
        cout << "O carro freiou" << endl;

    }
};

// classe + atributos + constructor + metodos
class Retangulo {
    public: 
    int base;
    int altura;

    Retangulo(int a, int b) {
        this->base = a;
        this->altura = b;
    }
    
    // metodo para calcular a area do retangulo
    int calcularArea() {
        return base * altura;
    }

};

// classe + atributos + constructor + metodos
class Circulo {
    public:
    int base;
    int altura;

    Circulo(int diametro) {
        base = altura = diametro;
    }
    
    // metodo para calcular primeiro o raio a partir do diametro e depois calcula a area
    double calcularArea() {
        double raio = (base / 2.0); // base = diametro e diametro / 2 = raio
        return M_PI * raio * raio; // M_PI é o valor de pi e precisa da biblioteca cmath
    }
};

int main() {
    // Criando um vetor da classe Carro
    vector<Carro> carros;

    // Objetos dentro do vetor instanciados
    carros.push_back(Carro("Toyota", "Supra MK4", 1993));
    carros.push_back(Carro("BMW", "E36", 1999));
    carros.push_back(Carro("Chevrolet", "Vectra GSI", 2000));
    carros.push_back(Carro("Hyundai", "Azera", 2016));

    // for para exibir o conteudo do vetor usando o metodo da classe
    for (int i = 0; i < carros.size(); i++) {
        carros[i].exibirAtributos();
        cout << "----------------------" << endl;
    }
    // Objetos dentro de cada posição do vetor instanciados com a chamada dos metodos
    carros[0].acelerar(40);
    carros[0].freiar();
    cout << "\n";
    carros[1].acelerar(64);
    carros[1].freiar();
    cout << "\n";
    carros[2].acelerar(32);
    carros[2].freiar();
    cout << "\n";
    carros[3].acelerar(120);
    carros[3].freiar();
    cout << "\n";

    for (int i = 0; i < carros.size(); i++) {
        carros[i].exibirAtributos();
        cout << "----------------------" << endl;
    };
    
    cout << "-----------------------";

    Retangulo r1(7, 2);
    r1.calcularArea();

    Circulo c1(10);
    c1.calcularArea;

    cout << "Área do Retângulo: " << r1.calcularArea() << endl;
    cout << "Área do Círculo: " << c1.calcularArea() << endl;
    
    return 0;
}

// OBS - Não consegui realizar o ultimo ponto da Q2























