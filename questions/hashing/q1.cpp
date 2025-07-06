// Frequency of the Most Frequent Element

// Q1. we have nums array and we have k, the amount we can increase so we have the largest frequency in the array

#include <iostream>
#include <vector>
using namespace std;

int maxFrequency(vector<int> nums, int k)
{
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << maxFrequency(nums, k);
    return 0;
}