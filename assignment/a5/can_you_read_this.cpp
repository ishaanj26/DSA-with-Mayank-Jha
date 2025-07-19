#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    for (size_t i = 0; i < s.length(); i++)
    {
        if(isupper(s[i])){
            if(i!=0){cout<<'\n';}
            cout<<s[i];
        }else{
            cout<<s[i];
        }
    }
    
    return 0;
}