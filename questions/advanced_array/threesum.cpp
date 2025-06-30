#include <iostream>
using namespace std;

int main()
{
    int trials;
    while (trials)
    {
        int n;
        cin >> n;
        int freq[10];
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = x % 10;
            freq[x]++;
        }

        for (size_t i = 0; i < 10; i++)
        {
            if (freq[i] > 3)
            {
                freq[i] = 3;
            }
        }
        int newarray[31];
        int count = 0;
        // from frequecny array to normal aray of digit with 0-9 with atmost frequecny 3
        for (size_t i = 0; i < 10; i++)
        {
            while (freq[i])
            {
                newarray[count] = i;
                count++;
                freq[i]--;
            }
        }
        int flag = 0;
        for (size_t i = 0; i < count - 2; i++)
        {
            for (size_t j = i + 1; j < count; j++)
            {
                for (size_t k = j + 1; k < 31; k++)
                {
                    if ((newarray[i] + newarray[j] + newarray[k]) % 10 == 3)
                    {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        trials--;
    }

    return 0;
}