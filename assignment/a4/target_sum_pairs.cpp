// Arrays-Target Sum Pairs
//  Sample Input
//  5
//  1
//  3
//  4
//  2
//  5
//  5
//  Sample Output
//  1 and 4
//  2 and 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sumPair(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int front = 0, back = arr.size() - 1;
    while (front < back)
    {
        int sum = arr[front] + arr[back];
        if (sum == target)
        {
            cout << arr[front] << " and " << arr[back]<<endl;
            front++;
            back--;
        }
        else if (sum > target)
        {
            back--;
        }
        else
        {
            front++;
        }
    }
}

int main()
{
    int n;
    int target;
    vector<int> arr;

    cin >> n;
    vector<pair<int, int>> sum_arr; // To store pairs of numbers
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cin >> target;
    sumPair(arr, target);
    return 0;
}