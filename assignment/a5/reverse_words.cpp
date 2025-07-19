#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    vector<string> parts;
    while (getline(cin, s, '.'))
    {
        parts.push_back(s);
    };
    for (size_t i = 0; i < parts.size(); i++)
    {
        cout << parts[i] << " ";
    }

    return 0;
}