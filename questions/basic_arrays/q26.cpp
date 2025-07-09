// A char array should always end with end character otherwise they casn have garbage value if you initlaise them with values singularly ie. {'1','2','3','4'}

#include <iostream>
using namespace std;

int main()
{
    int x{10};
    int a10[]{2, 3, 4, 5, 6}; // Valid - array with initializer list
    int p[]{2, 3, 4, 5, 6};   // Valid - deduces size
    int z[5]{1, 2, 3};        // Remaining elements initialized to 0
    int q[5]{0};              // All elements set to 0

    char ch[5]{'A'};              // ch[0] = 'A', rest = '\0'
    char ch2[]{'A', 'B', 'C'};    // Valid
    char ch3[] = {'A', 'B', 'C'}; // Also valid

    // Taking input
    // APPROACH 1: using loop
    int n;
    cin >> n;

    char a5[1000]; // Fixed: cannot declare variable-sized array in standard C++
    for (int i = 0; i < n; i++)
    {
        cin >> a5[i]; // Fixed: changed a[i] to a5[i]
    }

    // APPROACH 2: while loop (size not given)
    char a2[1000];
    int i = 0;
    char ch_input;
    while (cin >> ch_input && i < 1000) // Added condition to avoid overflow
    {
        a2[i] = ch_input;
        i++;
    }

    // APPROACH 3: directly taking the string into the char array
    // Drawback: stops at whitespace
    char a3[1000];
    cin >> a3;

    char check[]{"Mayank is a good boy"};
    cout << "Check is: " << check << endl;

    // APPROACH 4: Take an entire line
    char str[1000];
    cin.ignore();           // optional: clears leftover newline from previous input
    cin.getline(str, 1000); // Can add a deliminator aas well like'y' as soon as we get y we stop in the third argumnent it is written

    return 0;
}