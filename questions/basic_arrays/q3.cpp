// THEATRE SQUARE
// seal value formula for a/b is a+b-1/b

// seal value of m/a + seal value of n/a
// = (m+a-1)/a * (n+a-1)/a

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