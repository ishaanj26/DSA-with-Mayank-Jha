// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = n / 2;
    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == mid + 1)
            {
                cout << "*";
            }
            else if (
                i == 1 && j > mid)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n || j == mid + 1)
            {
                cout << "*";
            }
            else if (
                i == mid && j <= mid)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}