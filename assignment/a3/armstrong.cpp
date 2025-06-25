// Armstrong
//  true or false

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int digits = log10(n)+1;

    //Calculating the digits--->easier way log10(n)+1
    // while (temp > 0)
    // {
    //      temp /= 10;
    //     digits++;
    // }

    
    int _isArmstrong = 0;
    temp = n;
    int remainder;
    while (temp > 0)
    {
        remainder = temp % 10;
        _isArmstrong += pow(remainder, digits);
        temp = temp / 10;
    }
    if (_isArmstrong == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}