#include <iostream>
using namespace std;

int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    if((A + B > C && A + C > B && B + C > A) ||  
       (A + B > D && A + D > B && B + D > A) || 
       (A + C > D && A + D > C && C + D > A) ||
       (B + C > D && B + D > C && C + D > B)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;

}

