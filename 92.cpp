#include <iostream>

using namespace std;
int main() {
	int arr[10]= {5,3,8,1,9,4,6,7,2,10};
	int min1=INT_MAX;
	int min2=INT_MAX;
	for(int i=0;i<10;++i) {
		if(arr[i]<min1) {
			min2=min1;
			min1=arr[i];
		}
		else if (arr[i]<min2 && arr[i]!=min1) {
			min2=arr[i];
		}
	}
	cout<<"the second small element : "<<min2<<endl;
	return 0;
}