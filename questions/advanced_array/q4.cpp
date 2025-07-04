// 4. Update Prefix Query

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int difference[n + 1]{0};

    int queries;
    cin >> queries;

    while (queries)
    {
        int l, r, value;
        cin >> l >> r >> value;
        difference[l] = +value;
        difference[r + 1] -= value;
        queries--;
    }

    for (size_t i = 1; i < n; i++)
    {
        difference[i] = difference[i - 1] + difference[i];
    }

    // Add difference in the original array

    for (size_t i = 0; i < n; i++)
    {
        arr[i] = +difference[i];
    }
    
    //Print the array
    
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}