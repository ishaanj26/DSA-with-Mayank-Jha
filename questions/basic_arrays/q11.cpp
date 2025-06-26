// print alternate prime numbers between 1 and n
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number";
    int n;
    cin >> n;
    int count = 1;
    for (int i = 2; i <= n; i++)
    {
        bool _isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (count % 2 != 0)
                {
                    cout << i << " ";
                }
                count++;
                break;
            }
        }
    }

    return 0;
}