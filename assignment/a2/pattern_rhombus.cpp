    				// 	    1
                    //    2 3 2
                    //  3 4 5 4 3
                    //    2 3 2
                    //      1
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++){
			cout<<"\t";
		}
		int num=i;
		for(int j=1;j<=i;j++){
			cout<<num<<"\t";
			num++;
		}
		num-=2;
		for(int j=1;j<i;j++){
			cout<<num<<"\t";
			num--;
		}
		cout<<endl;
		
	}
	for(int i=1;i<=n-1;i++){
			for(int j=1;j<=i;j++){
				cout<<"\t";
			}
			int num=n-i;
			for (int j=1;j<=n-i;j++){
			cout<<num<<"\t";
			num++;
			}
			num=num-2;
			for (int j =1;j<n-i;j++){
				cout<<num<<"\t";
				num--;
			}

			cout<<endl;
		}
	return 0;
}