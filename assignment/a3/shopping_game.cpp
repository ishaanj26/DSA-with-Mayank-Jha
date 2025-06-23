#include <iostream>
using namespace std;
int main()
{
    int t, m, n;
    cin >> t;
    while (t > 0)
    {
        cin >> m >> n;
        int count = 1;
        while (m >= 0 && n >= 0)
        {
            if (count % 2 != 0)
            {
                m = m - count;
            }
            else
            {
                n = n - count;
            }
            count++;
        }
        if (m < 0)
        {
            cout << "Harshit" << endl;
        }
        else if (n < 0)
        {
            cout << "Aayush" << endl;
        }
        t--;
    }
    return 0;
}