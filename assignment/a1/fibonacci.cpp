// 0
// 1 1
// 2 3 5
// 8 13 21 34

#include<iostream>
using namespace std;
int main() {
	int num0=0;
	int num1=1;
	int num;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1 && i==1){
				cout<<0<<'\t';
			}
			else if(j==1 && i==2){
				cout<<1<<'\t';
			}
			else{
				num=num0+num1;
				cout<<num<<"\t";
				num0=num1;
				num1=num;
			}
			
		}
		cout<<endl;
	}
	return 0;
}