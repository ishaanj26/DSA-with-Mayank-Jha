#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    for (size_t i = 0; i < s.length(); i++)
    {
        int Asci= s[i];
        if(i%2==0){
            cout<<char(Asci+1);
        }else{
            cout<<char(Asci-1);
        }
    }
    
    return 0;
}