// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i =1;i<=n;i++){
		for(int j = n;j>n-i;j-- ){
			cout<<j<<"\t";
		}
		for(int j=1;j<=(2*n-2*(i)+1);j++){
			cout<<"\t";
		};
		for(int j=n-i+1;j<=n;j++){
			cout<<j<<"\t";
		}
		cout<<endl;
	}
	for(int j=n;j>=0;j--){
		cout<<j<<"\t";
	}
	for(int j=1;j<=n;j++){
		cout<<j<<"\t";
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<j<<"\t";
		}
		for (int j=1;j<=2*i-1;j++){
			cout<<"\t";
		}
		for(int j=i;j<=n;j++){
			cout<<j<<"\t";
		}
		cout<<endl;
	}
	return 0;
}