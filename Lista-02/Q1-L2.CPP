/*AED20251_T1_241039251_<L02>_<Q01>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L02 - Q01
*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// Classe com três atributos + constructor + metodo
class Pessoa {
    public:
        string identificacao;
        string nome;
        int idade;

        Pessoa(string a, string b, int c) {
            this->identificacao = a;
            this->nome = b;
            this->idade = c;
        };
        // Metodo para imprimir as informações
        void imprime(){
            cout << this->identificacao << endl;
            cout << this->nome << endl;
            cout << this->idade << endl;
            cout << "\n";
        };
};


// Classe aluno com quatro atributos + Constructor + Metodos
class Aluno : public Pessoa {  // classe Aluno que está herdando a parte publica da classe Pessoa
    protected:
        string tipo = "Aluno UnB";  // Valor fixo "Aluno UnB"
        double notaFinal;
        vector<double> nota; // Vetor com duas notas
    
    public:  
        Aluno(string a, string b, int c, string d, double e, vector<double> f) : Pessoa(a, b, c) {
        tipo = d;
        notaFinal = e;
        nota = f;
    }; // constructor inicializando os atributos herdados

        // Metodo que calcula a media das notas do vetor
        void calcularNotaFinal() {
        if (nota.size() == 2) {
            notaFinal = (nota[0] + nota[1]) / 2.0;
        } else {
            notaFinal = 0; // Valor padrao se nao tiver 2 notas
        }
    }
        // Metodo para exibir a mencao(de acordo com o sistema da UnB) de cada aluno
        string mencao() {
            if(this->notaFinal == 0) {
                return "SR";
            } else if (this->notaFinal > 0 && this->notaFinal < 5) {
                return "MI";
            } else if (this->notaFinal >= 5 && this->notaFinal <= 6.9) {
                return "MM";
            } else if (this->notaFinal >= 7 && this->notaFinal < 8.9) {
                return "MS";
            } else if (this->notaFinal >= 9 && this->notaFinal <= 10) {
                return "SS";
            } else {
                return "Nota Invalida";
            }
    }
        // Metodo para exibir cada dado do aluno e para exibir outro metodo para calculo da nota final 
        void imprime() {
            calcularNotaFinal();
            cout << "Identificação: " << this->identificacao << endl;
            cout << "Nome: " << this->nome << endl;
            cout << "Tipo: " << this->tipo << endl;
            cout << "Nota final: " << mencao() << endl;
            cout << "----------------------------------" << endl;
        
    };

};

// Classe que vai servir de "classe Pai" para outras + constructor + metodo que sera sobrescrito nas classes herdadas
class FormaGeometrica {
    protected:
        int base;
        int altura;
    
    public:
        FormaGeometrica(int a, int b) {
            this->base = a;
            this->altura = b;
        }

        // metodo utilizando o virtual para poder permitirsobrescrito pelas subclasses
        virtual double calcularArea() {
            return base * altura;
        }
};          

// Classe que herda de FormaGeometrica + constructor + metodo usando polimorfismo 
class Retangulo : public FormaGeometrica {
    public:
        Retangulo(int a, int b) : FormaGeometrica(a, b) {}
    
    // metodo para calcular a area do retangulo sobrescrito da classe FormaGeometrica
    double calcularArea() override {
        return base * altura;
    }

};

// Classe que herda de FormaGeometrica + constructor + metodo usando polimorfismo 
class Circulo : public FormaGeometrica {
    public:
        Circulo(int diametro) : FormaGeometrica(diametro, diametro) {}
    
    // metodo para calcular primeiro o raio a partir do diametro e depois calcula a area e sobrescrito da classe FormaGeometrica
    double calcularArea() override {
        double raio = (base / 2.0); // base = diametro e diametro / 2 = raio
        return M_PI * raio * raio; // M_PI é o valor de pi e precisa da biblioteca cmath
    }
};

// Classe que herda de FormaGeometrica + constructor + metodo usando polimorfismo 
class Quadrado : public FormaGeometrica {
    public:
        Quadrado(int lado) : FormaGeometrica(lado, lado) {}
        
        // metodo para calcular a area do quadrado e sobrescrito da classe FormaGeometrica
        double calcularArea() override {
            return base * altura;
        }
};

// Classe que vai servir de "classe Pai" para Funcionario + constructor + metodos
class Funcionario {
    protected:
        string nome;
        double salario;

    public:
        Funcionario(string a, double b) {
            this->nome = a;
            this->salario = b;
        }
        
        // metodo para imprimir as informações do funcionario
        void imprime() {
            cout << "Nome: " << this->nome << endl;
            cout << "Salario: " << this->salario << endl;
        }
};

// classe que herda de Funcionario + constructor + metodos
class Gerente : public Funcionario {
    protected:
        double bonus;

    public:
        Gerente(string a, double b, double c) : Funcionario(a, b) {
            bonus = c;
        }

        // metodo que calcula o bonus do funcionario com base no seu salario
        double calcularBonus() {    
            if (salario >= 5000 ) {
                return salario * 0.25;
            } else if (salario >= 2000 && salario <= 3500) {
                return salario * 0.10;
            } else {
                return 0.0;
            }
        }

        // metodo para imprimir o bonus que utiliza de :: para poder executar o metodo que esta dentro da classe Funcionario
        void imprime() {
            Funcionario::imprime();
            cout << "Bonus: " << calcularBonus() << endl;
        }
};

int main() {

    // instanciando objetos das classes Pessoa e Aluno em que Aluno herda de pessoa + metodos
    Pessoa p1("12345", "Joao", 19);
    p1.imprime();
    cout << "\n";
    
    vector<double> notas = {7.5, 8.0};
    Aluno a1("12345", "Joao", 19, "Aluno UnB", 0.0, notas);
    a1.mencao();
    a1.imprime();

    cout << "-----------------------" << endl;

    // instanciando objetos das classes Retangulo/Quadrado/Circulo que herdam de FormaGeometrica
    Retangulo r1(5, 10);
    Quadrado q1(4);
    Circulo c1(10);

    // utilizando cout + os métodos
    cout << "Area do Retangulo: " << r1.calcularArea() << endl;
    cout << "Area do Quadrado: " << q1.calcularArea() << endl;
    cout << "Area do Circulo: " << c1.calcularArea() << endl;

    cout << "-----------------------" << endl;
    
    // instanciando objetos das classes Funcionario e Gerente em que Gerente herda de Funcionario + metodos
    Funcionario f1("João", 4500);
    f1.imprime();
    cout << "\n";

    Gerente g1("Yan", 3000, 0.0);
    g1.imprime();

    return 0;
}