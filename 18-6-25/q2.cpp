#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = i;
    while (i <= n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 2)
        {
            ans++;
        }
        i++;
    }
    cout << ans;
    return 0;
}