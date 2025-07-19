// Non Repeating Character
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char NonRepeatingChar(string s)
{
    unordered_map<char, int> freq;
    char non_repating;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }
    bool isRepating = false;
    for (auto value : s)
    {
        if (freq[value] == 1)
        {
            return value;
        }
    }
    return '\0';
}
int main()
{
    int trials;
    cin >> trials;
    cin.ignore();
    while (trials)
    {
        string s;
        getline(cin, s);
        char result = NonRepeatingChar(s);
        if (result != '\0')
            cout << result << endl;
        else
            cout << -1 << endl;
        trials--;
    }

    return 0;
}