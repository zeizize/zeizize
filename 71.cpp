#include <iostream>

using namespace std;

int power(int base,int exponent) {
	if(exponent==0) {
		return 1;
	}
	return base*power(base,exponent-1);
}
int main() {
	int base,exponent;
	cout<<"enter the base: " ;
	cin>>base;
	cout<<"enter the exponent : " ;
	cin>>exponent;
	int result=power(base,exponent);
	cout<<base<<"raised to the power of"<<exponent<<"is: "<<result<<endl;
	return 0;
}