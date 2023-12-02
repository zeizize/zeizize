#include <iostream>

using namespace std;  

int main() {
float x,y,z,A,B,C,D,E;
cout<<"enter the value of x:  " ;
cin>>x;
cout<<"enter the value of y:  " ;
cin>>y;
cout<<"enter the value of z:  " ;
cin>>z;
A=(x-y)*(x+z);
B=(x+y+z);
C=(B*B);
D=(C+1);
E=(x-y)*(x+z)/(D);
cout<<E;
}