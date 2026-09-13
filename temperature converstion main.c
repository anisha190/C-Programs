#include <stdio.h>

int main() {
	
	float temp;
	int choice;
	printf("Welcome! Kindly choose your desired converstion and enter the initial temperature:\n");
	printf("1.Celsius to Fahrenheit\n 2.Fahrenheit to Celsius\n 3.Celsius to Kelvin\n 4.Kelvin to Celsius\n 5.Fahrenheit to Kelvin\n 6.Kelvin to Fahrenheit\n");
	scanf("%d", & choice);
	
	do{
	printf("Enter your initial temperature:\n");
	scanf("%f", & temp);

	switch(choice){
		case 1:
		 printf("The temperature in Fahrenheit would be: %.3f\n", (temp*9/5)+32);
		 break;
		case 2:
		 printf("The temperature in Celsius would be: %.3f\n",(temp-32)*5/9);
		 break;
		case 3:
		 printf("The temperature in Kelvin would be: %.3f\n",temp+273.15);
		 break;
		case 4:
		 printf("The temperature in Celsius would be: %.3f\n",temp-273.15);
		 break;
		case 5:
		 printf("The temperature in Kelvin would be: %.3f\n",((temp-32)*5/9)+273.15);
		 break; 
		case 6:
		 printf("The temperature in Fahrenheit would be: %.3f\n", ((temp-273.15)*9/5)+32);
		 break; 
		default:
		printf("Invalid choice entered.\n");		 
	}
	
	printf("\n");
	printf("Do you wish to make more converstions? Enter the next choice if yes.\n Enter 0 to exit the program.\n");
	scanf("%d", & choice);	
	} while (choice!=0);
	
	return 0;
}

