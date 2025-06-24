//  1******
//  12*****
//  123****
//  1234***
//  12345**
//  123456*
//  1234567

 #include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		for (int j=0;j<i+1;j++){
			cout<<j+1;
		}
		for (int j=i+1;j<n;j++){
			cout<<"*";
		}
		    cout << endl;
	}
	return 0;
}