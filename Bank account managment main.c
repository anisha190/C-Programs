#include <stdio.h>

int main() {
	float balance=0;
    int choice =0;
    float value =0;
    
    printf("Enter your bank balance:\n");
    scanf("%f",& balance);

   printf("Enter your number of choice from the menu:\n");
   printf("1. Withdraw\n 2. Deposit\n 3. Check balance\n Enter 0 to exit program.\n");
   scanf("%d", & choice);
   
    while(choice !=0) {
   
    switch(choice){
    case 1:
     printf("Enter the amount you want to withdraw:\n");
     scanf("%f", & value);
     while (value<0){
	 printf("Invalid number. Renter the amount you want to withdraw:\n");
     scanf("%f", & value);}
     if (balance > value)
     {balance -= value;
     printf("Your remaining balance is:%.3f\n", balance);}
     else 
     printf("Insufficent balance\n"); 
     break;
 
   case 2:
     printf("Enter the amount you want to deposit:\n");
     scanf("%f", & value);
     while (value<0){
	 printf("Invalid number. Renter the amount you want to deposit:\n");
     scanf("%f", & value);}	
     balance += value;
     printf("Your new balance is:%.3f\n", balance);
     break;

   case 3:
  	 printf("Your balance is:%.3f\n", balance);
  	 break;
   
    default:
    printf("Invalid choice.");
    break;
    }
    
    printf("Enter the next option you want to use.\n Enter 0 to exit.\n");
    scanf("%d", & choice);
    }

	return 0;
}
