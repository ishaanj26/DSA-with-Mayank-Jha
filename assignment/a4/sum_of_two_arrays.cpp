// Arrays-Sum Of Two Arrays
// Sample Input
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7
// Sample Output
// 3, 5, 5, 9, 6, END

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sum(vector<int> arr1, vector<int> arr2)
{
    int m = arr1.size();
    int n = arr2.size();
    vector<int> result;
    int carry_on = 0;
    while (m>0 || n>0 || carry_on)
    {
        int digit1=m>0? arr1[m-1]:0;
        int digit2=n>0? arr2[n-1]:0;
        int sum= carry_on + digit1+digit2;
        result.push_back(sum%10);
        carry_on = sum/10;
        m--;
        n--;
    }
    reverse(result.begin(),result.end());
    return result;

}

int main()
{
    int n, m;
    cin >> n;
    vector<int> arr1, arr2, result;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr1.push_back(value);
    }
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        arr2.push_back(value);
    }
    // exit(0);
    result = sum(arr1, arr2);
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << "END";
    return 0;
}