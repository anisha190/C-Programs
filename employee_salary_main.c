#include <stdio.h>
#include <stdlib.h>
//Take gross salary of an employee (e.g. 50000) as input and print net salary along with all deduction details
//as output. The Tax Rate may vary (No tax < 50000, 2.5% tax >= 50000 and less than 100000, 4.5% tax >=
//100000 and less than 300000, 5.5% tax >= 300000. Deduct medical insurance 1% for all the ranges. Provident
//Funds 2.5% for all. The user input should be a positive number
int main() {
	
	int salary=0;
	float tax_rate=0;
	float net_salary=0;
	
	printf("Enter your salary:\n");
	scanf("%d", & salary);
	
	while (salary<=0){
	printf("Invalid entry. Try again:\n");
	scanf("%d", & salary);
	}
	
	if(salary< 50000){
	tax_rate = 0;}
   else if (salary>= 50000 && salary<100000){
     tax_rate= 2.5;}
	else if (salary>=100000 && salary<300000){
     tax_rate= 4.5;	}
	else if (salary>= 300000){
     tax_rate= 5.5;}
	
	net_salary= (salary-(salary*tax_rate/100));
	printf("Your net salary is:%.3f\n", net_salary - (salary *0.01) - (salary *0.025));
	printf("Your total salary was: %d\n", salary);
	printf("Amount deducted for tax is: %.2f\n", salary*tax_rate/100);
	printf("Amount deducted for medical insurance is: %.2f\n", salary * 0.01);
	printf("Amount deducted for provident funds is: %.2f\n", salary*0.025);
	printf("Total amount deducted is: %.2f\n", (salary*0.025)+(salary * 0.01)+(salary*tax_rate/100));
	
	return 0;
}
