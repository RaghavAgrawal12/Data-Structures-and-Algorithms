#include <bits/stdc++.h>
using namespace std;

int main() 
{
    float base, exponent, result;

    cout << "Enter base:  ";
    cin >> base ;
        cout << "Enter exponent:  ";
        cin >> exponent ;


    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result;
    
    return 0;
}
