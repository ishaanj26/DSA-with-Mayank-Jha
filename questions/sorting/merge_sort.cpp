// merge Sort

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high);

void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];

    for (size_t i = 0; i < n1; i++)
    {
        L[i] = arr[low + i];
    }
    for (size_t i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] > R[j])
        {
            arr[k] = R[j];
            k++;
            j++;
        }
        else
        {

            arr[k] = L[i];
            k++;
            i++;
        }
    }
    while (i < n1)
    {
        arr[k] = L[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        k++;
        j++;
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

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}