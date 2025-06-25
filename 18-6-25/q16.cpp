//Ultra-fast mathematician
#include <iostream>
using namespace std;

int main()
{
    string c1;
    string c2;
    cin >> c1;
    cin >> c2;
    string c3="";
    for (int i = 0; i < c1.length(); i++)
    {
        if (c1[i] == c2[i])
        {
            c3 += '0';
        }
        else
        {
            c3 += '1';
        }
    }

    cout << c3;

    return 0;
}