#include <iostream>
#include <string>
using namespace std;

int main() {

    string str ("my content");
    for(string::iterator it=str.begin(); it != str.end(); it++) {
        cout << '\n';
        cout << *it;

    }
    return 0;

}


