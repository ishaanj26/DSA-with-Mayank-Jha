#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot) // For ascending order
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1; // Return the pivot index
}

// Quick Sort function
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);   // Left part
        quick_sort(arr, pi + 1, high);  // Right part
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quick_sort(arr, 0, n - 1); // ✅ Corrected

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
