// Bubble sort

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 1};
    int n = 10;

    for (size_t i = 0; i < n - 1; i++)
    {
        int index = i;
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (auto value : arr)
    {
        cout << arr << endl;
    }

    return 0;
}
