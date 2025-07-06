// Longest Subarray with sum K

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int BF_longest_subarray(int arr[], int n, int k)
{
    int max_length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                max_length = max(max_length, j - i + 1);
            }
        }
    }
    return max_length;
}

int PrefixSum_longest_subarray(int arr[], int n, int k){
    
}


int main()
{

    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int n = 7, k = 4;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int res = BF_longest_subarray(arr, n, k);
    cout << "longest subarray with sum " << k << ": " << res << endl;

    return 0;
}
