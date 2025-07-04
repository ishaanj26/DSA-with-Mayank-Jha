// Subarray sum zero(Optimised):
// pre[i]=sum of array index 0 to i
// pre[l, r] = pre[l] - pre[r - 1] if the sum is zero then
// pre[l] = pre[r - 1]
// Time complexity: O(n)
 
#include <climits>
#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int a[100001]{0};

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];

        if (i == 0)
        {

            continue;
        }
        else
        {

            a[i] = a[i - 1] + a[i];
        }

        if (maxi < a[i])
        {

            maxi = a[i];
        }
    }

    int freq[100001]{0};

    for (int i = 0; i < n; i++)
    {

        int element = a[i];

        freq[element]++;
    }

    for (int i = 1; i <= maxi; i++)
    {

        if (freq[i] > 1)
        {

            cout << "YES" << endl;

            return 0;
        }
    }

    if (freq[0] > 0)
    {

        cout << "YES" << endl;

        return 0;
    }

    cout << "NO" << endl;
}