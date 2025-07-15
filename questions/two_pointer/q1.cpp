#include <iostream>
#include <vector>
using namespace std;

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
    int sum_Shreeja = 0;
    int sum_Dima = 0;
    int s = 0;
    int end = n - 1;
    int count = 0;
    while (s <= end)
    {
        if (count % 2 == 0)
        {
            if (arr[s] > arr[end])
            {
                sum_Shreeja += arr[s];
                s++;
            }
            else
            {
                sum_Shreeja += arr[end];
                end--;
            }
        }
        else
        {
            if (arr[s] > arr[end])
            {
                sum_Dima += arr[s];
                s++;
            }
            else
            {
                sum_Dima += arr[end];
                end--;
            }
        }
        count++;
    }
    cout << sum_Shreeja << " "
         << sum_Dima;
    return 0;
}