// THREE SUM PROBLEM
//  In this if the three distinct indices have sum last digit as 3 print yes else no

// hint
// we can solve this with brute force but that will take time
// Notice how they dont want the digits just yes or no so one way is we can just take the last digit.
// But last digit will aslo kead to same number of n
// we need to reduce the n,
// notice how in the question it s asked three indices add to the sum
// so if the frequency of last digit is 3 we cannot inclue it
// doing so we can reduce the number if n and then we apply brute force.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool check3Sum(vector<int> arr, unordered_map<int, int> freq)
{

    int count = 0;
    int result[30];
    
    for (auto value : freq)
    {
        int occur = 0;
        while (value.second != 0)
        {
            if (occur >= 3)
            {
                break;
            }
            result[count] = (value.first);
            value.second--;
            count++;
            occur++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (size_t j = i + 1; j < count; j++)
        {
            for (size_t k = j + 1; k < count; k++)
            {
                if ((result[i] + result[j] + result[k]) % 10 == 3)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int trials;
    cin >> trials;
    while (trials > 0)
    {
        unordered_map<int, int> freq;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] % 10;
            freq[arr[i]]++;
        }
        bool output = check3Sum(arr, freq);
        if (output)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        trials--;
    }
    return 0;
}