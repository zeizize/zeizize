#include <iostream>

using namespace std;

int main() {
	int arr[10]= {1,2,3,4,5,6,7,8,9};
	int num;
	cout<<"enter the number to insert into the array: ";
	cin>>num;
	int i=8;
	while(i>=0 && arr[i]>num) {
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=num;
	cout<<"array after insertion: " ;
	for (int j=0;j<10;j++) {
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	return 0;
}