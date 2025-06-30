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
#include <map>
using namespace std;

int main()
{
    int n;
    int target;
    vector<int, int> sum_arr(n);
    map<int, int> freq;
    vector<int, int> arr;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        int difference = target - arr[i];
        if (freq.find(difference) != freq.end())
        {
            sum_arr[difference] = arr[i];
        }
        freq[arr[i]]++;
    }
    for (auto value : sum_arr)
    {
        cout << value.first << " and " << value.second << endl;
    }
    return 0;
}