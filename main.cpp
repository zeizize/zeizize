#include <iostream>

using namespace std;

int main() {
float num1,num2,result;
char op;
cout<<"please enter expression  :  ";
cin>>num1>>op>>num2;
switch(op) {
	case'+':
		result=num1+num2;
		break;
	case'-':
		result=num1-num2;
		break;
	case'*':
		result=num1*num2;
		break;
	case'/':
		result=num1/num2;
}
cout<<result;
}