#include <iostream>

using namespace std;

double power(double x , int y) {
	if (y==0) {
		return 1;
	} 
	else if (y>0) {
		return x*power (x,y-1);
	}
	else {
		return (1/x)*power (x,y+1);
	}
}
int main() {
	double base;
	int exponent;
	cout<<"enter the base  : " ;
	cin>>base;
	cout<<"enter the exponent : " ;
	cin>>exponent;
	cout<<base<<"to the power of"<<exponent<<"is : "<<power(base,exponent)<<endl;
	return 0;
}