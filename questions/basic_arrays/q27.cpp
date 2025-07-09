// Shiftng the Frequency array to store negative values

// APPROACH
// FIND THE MIN ELEMENT ADD THAT TO ALL TEH ELEMENTS SUCH THAT THE SMALLEST ELEMTN IS 0

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int min1 = INT_MAX;
    int max1 = INT_MIN;

    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min1)
        {
            min1 = a[i];
        }
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }
    // Store the values
    int size=max1 - min1 + 1;
    int freq[size]{0};
    for (size_t i = 0; i < n; i++)
    {
        int shifted_element = a[i] - min1;
        freq[shifted_element]++;
    }

    // Print the values
    for (size_t i = 0; i < size; i++)
    {
        int elemt = i;
        int shifted_elemt = elemt + min1;
        cout << shifted_elemt << "" << freq[i] << endl;
    }

    return 0;
}