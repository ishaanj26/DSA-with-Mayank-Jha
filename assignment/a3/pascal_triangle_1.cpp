//IMP
//        1
//      1   1
//    1   2   1
//  1   3   3   1   , n=4

int ncr(int n,int r){
    int res =1;
    for (int i = 0; i < r; i++)
    {
        res=res* (n-i);
        res=res/(i+1);
    }
    
    return res;
}

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n-i+1; s++)
        { 
            cout<<"  ";
        }
        for (int j = 1; j <=i ; j++)
        {
            cout<<ncr(i-1,j-1)<<"    ";
        }
        cout<<endl;
        
    }

     
    return 0;
}