#include <iostream>
#include <string>
using namespace std;

int main() {
    string s ;
    getline(cin, s);
    for (size_t i = 0; i < s.length(); i++)
    {
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }else if(islower(s[i])){
            s[i] = toupper(s[i]);
        }
        cout<<s[i];
    }
    
    return 0;
}