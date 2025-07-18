// Check if a SUBARRAY computes to zero and count number of subarrays forming zero
#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool BF_APPROACH(vector<int> arr)
{
    bool flag = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (size_t j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

// TO COUNT NO OF SUBARRAY EQUATING TO ZERO

void countsubarray(map<int, int> freq)
{
    int sum = 0;
    for (auto value : freq)
    {
        if (value.second > 1)
        {
            sum += value.second * (value.second - 1) / 2;
        }
    }
    cout << "THE NUMBER OF SUBARRAY ERQAUTING TO ZERO ARE : " << sum << endl;
}

bool PREFIX_APPROACH(vector<int> arr)
{
    map<int, int> freq;
    freq[0] = 1;  // Important: to catch subarrays starting at index 0

    int prefix_sum = 0;
    bool flag = false;

    for (int i = 0; i < arr.size(); i++)
    {
        prefix_sum += arr[i];

        if (freq[prefix_sum] > 0)
            flag = true;

        freq[prefix_sum]++;
    }

    if (flag)
        countsubarray(freq);

    return flag;
}

int main()
{
    vector<int> arr = {5, 3, -8, 3, -2, -1};

    // if (BF_APPROACH(arr))
    if (PREFIX_APPROACH(arr))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

    return 0;
}