// Increasing array
//  We need to make sure the last number is atleast as large as the previous number but need sure we make increase in one move by +1 only
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<int> arr;
    int num;
    cin >> num;
    arr.push_back(num);
    long long move=0;
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
        if (arr[i] < arr[i - 1])
        {
            move = move + arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << move;
    return 0;
}