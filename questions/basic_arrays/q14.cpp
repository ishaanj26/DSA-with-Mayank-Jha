// Nearly lucky numbers
//  NUMBER HAVING 4 OR 7 IS LUCKY NUMBERS
//  AND NUMBER OF 4 AND 7 BEING LUCKY NUMBER IS NEARLY LUCKY NUMBER

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        if (remainder == 4 || remainder == 7)
        {
            count++;
        }
        n = n / 10;
    }

    if (count == 0) {
        cout << "no" << endl;
        return 0;
    }

    while (true){
        int remainder = count % 10;
        if (remainder != 4 && remainder != 7){
            cout << "no" << endl;
            break;
        }
        count = count / 10;
        if(count == 0){
            cout << "yes" << endl;
            break;
        }
    }

    return 0;
}