//MISING NUMBER
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        sum -= i;
    }
    cout << sum;

    return 0;
}