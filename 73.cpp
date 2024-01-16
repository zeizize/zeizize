#include <iostream>

using namespace std;

int main() {
	int n;
	cout<<"enter a positive integer: " ;
	cin>>n;
	cout<<"all divisors of "<<n<<"are: ";
	for(int i=1;i<=n;i++) {
		if(n%i==0) { 
		cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}