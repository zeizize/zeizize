#include <iostream>

using namespace std;
 
 int fact(int n) {
 	if(n==0) {
 	return 1;
	 }
	 else {
	return n*fact(n-1);
	 }
 }
    int sin(int x){
    	int a=x*x*x/fact(3);
    	int b=x*x*x*x*x/fact(5);
    	int c=x*x*x*x*x*x*x/fact(7);
    	int d=x-a+b-c;
    	return d;
	}
	int cos(int x) {
		int A=x-x/fact(2);
		int B=x*x*x*x/fact(4);
	    int C=x*x*x*x*x*x/fact(6);
		int D=1-A+B-C;
		return D;
	}
int main() {
	int x;
	cout<<"enter the value of x : ";
	cin>>x;
	float tan=sin(x)/cos(x);
	cout<<tan;
	return 0;
}