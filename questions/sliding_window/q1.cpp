#include <iostream>
using namespace std;

int BFAPPROACH(int n, int t, int arr[])
{
    int maxi = INT16_MIN;
    for (size_t i = 0; i < n; i++)
    {
        int count = 0;
        int time = t;
        for (size_t j = i; j < n; j++)
        {
            time = time - arr[j];
            if (time < 0)
            {
                break;
            }
            count++;
        }
        if (maxi < count)
        {
            maxi = count;
        }
    }
    return maxi;
};

int Upper_bound(int prefix[], int n, int t)
{
    int ans = n;
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (prefix[mid] > t)
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
};

int SldiingWindowApproach(int n, int t, int arr[])
{
    int s = 0,tc = 0;
    int maxi = INT8_MIN;
    for (size_t e = 0; e < n; e++)
    {
        //Expasnion
        tc += arr[e];

        //Shrinakge
        while (s <= e and tc > t)
        {
            tc -= arr[s];
            s++;
        }
        int count = e - s + 1;
        if (count > maxi)
        {
            maxi = count;
        }
    }
     return maxi;
}

int32_t main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 1st approach Brute Force n^2
    //  cout << BFAPPROACH(n, t, arr);

    // 2nd  Prefix Sum Approach complexity is nlogn
    //  int prefix[n + 1]{0};
    //  prefix[0] = arr[0];
    //  for (size_t i = 1; i < n; i++)
    //  {
    //      prefix[i] = arr[i] + prefix[i - 1];
    //  }

    // // for every start point of the book tell me how many more books can you read.
    // // Since we have a prefix array: The first index will have value ->  updated time - start point is the answer
    // int max = INT16_MIN;
    // for (size_t i = 0; i < n; i++)
    // {
    //     int utt = t;
    //     if (i > 0)
    //         int updated_time = utt + prefix[i - 1];
    //     int count = Upper_bound(prefix, n, t)-i;
    //     if (count > max)
    //     {
    //         max = count; // max books read
    //     }
    // }

    // 3rd Approach-> Sliding Window Time Complexity O(n)
    SldiingWindowApproach(n, t, arr);

    return 0;
}