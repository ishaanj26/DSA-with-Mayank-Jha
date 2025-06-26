// Weird algo
//  if n even then divide by two if n odd multiply by three add 1 till n=1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n >= 1)
    {
        if (n == 1)
        {
            cout << 1;
            break;
        }
        cout << n;
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }

    return 0;
}