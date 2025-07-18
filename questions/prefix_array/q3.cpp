// 4. Update Prefix Query
// STEP1-> MAKE A DIFFERNCE ARRAY
// STEP2-> TAKE PREFIX OF DIFFERNCE ARRAY 
// STEP3-> ADD TO THE NORMAL ARRAY 

#include <iostream>
using namespace std;

void updatePrefixQuery(int n, int queries, int arr[])
{
    int difference[n + 2] = {0}; // +2 for safety on N+1

    while (queries--)
    {
        int l, r, value;
        cin >> l >> r >> value;
        difference[l] += value;
        difference[r + 1] -= value;
    }

    // Prefix sum on difference array
    for (int i = 1; i < n; i++)
    {
        difference[i] += difference[i - 1];
    }

    // Apply updates to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] += difference[i]; // difference is 1-based, arr is 0-based
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int queries;
    cin >> queries;

    updatePrefixQuery(n, queries, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
 