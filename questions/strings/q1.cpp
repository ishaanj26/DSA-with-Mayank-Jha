#include <iostream>
#include <cstring>
using namespace std;

void BruteForceAppraoch(int m, int len, char s[])
{
    // TIME COMPLEXITY = O(MXN/2)
    int i = 1;

    while (i <= m)
    {

        // For my current day find segment SP,EP;

        int SP;

        cin >> SP;

        SP--;

        int EP = len - SP - 1;

        // Now Reverse the current String from

        // SP to EP.

        while (SP < EP)
        {

            // Swap them:

            char temp = s[SP];

            s[SP] = s[EP];

            s[EP] = temp;

            SP++, EP--;
        }

        i++;
    }
}

void PreComputationAppraoch(int m, int len, char s[])
{
    while (m > 0)
    {
    }
}

int main()
{
    char a[1000001];
    cin >> a;
    int m;
    cin >> m;
    int length = strlen(a);

    // BruteForceAppraoch(m, length, a);
    PreComputationAppraoch(m, length, a);

    for (size_t i = 0; i < length; i++)
    {
        cout << a[i];
    }

    return 0;
}
