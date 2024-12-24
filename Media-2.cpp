#include <iostream>
using namespace std;

int main () {

    double A, B, C, media;
    cin >> A >> B >> C;

    media = (A * 2.0 + B * 3.0 + C * 5.0) /10.0;

    cout.precision(1);
    cout << "MEDIA = " << fixed << media << endl;

    return 0;
}