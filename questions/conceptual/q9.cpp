#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    // Negative numbers are not palindrome
    // Also, numbers ending in 0 are not palindrome unless the number is 0
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int temp = x;
    long long reverse = 0;
    int remainder = 0;
    while (temp > 0)
    {
        remainder = temp % 10;
        temp /= 10;
        reverse = reverse * 10 + remainder;
    }
    if (reverse == x)
        return true;
    else
        return false;
    return 0;
}