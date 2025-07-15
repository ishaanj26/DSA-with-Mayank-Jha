#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int target)
{
    if(low>high){
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binary_search(arr, mid + 1, high, target);
    }
    else
    {
        return binary_search(arr, low,  mid - 1, target);
    }
}

int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int index = binary_search(arr, 0, n-1, target);
    if(index==-1){
        cout<<"Element not found";
    }else{
        cout<<"Element: "<<target<<" found at index: "<<index;
    }

    return 0;
}