#include <iostream>
 
using namespace std;

int main() {
char ch;
cout<<"please enter an elphabet : " ;
cin>>ch;
switch(ch) {
	case 'a':
	case 'A':
	case 'i':
	case 'I':
	case 'u':
	case 'U':
	case 'e':
	case 'E':
	case 'o':
	case 'O':
	cout<<"vowel";
		break;
		default:
			cout<<"not a vowel";
}
}