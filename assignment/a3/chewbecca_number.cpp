// invert he number if it less otherwise dont
//  Sample Input
//  4545
//  Sample Output
//  4444

// IMP
// TO CONVERT FROM CHAR TO INT WE SUBTRACT BY '0'->- '0'
// TO CONVERT FROM INT TO CHAR WE ADD BY '0'->+
//     '0'
// We also have to make sure wehn first digit is 9 we dont invert it otherwise it will become 1 less digit number

#include <iostream>
    using namespace std;

int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        int digit= n[i]-'0';
        if (digit > 9 - digit)
        {
            if(i==0 && digit==9){
                continue;
            }
            digit=9-digit;
            n[i] = digit + '0';
        }
    }
    cout << n;
    return 0;
}