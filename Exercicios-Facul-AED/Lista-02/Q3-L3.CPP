/*AED20251_T1_241039251_<L02>_<Q03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
L02 - Q03
*/


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>  
#include <cmath>
using namespace std;


// Sobrescrita/Sobreposição(Override) -> 
// Permite a existência de vários métodos de mesmo nome, porém com assinaturas levemente diferentes(número, tipo e qtd de parâmetros). 
// Mesmo nome, mesma assinatura, muda o comportamento em classes diferentes com herança. 
// Quando uma classe filha muda o comportamento de um método da classe pai. 
// O primeiro método deve conter virtual na sua declaração e nas classes derivadas se utiliza o override
// A decisao de qual função sera chamada depende do tipo real do objeto em tempo de execução, e não do tipo do ponteiro. 
// Está relacionado ao aspecto dinâmicoo (em tempo de execução) do programa, utilizando o mecanismo de polimorfismo.

// Sobrecarga(Overload) -> 
// Permite a existência de vários métodos com assinaturas idênticas, porém com implementações distintas. 
// Mesmo nome, mas parâmetros diferentes na mesma classe. 
// Quando você tem vários métodos com o mesmo nome, mas com parâmetros diferentes, reaproveitar nomes com comportamentos diferentes.
// O compilador escolhe qual versão da função chamar com base nos parametros -> aspecto estático (em tempo de compilação)


// Utilizarei de boas práticas nesse código que descobri e aprendi pesquisando como o CONST, Lista de inicialização, constructor vazio e & como referência 


// classe Complexo + atributos + constructor + sobrecargas
class Complexo {
    public:
        double real, imagem;

        Complexo(double r = 0, double i = 0) : real(r), imagem(i) {} // construtor com lista de inicialização, que diz: "Pegue o valor r e atribua à variável real"
    
        Complexo operator+(const Complexo& c) const {   // sobrecargas de operadores, permite que use +, -, * diretamente com objetos
            return Complexo(real + c.real, imagem + c.imagem);
        }

        Complexo operator-(const Complexo& c) const {  
            return Complexo(real - c.real, imagem - c.imagem);
        }

        Complexo operator*(const Complexo& c) const {
            double r = real * c.real - imagem * c.imagem;
            double i = real * c.imagem + imagem * c.real;
            return Complexo(r, i);
        }

        void imprime() const {
            cout << real << (imagem >= 0 ? " + " : " - ") << abs(imagem) << "i" << endl;
        }
};


class Matriz2x2 {
    public:
        double m[2][2];

        Matriz2x2(double a11, double a12, double a21, double a22) {    // escrevendo a matriz 2x2
            m[0][0] = a11; m[0][1] = a12;
            m[1][0] = a21; m[1][1] = a22;
        }

        Matriz2x2 operator*(const Matriz2x2& numero) const {     // multiplicação de matrizes 2x2
            return Matriz2x2(
                m[0][0]*numero.m[0][0] + m[0][1]*numero.m[1][0],
                m[0][0]*numero.m[0][1] + m[0][1]*numero.m[1][1],
                m[1][0]*numero.m[0][0] + m[1][1]*numero.m[1][0],
                m[1][0]*numero.m[0][1] + m[1][1]*numero.m[1][1]
            );
        }

        void imprime() const {
            cout << "[" << m[0][0] << " " << m[0][1] << "]" << endl;
            cout << "[" << m[1][0] << " " << m[1][1] << "]" << endl;
        }
};



class Circulo {
    public:
        double raio;
        // Construtor com raio
        Circulo(double r) : raio(r) {}

        // Construtor com diâmetro
        Circulo(double diametro, bool usar_diametro) { // uso de bool como um "sinalizador" para indicar se o numero passado é diamentro ou raio
            if (usar_diametro)
                raio = diametro / 2.0;  
            else
                raio = diametro;        
}

        double area() const {
            return 3.14159 * raio * raio;
        }

        void imprime() const {
            cout << "Raio: " << raio << ", Area: " << area() << endl;
        }
};

// main para testar cada classe 
int main() {
    cout << "Complexos" << endl;
    Complexo c1(3, 2), c2(1, -4);
    Complexo c3 = c1 + c2;
    c3.imprime();

    Complexo c4 = c1 * c2;
    c4.imprime();

    cout << "-------------------" << endl;

    cout << "Matrizes 2x2" << endl;
    Matriz2x2 m1(1, 2, 3, 4), m2(5, 6, 7, 8);
    Matriz2x2 m3 = m1 * m2;
    m3.imprime();

    cout << "-------------------" << endl;

    cout << "Círculo" << endl;
    Circulo circuloC1(5.0);           // raio
    circuloC1.imprime();
    Circulo circuloC2(4.0, true);    // diametro
    circuloC2.imprime();

    return 0;
}