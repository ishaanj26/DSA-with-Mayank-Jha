#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    cout << "Enter the first number\n";
    cin >> n;
    int power = 0;
    int decimal = 0;
    for (int i = n.length() - 1; i >= 0; i--)
    {
        if (n[i] == '1')
        {
            decimal = decimal + pow(2, power);
        }
        power++;
    }
    cout << "The decimal number is->\n";

    cout << decimal;

    return 0;
}