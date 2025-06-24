//        1
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
        {
            cout << "\t";
        }
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << "\t";
        }
        num -= 2;
        for (int j = 1; j < i; j++)
        {
            cout << num-- << "\t";
        }
        cout << endl;
    }
    return 0;
}