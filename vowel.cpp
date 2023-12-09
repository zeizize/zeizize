#include <iostream>

using namespace std;

int main() {
char ch;
cout<<"please enter an elphabet : " ;
cin>>ch;
switch(ch) {
case 'a':
	ch='a';
case 'A':
	ch='A';
case 'i':
	ch='i';
case 'I':
	ch='I';
case 'u':
	ch='u';
case 'U':
	ch='U';
case 'e':
	ch='e';
case 'E':
	ch='E';
case 'o':
	ch='o';
case 'O':
	ch='O';
	cout<<"is a vowel";
	break;
	default:
	cout<<"not a vowel";
}


}