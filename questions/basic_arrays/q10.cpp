// print prime numbers between 1 and n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool _isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                _isPrime = false;
            }
        }
        if (_isPrime)
        {
            cout << i << '\t';
        }
    }

    return 0;
}