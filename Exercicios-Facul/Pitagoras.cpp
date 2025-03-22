#include <iostream>
using namespace std;

int main() 
{
    int A, B, H;
    
    // fórmula de pitagoras (A * A) + (B * B) = H * H;
    
    for (int A = 1; A <= 20; A++)
        
        for (int B = A; B <= 20; B++)
            
            for (int H = B; H <= 20; H++)
                
                if (A * A + B * B == H * H)
                    
                cout << "a: " << A << ", b: " << B << ", h: " << H << endl;
    

    return 0;   
}