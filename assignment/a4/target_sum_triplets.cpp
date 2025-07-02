// Arrays-Target Sum Triplets

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void triplet(vector<int> num, int target)
{
    sort(num.begin(), num.end());
    for (size_t i = 0; i < num.size() - 2; i++)
    {
        if (num[i] == num[i + 1] || num[i + 1] == num[i + 2])
        {
            continue;
        }
        int left = i + 1;
        int right = num.size() - 1;
        while (left < right)
        {
            int sum=num[i]+num[left]+num[right];
            if(sum==target){
                cout<<num[i]<<", "<<num[left]<<" and "<<num[right]<<endl;
                left++;
                right--;
            }else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    triplet(arr, target);
    return 0;
}