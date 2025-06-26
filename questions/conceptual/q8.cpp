// Trailing zero
//  we are given an n we need to find the fact and see if any trailing zero

// WRONG APPROACH

// #include <iostream>
// using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;
//     long long fact = 1;
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     cout<<fact<<endl;
//     while (fact > 0)
//     {
//         int remainder = fact % 10;
//         if (remainder == 0)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//         fact=fact/10;
//     }
//     cout << count;
//     return 0;
// }

// RIGHT APPROACH
//  to have trail of zero it must be factor of 10 for it to be a factor f 10 it must be a factor of 5 ... so we find the number of digit divisible by 5 in it.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        count = count + n / i;
    }
    cout << count;

    return 0;
}