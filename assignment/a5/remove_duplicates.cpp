// Remove Duplicates
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 ;
    getline(cin,s1);
    string s2="";
    s2+=s1[0];
    for (size_t i = 1; i < s1.length(); i++)
    {
        if(s1[i]!=s1[i-1]){
            s2+=s1[i];
        }
    }
    cout<<s2;
    return 0;
}