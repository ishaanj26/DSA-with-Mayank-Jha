// Watermelon
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER A NUMBER-> ";
    cin >> n;
    if (n == 2)
    {
        cout << "FALSE";
        exit(0);
    }
    if (n % 2 == 0)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

    return 0;
}