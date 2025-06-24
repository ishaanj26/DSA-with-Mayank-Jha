// 1 
// 11
// 111 
// 1001 
// 11111
// 100001
// Explanation
// For every odd number row print 1, odd number of times and for every even number row , 
// print first and last character as 1 and rest of middle characters as 0.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(!(i%2==0)){
			for(int j=1;j<=i;j++){
			cout<<"1";
		}
	}else{
		for(int j=1;j<=i;j++){
			if(j==1||j==i){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
	cout<<endl;
	}
	return 0;
}