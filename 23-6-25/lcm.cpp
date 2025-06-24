#include <iostream>
using namespace std;

int HCFFunction(int n1, int n2)
{
    int max = n1 > n2 ? n1 : n2;
    int min = n1 > n2 ? n2 : n1;
    int remainder;
    while (min != 0)
    {
        remainder = max % min;
        if (remainder == 0)
        {
            return min;
        }
        max = min;
        min = remainder;
    }
    return min;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int hcf = HCFFunction(n1, n2);
    cout << n1 * n2 / hcf;
    return 0;
}