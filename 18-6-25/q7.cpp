//COIN PILES
// Q7. I have two piles coin a and coin b. I can take 1 coin and 2 from other.
// Tell me by giving you a and b value will i be able to empty them at the same time
// ANSWER-->
// a+b%3==0
// min(a,b)*2>=max(a,b)

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int min = m > n ? n : m;
    int max = m > n ? m : n;
    if (m + n % 3 == 0 && min * 2 >= max)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}