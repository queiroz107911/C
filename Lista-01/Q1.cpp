/*AED20251_T2_241039251_<L01>_<Q01>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L01 - Q01
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Classe com um atributo TAG + um metodo
class Formula{
    // Atributos + Constructor da classe
    public:
        string tag;
        Formula(string t){
            this->tag = t;
        };
};

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
        void imprime(Pessoa){
            cout << this->identificacao << endl;
            cout << this->nome << endl;
            cout << this->idade << endl;
            cout << "\n";
        };
};

// Classe divisão com dois atributos + constructor + metodos
class Divisao {
    
    public:
        int numero1, numero2;
        Divisao(int a, int b) {
            this->numero1 = a;
            this->numero2 = b;
        };
        
        // Metodo para imprimir os números
        void imprimeValores() {
            cout << "Numero 1: " << numero1 << " | Numero 2: " << numero2 << endl;
        };

        // Metodo para realizar a divisão
        void dividir() {
            if (numero2 == 0) {
                cout << "Houve uma divisão por zero" << endl;
            } else {
                int resultado = numero1 / numero2; 
                cout << "Resultado da Divisão: " << resultado << endl;
            };
            
        };

};

// Classe Produto com dois atributos + constructor + um método 
class Produto {
    // Atributos
    public:
    string nome;
    double preco;

    public:
        // Constructor da classe
        Produto(string a, double b) {
        this->nome = a;
        this->preco = b;
    };
        // Metodo para comparar os valores dos produtos 
        int compara(Produto p) {
        if (this->preco > p.preco) {
            return 1;
        } else if (this->preco == p.preco) {
            return 0;
        } else {
            return -1;
        }
    };
};

// Classe aluno com quatro atributos + Constructor + Metodos
class Aluno {
    public:
        string identificacao;
        string nome;
        string tipo = "Aluno UnB";  // Valor fixo "Aluno UnB"
        double notaFinal;
        vector<double> nota; // Vetor com duas notas

        Aluno(string a, string b, double d) {
            this->identificacao = a;
            this->nome = b;
            this->notaFinal = d;
        };

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

int main() {
    // Objetos instanciados + cout da classe Formula
    Formula f1("Formula de Bhaskara");
    Formula f2("Formula de Pitagoras");
    cout << "F1.tag: " << f1.tag << endl;
    cout << "F2.tag: " << f2.tag << endl;

    cout << "-----------------------" << endl;

    // Objetos instanciados + metodos da classe Pessoa
    Pessoa P1("12345", "Joao", 19);
    Pessoa P2("23456", "Pedro", 17);
    Pessoa P3("34567", "Yan", 20);
    P1.imprime(P1);
    P2.imprime(P2);
    P3.imprime(P3);

    cout << "-----------------------" << endl;

    // Objetos instanciados + chamada dos metodos da classe Divisao
    Divisao d1(10, 2);
    d1.imprimeValores();
    d1.dividir();
    cout << "\n" << endl;
    Divisao d2(10, 0);
    d2.imprimeValores();
    d2.dividir();

    cout << "-----------------------" << endl;
    
    // Objetos instanciados + chamada do método + cout dos valores das classe Produto
    Produto p1("Teclado", 400);
    Produto p2("Mouse", 350 );
    Produto p3("Headset", 200);
    int resultado1 = p1.compara(p2);
    int resultado2 = p1.compara(p3);  
    int resultado3 = p2.compara(p1);

    cout << "Comparação 1: " << resultado1 << endl;
    cout << "Comparação 2: " << resultado2 << endl;
    cout << "Comparação 3: " << resultado3 << endl;
       
    cout << "-----------------------" << endl;
    // Objetos instaciados + chamada dos metodos da classe Aluno
    Aluno a1("12345", "Joao", 0.0);
    a1.mencao();
    a1.imprime();
    a1.nota.push_back(8.5);
    a1.nota.push_back(9.0);

    Aluno a2("23456", "Pedro", 6.1);
    a2.mencao();
    a2.imprime();
    a2.nota.push_back(5.0);
    a2.nota.push_back(7.0);
    
    Aluno a3("34567", "Gabriel", 7.2);
    a3.mencao();
    a3.imprime();
    a3.nota.push_back(2.0);
    a3.nota.push_back(5.5);
    
    Aluno a4("45678", "Yan", 10);
    a4.mencao();
    a4.imprime();
    a4.nota.push_back(3.0);
    a4.nota.push_back(3.0);

    cout << "-----------------------" << endl;
    
    return 0;
}


