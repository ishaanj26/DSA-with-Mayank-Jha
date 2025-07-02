#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;

pair<int, int> res(vector<int> prices, int m)
{
    int min_value = INT_MAX;
    pair<int, int> result = {-1, -1};
    int start = 0, back = prices.size() - 1;
    while (start < back)
    {
        int sum = prices[back] + prices[start];
        if (sum == m)
        {
            int differnce = prices[back] - prices[start];
            if (differnce < min_value)
            {
                min_value = differnce;
                result = {prices[start], prices[back]};
            }
            back--;
            start++;
        }
        else if (sum > m)
        {
            back--;
        }
        else
        {
            start++;
        }
    }
    return result;
}

int main()
{
    int trials;
    cin >> trials;
    while (trials > 0)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int target;
        cin >> target;

        sort(arr.begin(), arr.end());

        pair<int, int> result = res(arr, target);
        cout << "Deepak should buy roses whose prices are " << result.first << " and " << result.second << "."<<endl;
        trials--;
    }

    return 0;
}