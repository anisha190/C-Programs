#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int choice=0;
	float total=0;
	int quantity=0;
	
	printf("Welcome! Kindly choose what you want to order from the following:\n");
	printf("1.Fries rs.100 \n 2.Pizza rs.570\n 3.Pasta rs.825\n 4.BBQ rs.900\n 5.Burger rs.450\n");
	scanf("%d", & choice);
    
	
	do{
		printf("Enter the quantity of item:\n");
        scanf("%d", & quantity);
        while(quantity<1){
        	printf("Invalid quantity entered. Please enter another value:\n");
        	scanf("%d",& quantity);
		}
		
		switch (choice){
			case 1:
				total=total + (100*quantity);
				printf("Fries have been added to your cart.\n");
			break;
			case 2:
				total=total + (570*quantity);
				printf("Pizza have been added to your cart.\n");
			break;
			case 3:
				total=total + (825*quantity);
				printf("Pasta have been added to your cart.\n");
			break;
			case 4:
				total=total + (900*quantity);
				printf("Fries have been added to your cart.\n");
			break;
			case 5:
				total=total + (450*quantity);
				printf("Burger have been added to your cart.\n");
			break;
			default:
				printf("Invalid choice entered.\n");
		}
		
		printf("What more do you want to add in your cart? Enter 0 if to finalise your order\n");
		scanf("%d", & choice);
	}while(choice!=0);
	
	printf("Your total amounts to:rs.%.3f\n Your food will arrive shortly. Enjoy!", total);
	
	return 0;
}
