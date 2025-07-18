// 2. Container with most water - leetcode 11
#include <iostream>
#include <vector>
using namespace std;

int BFAPPRAOCH(vector<int> &height)
{
    int maxArea = 0;
    for (size_t i = 0; i < height.size() - 1; i++)
    {
        for (size_t j = i + 1; j < height.size(); j++)
        {
            int area = min(height[i], height[j]) * (j - i);
            maxArea = max(area, maxArea);
        }
    }
    return maxArea;
}

int TwoPointerAPPRAOCH(vector<int> &height)
{
    int start = 0;
    int end = height.size() - 1;
    int maxArea = 0;
    while (start < end)
    {
        if (height[start] > height[end])
        {
            int area = height[end] * (end - start);
            maxArea = max(area, maxArea);
            end--;
        }
        else
        {
            int area = height[start] * (end - start);
            maxArea = max(area, maxArea);
            start++;
        }
    }
    return maxArea;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    // cout << BFAPPRAOCH(arr);
    cout << TwoPointerAPPRAOCH(arr);

    return 0;
}