// Maximum Product Subarray
//  Sample Input
//  15
//  1
//  2
//  2
//  1
//  2
//  3
//  4
//  5
//  6
//  1
//  2
//  3
//  4
//  5
//  7
//  Sample Output
//  2419200
#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> nums)
{
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << maxProduct(nums) << endl;
    return 0;
}