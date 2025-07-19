#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    map<char,int>freq;
    int maxCount=0;
    char maxChar;
    for (size_t i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
        if(maxCount<freq[s[i]]){
            maxChar=s[i];
            maxCount=freq[s[i]];
        }
    }

    cout<<maxChar;
    
    
    return 0;
}