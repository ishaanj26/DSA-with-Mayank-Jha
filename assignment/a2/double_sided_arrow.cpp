
//                          1 
//                      2 1   1 2 
//                  3 2 1       1 2 3 
//              4 3 2 1           1 2 3 4 
//                  3 2 1       1 2 3 
//                      2 1   1 2 
//                          1 



#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= n-2*(i-1)-1; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j < 2 * (i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                break;
            }
            cout << j << " ";
        }

        cout << endl;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= (2 * i); j++)
        {
            cout << "  ";
        }
        for (int j = n / 2 - i + 1; j >= 1; j--)
        {
            cout << j << ' ';
        }
        for (int j = 1; j <= n - 2 - 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n / 2 - i + 1; j++)
        {
            if (i == n / 2)
            {
                break;
            }
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}