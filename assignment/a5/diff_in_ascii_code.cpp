#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    cout<<s[0];
    for (size_t i = 1; i < s.length(); i++)
    {
        cout<<int(s[i]-s[i-1])<<s[i];
        
    }
    return 0;
}