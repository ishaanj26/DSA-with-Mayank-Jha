#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arrA[a];
    int arrB[b];
    for (size_t i = 0; i < a; i++)
    {
        cin >> arrA[i];
    }
    for (size_t i = 0; i < b; i++)
    {
        cin >> arrB[i];
    }
    for (size_t i = 0; i < b; i++)
    {
       cout<< upper_bound(arrA,arrA+a,arrB[i])-arrA<<" ";

    }

    return 0;
}