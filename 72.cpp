#include <iostream>

using namespace std;

int main() {
	int n,m;
	cout<<"enter the first positive integer (n): ";
	cin>>n;
	cout<<"enter the second positive integer (m): ";
	cin>>m;
	int quotient=0;
	int remainder=m;
	while (remainder>=n) {
		remainder -=n;
		quotient++;
	}
	cout<<"quotient of m divided by n: "<<remainder<<endl;
	return 0;
}