// STATIC RANGE SUM QUERIES

// Input:

// 8 4
// 3 2 4 5 1 1 5 3
// 2 4
// 5 6
// 1 8
// 3 3
// Output:

// 11
// 2
// 24
// 4
#include <iostream>
using namespace std;

int main()
{
    long long n, q;
    cin >> n;
    long long arr[n];
    cin >> q;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i]; // input array elements
    }
    // 1st approach leads to TLE
    //  while (q > 0)
    //  {
    //      long long a, b;
    //      cin >> a >> b;
    //      long long sum = 0;
    //      for (long long i = a - 1; i < b; i++)
    //      {
    //          sum += arr[i];
    //      }
    //      cout << sum << endl;
    //      q--;
    //  }
    // Build prefix sum array once
    long long prefix[n + 1];
    prefix[0] = arr[0];
    for (long long i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while (q--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == 1)
            cout << prefix[b - 1] << endl;
        else
            cout << prefix[b - 1] - prefix[a - 2] << endl;
    }

    return 0;
}