#include <iostream>
using namespace std;

int main() {

    double A, B, media;
    cin >> A >> B;
    media = (A * 3.5 + B * 7.5) / 11.0;
    
    cout.precision(5);
    cout << fixed << "MEDIA = " << media << endl;

    return 0;
}