#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> result(n);
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    int front = 0;
    int back = n - 1;
    for (size_t i = 0; i < n; i++)
    {
        if (abs(arr[front]) > abs(arr[back]))
        {
            result[n - i - 1] = arr[front] * arr[front];
            front++;
        }
        else
        {
            result[n - i - 1] = arr[back] * arr[back];
            back--;
        }
    }
    for (auto value : result)
    {
        cout << value << " ";
    }
    return 0;
}