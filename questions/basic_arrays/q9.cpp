// check prime numbers between 1 and 100

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check whether a prime number or not";
    cin >> n;
    if (n <= 1)
    {
        cout << "Not a prime number";
        exit(0);
    }
    bool _isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            _isPrime = false;
        }
    }
    if (_isPrime)
    {
        cout << n << " is " << "PRIME NUMBER";
    }
    else
    {
        cout << n << " is " << "NOT A PRIME NUMBER";
    }

    return 0;
}