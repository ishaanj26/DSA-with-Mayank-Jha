// Sample Input
// 8
// 2
// 33
// Sample Output
// 11011

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sb;
    int db;
    int sn;
    cin >> sb >> db >> sn;
    int power = 0;
    int remainder;
    int dn = 0;
    while (sn > 0)
    {
        remainder = sn % 10;
        dn = dn + remainder * pow(sb, power);
        sn = sn / 10;
        power++;
    }
    // cout << dn;

    // Now we have to convert the decimal to the db(destination base)
    power = 1;
    int value = 0;
    while (dn > 0)
    {
        remainder = dn % db;
        value = value + remainder * power;
        power = power * 10;
        dn = dn / db;
    }
    cout << value;
    return 0;
}