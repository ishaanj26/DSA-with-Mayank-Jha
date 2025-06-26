// // TWO KNIGHTS
// // here we have to place 2 knights on the nxn boord and find the possible places taht they dont attack each other
// // we will be given n which is rows and columns
// // for n=5
// // we have to find 1x1,2x2,3x3,4x4

// FORMULA->
// We find the combination of the knights on the board suing the
// ncr formula where n is n**2 and r is 2, n is 1,2,3,4,5 for n=5 we will have to find the answer for all 5 events seperately

// ncr=x(x-1)/2
// attacks possible are 4.(k-1).(k-2)

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long ncr = 1, attacks = 0;
        ncr = i * i * (i * i - 1)/2;
        if(i>2){
            attacks=4*(i-1)*(i-2);
        }
        cout<<ncr-attacks<<endl;
    }

    return 0;
}