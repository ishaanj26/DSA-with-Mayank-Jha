// Subarray Sum 1 cses 1660

// 1st Approach -> SlidignWindowApproach-> will only work when the numbers are non-negative.
//  Time Complexity -> O(n) and Space Complexity -> O(1).
// 2nd Approach -> PrefixSumArray-> will also work when the elements of the array are negative. (General Approach)
//  Time Complexity -> O(n) and Space Complexity -> O(1).

#include <iostream>
#include <unordered_map>
#include <vector>
#define int long long
using namespace std;

int SldingWindowApproachSumK(vector<int> arr, int target)
{
    int n = arr.size();
    int s = 0;
    int sum = 0;
    int count = 0;
    for (int e = 0; e < n; e++)
    {
        sum = sum + arr[e];
        while (sum > target && s < e)
        {
            sum = sum - arr[s];
            s++;
        }
        if (sum == target)
        {
            count++;
        }
    }
    return count;
}

int PrefixSumApproachSumK(vector<int> arr, int target)
{
    unordered_map<int, int> map;
    int n = arr.size();
    int prefix[n + 1];
    map[0]++;
    prefix[0] = arr[0];
    map[prefix[0]]++;
    int count = 0;
    if (map[target] > 0)
    {
        count++;// if the target is found then increment the count
    }
    for (int i = 1; i < n; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
        int calculate = prefix[i] - target;
        if (map[calculate] > 0)
        {
            count = count + map[calculate];
        }
        map[prefix[i]]++;
    }
    return count;
}

int32_t main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    // cout << SldingWindowApproachSumK(arr, target);
    cout << PrefixSumApproachSumK(arr, target);

    return 0;
}