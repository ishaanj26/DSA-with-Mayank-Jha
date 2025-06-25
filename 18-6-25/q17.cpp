//Increasing array
// We need to make sure the last number is atleast as large as the previous number but need sure we make increase in one move by +1 only
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long moves = 0;
    cin>>arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i - 1] > arr[i])
        {
            moves += arr[i - 1] - arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout << moves;

    return 0;
}