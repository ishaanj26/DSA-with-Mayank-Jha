// Selection Sort

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
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

    selection_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}