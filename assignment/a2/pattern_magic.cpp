// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
// n=5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (i - 1) + 1; j++)
        {
            cout << " ";
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * (i)-1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= totalRows; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}
