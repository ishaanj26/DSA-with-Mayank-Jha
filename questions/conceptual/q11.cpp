// Armstrong Number
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Armstrong" << endl;
        return 0;
    }
    int temp = n;
    int digit = log10(n) + 1;
    int sum = 0;
    while (temp)
    {
        int remainder = temp % 10;
        temp /= 10;
        sum = sum + pow(remainder, digit);
    }
    if (sum == n)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "Not an Armstrong" << endl;
    }

    return 0;
}