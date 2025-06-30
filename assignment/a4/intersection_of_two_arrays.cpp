// Intersection of two arrays
//  7
//  1 2 3 1 2 4 1
//  2 1 3 1 5 2 2
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> result;
map<int, int> freq;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        freq[value]++;
    }
    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if (freq[value] > 0)
        {
            result.push_back(value);
            freq[value]--;
        }
    }
    sort(result.begin(),result.end());
    cout<<"[";
    for (size_t i = 0; i <result.size(); i++)
    {
         cout<<result[i];
         if(i!=result.size()-1){
            cout<<", ";
         }
    }
     cout<<"]";
    
    return 0;
}