#include <iostream>
#include <vector>
using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int left = 0;
    int maxCount = 0;
    int count = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] == 0)
        {
            count++;
        }
        while (count > k && left <= right)
        {
            if (nums[left] == 0)
            {
                count--;
            }
            left++;
        }
        maxCount = max(maxCount, right - left + 1);
    }
    return maxCount;
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    cout << longestOnes(nums, k);
    return 0;
}