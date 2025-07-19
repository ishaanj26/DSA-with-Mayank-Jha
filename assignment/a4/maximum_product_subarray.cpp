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

int BFmaxProduct(vector<int> nums)
{
    int n = nums.size();
    int maxProduct = 1;
    for (size_t i = 0; i < n; i++)
    {
        int product = 1;
        for (size_t j = i; j < n; j++)
        {
            product *= nums[j];
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

int maxProduct(vector<int> nums)
{
    int n = nums.size();
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> productPrefix(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (i == 0)
        {
             productPrefix[i] = nums[i];
        }
        else
            productPrefix[i] = nums[i] * productPrefix[i - 1];
    }
    cout << maxProduct(nums) << endl;
    return 0;
}