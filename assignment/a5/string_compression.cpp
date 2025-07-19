#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    map<char, int> freq;
    for (size_t i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }
    for (auto value : freq)
    {
        cout << value.first;
        if (value.second > 1)
            cout << value.second;
    }
    return 0;
}