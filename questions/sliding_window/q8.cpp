#include <iostream>
#include <vector>
using namespace std;
int maxScore(vector<int> &cardPoints, int k)
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
    cout << maxScore(arr, target);

    return 0;
}