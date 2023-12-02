#include <iostream>

using namespace std;

int main() {
int x,y,z;
cout<<"enter the value of x:  " ;
cin>>x;
cout<<"enter the value of y:  " ;
cin>>y;
cout<<"enter the value of z:  " ;
cin>>z;
int result1=(x-y)*(x+z);
int result2=(x+y+z)*(x+y+z)+(1);
int finalresult=(x-y)*(x+z)/(x+y+z)*(x+y+z)+(1);
cout<<finalresult<<endl;
}