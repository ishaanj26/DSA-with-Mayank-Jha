//  Binary Subarrays With Sum lc-930
#include <iostream>
#include <vector>
using namespace std;

int numSubarraysWithSum(vector<int> &nums, int goal)
{
   
}
int main()
{
    int n, target;
    vector<int> arr;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cin >> target;
    cout << numSubarraysWithSum(arr, target);
    return 0;
}