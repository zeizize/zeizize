#include <iostream>
using namespace std;

bool isprime(int num) { 
	if(num<=1) {
		return false;
	}
	for(int i=2; i * i<=num;i++) {
		if(num%i==0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cout<<"enter a positive integer n: ";
	cin>>n;
	cout<<"all prime numbers less than"<<n<<"are: " ;
	for(int i=2;i<n;i++) {
		if(isprime(i)) {
			cout<<i<<" ";
		}
	}
	return 0;
}