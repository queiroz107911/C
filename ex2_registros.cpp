#include <iostream>
using namespace std;

struct medias {
    float p1;
    float p2;
    float p3;
};

struct ficha {
    string nome;
    int matricula;
    medias provas;
};

int main() {
    ficha fichapessoa;
    fichapessoa.provas.p1;
    cin >> fichapessoa.provas.p1;
    cout << fichapessoa.provas.p1;

    return 0;

}