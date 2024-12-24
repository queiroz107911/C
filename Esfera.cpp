#include <iostream>
using namespace std;

int main() {

    double R, pi, volume;
    cin >> R;
    pi = 3.14159;
    volume = (4/3.0) * pi * R * R * R;

    cout.precision(3);
    cout << fixed;
    cout << "VOLUME = " << volume << endl;

    return 0;
}