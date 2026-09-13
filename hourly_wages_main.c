#include <stdio.h>
#include <stdlib.h>

int main() {

 int TEmployee =0;
 float HourlyRate=0;
 float hours=0;
 char end;
 float total_salary=0;
 char category;
     
  printf("Welcome! Enter the hours worked and hourly rate for each of your employees.\n");
  printf("Would you like to enter new data? y or n.\n");
  scanf(" %c", & end);
  
  while (end != 'n'){
  	
  	printf("Enter the hourly salary rate:\n");
  	scanf("%f", & HourlyRate);
  	printf("Enter the hours worked:\n");
  	scanf("%f", & hours);
  	 
  	total_salary= HourlyRate * hours;
	  if (total_salary > 2000){
	  	total_salary = total_salary + (total_salary*0.1);
	  }
	printf("Their total salary is:%.3f\n", total_salary);
	TEmployee ++;
	  
	  if (total_salary<=1000){
	  	category= 'l'; }
	  else if (total_salary<=2000){
	  		category= 'm';}
	  else if (total_salary>2000){
	     category = 'h';}		
	  		
  	switch(category){
  		case 'l':
  			printf("Low salary category.\n");
  			break;
  		case 'm':
  			printf("Medium salary category.\n");
  			break;
		case 'h':
  			printf("High salary category.\n");
  			break;	  	
	  }	
	printf("Would you like to enter new data? y or n.\n");
    scanf(" %c", & end); 
  }
  
  printf("Total number of employees is:%d\n", TEmployee);

	return 0;
}
