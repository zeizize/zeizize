#include <iostream>

using namespace std;

int main() {

	int salary,tax;
	cout<<"please enter the salary : " ;
	cin>>salary;
	if(salary < 6000000) {
		tax=salary*0;
		salary=salary-tax;
	}
    else if(salary >= 6000000 && salary < 8000000 ) {
    	 tax=salary*0.05;
    	salary=salary-tax;
	}
    else if(salary >= 8000000 && salary < 10000000) {
    	tax=salary*0.10;
    	salary=salary-tax;
	}
	else if(salary >= 10000000 && salary < 14000000) {
		tax=salary*0.15;
		salary=salary-tax;
	}
	else if(salary >= 14000000 && salary < 18000000) {
		tax=salary*0.20;
		salary=salary-tax;
	}
	else if(salary >= 18000000 && salary < 25000000) {
		tax=salary*0.25;
		salary=salary-tax;
	}
	else { 
	salary > 25000000;
		tax=salary*0.35;
	    salary=salary-tax;
}
cout<<"your salary with tax is :"<<salary;
}