#include <stdio.h>

int main() {
	
	float num1,num2;
	char sign;
	
	printf("Welcome! Kindly choose your desired operator from the menu below and enter two numbers:\n");
	printf("1.+ for addition\n 2.- for subtraction\n 3.* for multiplication\n 4./ for division\n");
	scanf(" %c", & sign);
	
	do{
	printf("Enter your first number:\n");
	scanf("%f", & num1);
	printf("Enter your second number:\n");
	scanf("%f", & num2);
	
	switch(sign){
		case'+':
			printf("The sum is:%.2f\n", num1+num2);
			break;
		case '-':
		 printf("The subtraction is:%.2f\n", num1-num2);
		 break;
		case '*':
		 if (num1==0 || num2==0){
		 	printf("Invalid numbers for multiplication.\n");
		 }	
		 else {
		 	printf("The product is:%.2f\n", num1*num2);
		 }
		 break;
		case'/':
			if (num1==0 || num2==0){
		 	printf("Invalid numbers for division.\n");
		 }	
		 else {
		 	printf("The division is:%.3f\n", num1/num2);
		 }
		 break;
		default:
		printf("Invalid operator entered.\n");		 
	}
	
	printf("Do you wish to make more calculations? Enter the next operator if yes.\n Enter x to exit the program.\n");
	scanf(" %c", & sign);	
	} while (sign!='x');
		
	return 0;
}
