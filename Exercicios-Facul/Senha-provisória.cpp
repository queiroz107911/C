/* 
Uma instituição de ensino lisboeta tem como prática para atribuição de senha de acesso ao portal acadêmico utilizar o RA (registro acadêmico) 
do aluno. Nesta instituição os RA's são strings de 20 caracteres iniciados sempre pelos caracteres "RA" e seguidos por 18 dígitos numéricos. 
por exemplo: RA000000000000012340. Estes identificadores são gerados automaticamente pelo sistema de matrículas e são formados por três partes principais: 
(a) iniciados pelos caracteres "RA", (b) seguidos por Z digitos zeros formatadores de posição (onde, 0 <= Z <= 17), e por fim, 
(c) o número identificador do aluno propriamente dito, considerando os X números mais a direita do RA não iniciados por zero (onde, 1 <= X <= 18).   
 

Entrada
A primeira linha de entrada é um valor inteiro N (onde, 1 <= N <= 1000) 
que representa a quantidade de RA's que deve ser considerada pelo programa. 
As N seguintes linhas representam, cada uma, strings, de no máximo 100 caracteres, que representam os RA's enviados pelo sistema de matrícula.
 

Saída
As saídas válidas para o programa são: 
a apresentação da senha provisória ou a indicação de "INVALID DATA". 
A senha provisória é formada pelos X caracteres númericos não iniciados em 0 mais a direita da string, por exemplo: 
para o identificador "RA000000000000012340" a senha provisória deve ser "12340". Caso a string recebida não esteja de acordo com as regras de formação, o programa deve indicar "INVALID DATA".*/

#include <iostream>
#include <string>
using namespace std;

bool isValidRA(const string& ra) {
    // Verificar se o RA começa com "RA" e tem comprimento de 20 caracteres
    if (ra.substr(0, 2) != "RA" || ra.length() != 20) {
        return false;
    }

    // Verificar se os 18 caracteres após "RA" são todos números
    for (int i = 2; i < 20; ++i) {
        if (!isdigit(ra[i])) {
            return false;
        }
    }

    return true;
}

string extractPassword(const string& ra) {
    // Encontrar a posição do primeiro número não zero
    int pos = 2;
    while (pos < 20 && ra[pos] == '0') {
        ++pos;
    }

    // Se encontramos um número não zero, a senha é a parte da string após esse número
    return ra.substr(pos);
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        string ra;
        cin >> ra;

        // Verificar se o RA é válido
        if (isValidRA(ra)) {
            // Extrair a senha provisória
            cout << extractPassword(ra) << endl;
        } else {
            // Caso os dados sejam inválidos
            cout << "INVALID DATA" << endl;
        }
    }

    return 0;
}
