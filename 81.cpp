#include <iostream>

using namespace std;

int main() {
	int numbers[10];
	cout<<"enter 10 integers:/n" ;
	for(int i=0;i<10;++i) {
		cin>>numbers[i];
	}
      numbers,numbers+10;
	double sum=0;
	for(int i=1;i<9;++i) {
		sum =numbers[i];
	}
	double average = sum/8;
	cout<<"average of the middle 8 numbers: "<<average<<endl;
	return 0;
}