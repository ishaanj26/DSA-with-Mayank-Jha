//   5 4 3 2 1 0 1 2 3 4 5
//     4 3 2 1 0 1 2 3 4
//       3 2 1 0 1 2 3
//         2 1 0 1 2
//           1 0 1
//             0
//           1 0 1
//         2 1 0 1 2
//       3 2 1 0 1 2 3
//     4 3 2 1 0 1 2 3 4
//   5 4 3 2 1 0 1 2 3 4 5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        
        for (int j = i; j <= n; j++)
        {
            cout << n - j<<" ";
        }
         for (int j = 1; j <= n-i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
    for (int i = n; i > 0 ; i--)
    {
        for (int j = i-1; j > 0; j--)
        {
            cout<<"  ";
        }
        for (int j = n-i+1; j >= 0; j--)
        {
            cout << j<<" ";
        }
         for (int j =1; j <= n-i+1; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}