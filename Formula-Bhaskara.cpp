#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double A, B, C;
    cin >> A >> B >> C;
    
    double DELTA = B * B - 4 * A * C;
    
    if(A == 0 || DELTA < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double R1 = (-B + sqrt(DELTA)) / (2 * A);
        double R2 = (-B - sqrt(DELTA)) / (2 * A);
        cout.precision(5);
        cout << fixed;
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;

}