#include <iostream>

using namespace std;

int main() {
int salary,tax;
	cout<<"please enter the salary : " ;
	cin>>salary;
	if(salary < 6000000) {
		tax=salary*0;
	}
    else if(salary >= 6000000 && salary < 8000000 ) {
    	 tax=salary*0.05;
	}
    else if(salary >= 8000000 && salary < 10000000) {
    	tax=salary*0.10;
	}
	else if(salary >= 10000000 && salary < 14000000) {
		tax=salary*0.15;
	}
	else if(salary >= 14000000 && salary < 18000000) {
		tax=salary*0.20;
	}
	else if(salary >= 18000000 && salary < 25000000) {
		tax=salary*0.25;
	}
	else { 
	salary > 25000000;
		tax=salary*0.35;
}
salary=salary-tax;
		cout<<salary;
}