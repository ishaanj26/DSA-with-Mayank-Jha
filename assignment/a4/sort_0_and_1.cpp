// Sort 0 and 1 ( Time Complexity)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int front = 0;
    int back = n - 1;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if (value == 0)
        {
            arr[front++]=0;
        }else{
            arr[back--]=1;
        }
    }

    for(auto value:arr){
        cout<<value<<" ";
    }

    return 0;
}