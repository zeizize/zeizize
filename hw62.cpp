#include <iostream>

using namespace std;

int gcd(int x,int y){
	if(y==0) {
		return x;
	}
	else {
		return gcd(y,x%y);
	}
	}

int main() {
   int num1,num2;
   cout<<"enter the first number : " ;
   cin>>num1;
   cout<<"enter the second number : " ;
   cin>>num2;
   cout<<"the greatest common divisor"<<num1<<"and"<<num2<<"is : "<<gcd(num1,num2)<<endl;
	return 0;
}