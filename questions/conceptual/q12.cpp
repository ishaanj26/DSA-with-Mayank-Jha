#include <iostream>
// #include <string>
using namespace std;

int main()
{
    bool flag = true;
    string s;
    getline(cin, s);
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
        {
            flag = false;
            break;
        }
        else
        {
            left++;
            right--;
        }
    }
    if (flag)
    {
        cout << "Pallindrome";
    }
    else
    {
        cout << "Not a Pallindrome";
    }
    return 0;
}
