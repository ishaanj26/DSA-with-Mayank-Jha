// 2. Anton and Fairy Tale cf-786-C
// in this question we have n grains every day m grain are added and every its dray i graisna re deducted.
// the max amount of grain that be remains n . Find at what day the bag becomes empty

#include <bits/stdc++.h>
#define int long long
using namespace std;

int BF_return_days(int n,int m){
    int grains=n;
    for (size_t i = 0; i < n; i++)
    {
        grains=min(grains+m,n);
        grains=grains-i;
        if(grains<=0){
            return i;
        }
        
    }
    return n;
    
}

int Optimized_return_days(int n,int m){
    if(n<=m){
        return n;
    }
    int start=0;
    int end=1e10;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        int value=n-m;
        int check=(mid*(mid+1))/2;
        if(check>=value){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans+m;
    //formula is n - m - (k*(k+1)/2) <=0
    //n-m <= k*(k+1)/2
    // 0<=k*(k+1)/2<=10^18

}


int32_t main(){
    int n,m;
    cin>>n>>m;
    // cout<<BF_return_days(n,m);
    cout<<Optimized_return_days(n,m);
    return 0;
}