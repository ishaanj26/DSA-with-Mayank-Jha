// TWO SETS
// we need to make sure we make divide the set in such a way that the sum is equal in both
// its easy by greedy approach
// Approach:-
// we divide the sum of total array equally to 2 sets. We allocate the highest element to the set1 if the sum is more then the allocated sum to set then set2.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<int> arr1, arr2;
    long long sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
    {
        cout <<"NO";
        return 0;

    }
    long long half = sum / 2;
    for (int i = n; i >= 1; i--)
    {
        if (i <= half)
        {
            arr1.push_back(i);
            half=half-i;
        }
        else
        {
            arr2.push_back(i);
        }
    }
    cout << "YES" << endl
         << arr1.size() << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl
         << arr2.size()<<endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i]<<" ";
    }
    return 0;
}