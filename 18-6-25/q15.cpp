//  15. lucky division
// Petya loves lucky numbers.Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Petya calls a number almost lucky if it could be evenly divided by some lucky number.Help him find out if the given number n is almost lucky.

#include <iostream>
using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        int remainder = n % 10;
        if (remainder != 4 && remainder != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}