//   12. find mean,mode,mid,max,min given n values
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of values: ";
    cin >> n;
    vector <int> a;
    int sum = 0, minValue, maxValue;
    map<int, int> freq;

    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
        sum += a[i];
        freq[a[i]]++;
        if (i == 0)
        {
            minValue = a[0];
            maxValue = a[0];
        }
        else
        {
            maxValue = max(maxValue, a[i]);
            minValue = min(minValue, a[i]);
        }
    }

    // MEAN:-
    double mean = (double)sum / n;
    cout << "Mean   = " << mean << endl;

    // MODE:-
    int mode = a[0];
    int maxfreq = 0;
    for (auto it : freq)
    {
        if (it.second > maxfreq)
        {
            maxfreq = it.second;
            mode = it.first;
        }
    }
    cout << "Mode   = " << mode << "  Frequency    = " << maxfreq << endl;

    // Median
    sort(a.begin(), a.end());
    double median;
    if (n % 2 == 0)
    {
        median = (a[n / 2] + a[n / 2 - 1]) / 2.0;
    }
    else
    {
        median = a[n / 2];
    }

    cout << "Max    = " << maxValue << endl;

    cout << "Min    = " << minValue << endl;

    cout << "Median = " << median << endl;
    
    return 0;
}