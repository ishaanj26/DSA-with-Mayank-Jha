// 2. Vasya and Strings codeforces-676/C

#include <iostream>
#include <climits>
using namespace std;
const int N = 1e5 + 3;
char st[N];
int n, k;

int F(char op)
{
    int countOp = 0, i = 0, maxi = INT_MIN;
    ;
    for (size_t e = 0; e < n; e++)
    {
        if (st[e] == op)
        {
            countOp++;
        }
        while (countOp > k && i <= e)
        {
            if (st[i] == op)
            {

                countOp--;
            }
            i++;
        }
        // Whenever you are in desired window:

        if (maxi < (e - i + 1))
        {

            maxi = (e - i + 1);
        }
    }
    return maxi;
}

int main()
{
    cin >> n >> k;
    cin >> st;

    // Current Operation to Perform : b->a
    int ans1 = F('b');
    // Current Operation to Perform : a->b
    int ans2 = F('a');
    cout << max(ans1, ans2);
    return 0;
}