#include <iostream>

using namespace std;

int main() {
	int A[5];
	int B[5];
	cout<<"enter 5 integers for array A: /n " ;
	for(int i=0;i<5;++i) {
		cin>>A[i];
	}
	cout<<"enter 5 integers for array B: /n " ;
	for(int i=0;i<5;++i) {
		cin>>B[i];
	}
	for(int i=0;i<5;++i) {
		int temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
	cout<<"array A after swapping: " ;
	for(int i=0;i<5;++i) {
		cout<<A[i]<<" ";
	}
	cout<<endl;
	
	cout<<"array B after swapping: " ;
	for(int i=0;i<5;++i) {
		cout<<B[i]<<" ";
	}
	cout<<endl;
	return 0;
}