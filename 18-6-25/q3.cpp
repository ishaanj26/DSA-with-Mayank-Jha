// THEATRE SQUARE
//  Watermelon
#include <iostream>
using namespace std;

int main()
{
    int m, n, a;
    cout << "ENTER THE DIMENsION OF THEATRE-> ";
    cin >> m >> n;
    cout << "ENTER THE DIMENSION OF SQUARE TILE-> ";
    cin >> a;
    int ans = ((m + a - 1) / a) * ((n + a - 1) / a);
    cout << a;

    return 0;
}