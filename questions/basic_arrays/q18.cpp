// Beautiful Permutations
//  Basically nis given we need toa rrange number if 1 to n such that no adjacent number ahve a differnece of 1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n <= 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {

        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}