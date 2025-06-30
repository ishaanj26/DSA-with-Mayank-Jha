#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int max_sum = 0;
    int sum = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int sum = sum + arr[i];
        max_sum = max(sum, max_sum);
        if(max_sum!=sum){
            sum=0;
        }
    }
    

    return 0;
}