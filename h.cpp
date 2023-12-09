#include <iostream>

using namespace std;

int main() {
char ch;
cout<<"please enter an elphabet : " ;
cin>>ch;
switch(ch) {
	case 'a':
	case 'i':
	case 'u':
	case 'e':
	case 'o':
	cout<<"vowel";
		break;
		default:
			cout<<"not a vowel";
		}
}