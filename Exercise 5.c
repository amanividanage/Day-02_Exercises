// calculating the monthly salary of an employee

#include <stdio.h>
#include <stdlib.h>
int main(){
	 int hours, salary, tot_salary;
     printf("Enter the no. of hours working:");
    scanf("&d", &hours);

	printf("Enter the salary per hour:");
	scanf("&d", &salary);
	tot_salary=  salary * hours;
	printf("The total salary= %d", tot_salary);
	return 0;
	
	
}