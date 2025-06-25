#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the first number\n";
    cin >> x;
    cout << "Enter the second number\n";
    cin >> y;

    int min = x > y ? y : x;
    int max = x > y ? x : y;

    int remainder;

    while (min != 0)
    {
        remainder = max % min;
        if (remainder == 0)
        {
            break;
        }
        max = min;
        min = remainder;
    }
    cout << "THE HCF IS-> " << min;
    return 0;
}