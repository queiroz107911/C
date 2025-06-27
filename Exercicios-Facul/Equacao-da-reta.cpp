#include <iostream>
using namespace std;

int main() {

    float x1, y1, x2, y2, x3, y3;
    cout << "Digite as coordenadas do primeiro ponto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Digite as coordenadas do segundo ponto (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Digite as coordenadas do terceiro ponto (x3, y3): ";
    cin >> x3 >> y3;
    
    cout.precision(2);
    cout << fixed;
    
    float a = (y2 - y1) / (x2 - x1);
    float b = y1 - a * x1;

    cout << "A equação da reta é: y = " << a << " * x + (" << b << ")" << endl;
    
    if (y3 == a * x3 + b) 
        cout << "O PONTO (" << x3 << ", " << y3 << ") PERTENCE A RETA" << endl;
    else
        cout << "O PONTO (" << x3 << ", " << y3 << ") NAO PERTENCE A RETA" << endl;
        
    
    
    
    
    return 0;
}