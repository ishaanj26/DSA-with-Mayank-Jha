#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> map;
    int start = 0;
    int maxLength = INT16_MIN, count = 0;
    if (s.length() == 0)
    {
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        map[s[i]]++;
        count++;
        while (map[s[i]] > 1 && start <= i)
        {
            map[s[start]]--;
            start++;
            count--;
        }
        maxLength = max(maxLength, count);
    }

    return maxLength;
}
int main()
{
    string s;
    getline(cin, s); // reads full line including spaces
    cout << lengthOfLongestSubstring(s);

    return 0;
}