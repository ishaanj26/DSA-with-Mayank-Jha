// 1. Factory Machine cses-1620

#include <iostream>
#include <climits>
using namespace std;

long long minTime(long long no_of_machines, long long no_of_products, long long arr[])
{
    long long ans = 0;
    long long min = LLONG_MAX;
    for (long long i = 0; i < no_of_machines; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    long long start = 1;
    long long end = min * no_of_products;
    while (start <= end)
    {
        long long mid = (start + end) / 2;
        long long sum = 0;
        for (long long i = 0; i < no_of_machines; i++)
        {
            sum = sum + mid / arr[i];
        }
        if (sum >= no_of_products)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    long long n, t;
    cin >> n >> t;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minTime(n, t, arr);

    return 0;
};