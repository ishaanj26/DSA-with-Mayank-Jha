//    1           1
//    1 2       2 1
//    1 2 3   3 2 1
//    1 2 3 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= i)
            {
                cout << j << "\t";
            }
            else if (2 * n - j - 1 < i)
            {
                cout << 2 * n - j << "\t";
            }
            else
            {
                cout << '\t';
            }
        }
        cout << endl;
    }
    return 0;
}