#include <iostream>

using namespace std;
int power(int base, int exponent) {
	int result=1;
	for (int i=0; i<exponent; i++) {
		result*=base;
	}
	return result;
}

int main() {
	 int base;
	 int exponent;
	 cout<<"enter the base  : " ;
	cin>>base;
	cout<<"enter the exponent : " ;
	cin>>exponent;
	 int result=power(base,exponent);
	 cout<<base<<"to the power of"<<exponent<<"is : "<<result<<endl;
	return 0;
}