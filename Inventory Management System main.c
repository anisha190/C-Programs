#include <stdio.h>
int main() {
    int inventory = 1000;
    int choice, value;

   printf("Enter your number of choice from the menu:\n");
   printf("1.Add to inventory\n 2.Remove from inventory\n 3.Check inventory\n");
   scanf("%d", & choice);
    do { 
    switch(choice){
    case 1:
     printf("Enter the amount you want to add:\n");
     scanf("%d", & value);
     while (value<1){
	 printf("Invalid number. Renter the amount you want to add:\n");
     scanf("%d", & value);
	 }
	 inventory += value;
     printf("The inventory now has %d items.\n", inventory);
     break;
   case 2:
     printf("Enter the amount you want to remove from inventory:\n");
     scanf("%d", & value);
     while (value<1){
	 printf("Invalid number. Renter the amount you want to remove:\n");
     scanf("%d", & value);
	 }	
     if (inventory > value){
	  inventory -= value;
      printf("The inventory now has %d items.\n", inventory);
      }
     else 
     printf("Not enough items in stock.\n"); 
     break;
   case 3:
  	  printf("The inventory has %d items.\n", inventory);
  	 break;
    default:
    printf("Invalid choice.");
    }
    printf("Enter the next option you want to use.\n Enter 0 to exit.\n");
    scanf("%d", & choice);
    }while(choice !=0);
    
    return 0;
}


