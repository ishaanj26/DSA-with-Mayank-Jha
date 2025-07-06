// GCD Or HCF

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int dividend = max(n1, n2);
    int divisor = min(n1, n2);
    int remainder;
    while (true)
    {
        remainder = dividend % divisor;
        if (remainder == 0)
        {
            break;
        }
        dividend = divisor;
        divisor = remainder;
    }
    cout << divisor;
    return 0;
}