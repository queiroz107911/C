#include <iostream>
#include <string>
using namespace std;

int main() {

    string str ("Hello World.");
    char lastchar[1] = {str.back()};
    cout << str << '\n';
    return 0;
} 