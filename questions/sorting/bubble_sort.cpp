// Bubble Sort

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - 1-i; j++)
        {
            bool isswap=false;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap=true;

            }
            if(!isswap){
                break;
            }
        }
    }
}


int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}