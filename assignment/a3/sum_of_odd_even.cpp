// Sample Input
// 2635
// sum of odd digits and even digit
// Sample Output
// 11
// 5

#include<iostream>
using namespace std;
int main() {
	int num ;
	cin>>num;
	int evenSum=0;
	int oddSum=0;
	int counter=1;
	int remainder;
	while(num>0){
		remainder=num%10;
		if(counter%2==0){
			evenSum+=remainder;
		}else{
			oddSum+=remainder;
		}
		counter++;
		num/=10;

	}
	cout<<oddSum<<endl<<evenSum;
	return 0;
}