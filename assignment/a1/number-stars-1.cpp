// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			  cout << j << " ";
		}
		int comparision=2*(i-1)-1;
		if(i>1){
			for (int j=1;j<=comparision;j++){
				cout<<"* ";
			}
		}
		
		cout<<endl;
	}
	return 0;
}