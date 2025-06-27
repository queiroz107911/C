/*AED20251_T2_241039251_<L01>_<Q01>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L01 - Q03 
*/

#include <iostream>
#include <string>
using namespace std;

// classe com atributos privados e publicos + constructor + metodos
class Pessoa {
    private:
        string identificação;
        string nome;
        int idade;
    
    public:
        Pessoa(string a, string b, int c) {
            this->identificacao = a;
            this->nome = b;
            this->idade = c;
        };

        void setIdentificacao(string id) { identificacao = id; }
        void setNome(string n) { nome = n; }
        void setIdade(int i) { idade = i; }

        string getIdentificacao() { return identificacao; }
        string getNome() { return nome; }
        int getIdade() { return idade; }

        // Metodo para imprimir as informações
        void imprime(Pessoa){
            cout << this->identificacao << endl;
            cout << this->nome << endl;
            cout << this->idade << endl;
            cout << "\n";
        };

};

// classe com atributos privados e publicos + constructor + metodos
class Produto {
    private:
        string nome;
        double preco;

    public:
         // Constructor da classe
        Produto(string a, double b) {
        this->nome = a;
        this->preco = b;
    };

        void setNome(string n) { nome = n; }
        void setPreco(double p) { preco = p; }

        string getNome() { return nome; }
        double getPreco() { return preco; }

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
        // metodo para alterar o preco
        void alterarPreco(double novoPreco) {
            preco = novoPreco;
        }
        // metodo para imprimir o produto
        void imprime() {
            cout << "Produto: " << nome << ", Preço: R$ " << preco << endl;
        }

};

// classe com atributos privados e publicos + constructor + metodos
class Aluno {
    private:
        string identificacao;
        string nome;
        string tipo = "Aluno UnB";
        double notaFinal;
        vector<double> nota;

    public:
        Aluno(string a, string b, double d) {
                this->identificacao = a;
                this->nome = b;
                this->notaFinal = d;
        };

        void setIdentificacao(string id) { identificacao = id; }
        void setNome(string n) { nome = n; }
        void setNotaFinal(double nf) { notaFinal = nf; }
        void setNotas(vector<double> n) { nota = n; }

        string getIdentificacao() { return identificacao; }
        string getNome() { return nome; }
        string getTipo() { return tipo; }
        double getNotaFinal() { return notaFinal; }
        vector<double> getNotas() { return nota; }

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

    /// Metodo para exibir cada dado do aluno e para exibir outro metodo para calculo da nota final 
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
    // Objetos como ponteiros para instâncias da classe pessoa
    Pessoa* p1 = new Pessoa("123", "João", 19);
    p1->imprime();

    // Objetos como ponteiros para instâncias da classe produto
    Produto* prod1 = new Produto("macbook", 3500.00);
    Produto* prod2 = new Produto("iphone", 2500.00);
    prod1->imprime();
    prod2->imprime();

    // metodo comparar
    int comp = prod1->compara(prod2);
    cout << "Comparação (Notebook vs Celular): " << comp << endl;

    // metodo alterar preco
    cout << "Alterando preço do produto " << endl;
    prod1->alterarPreco(3000.00);
    prod1->imprime();

    // Objetos como ponteiros para instâncias da classe aluno
    Aluno* aluno1 = new Aluno("12345", "Carlos", 0);
    aluno1->setNotas({7.5, 8.5});
    aluno1->imprime();

    return 0;
}

// OBS - Pedi ajuda do chatgpt para tentar resolver a parte dos getter e setter, mas nao copiei literalmente






















