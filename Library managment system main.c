#include <stdio.h>
#include <stdlib.h>

int main() {
	int books = 5000;
	int choice, value;
	
	printf("Welcome to the library! Please choose your plan of action from the menu below:\n");
	printf("1.Borrow books\n 2.Return books\n 3.Check the number of available books\n 0.To exit the program.\n");
	scanf("%d", & choice);
	
	while (choice!=0){
		switch(choice){
			case 1:
				printf("How many books would you like to borrow?\n");
				scanf("%d", & value);
				while(value<1){
					printf("Invalid amount entered. Please enter again:\n");
					scanf("%d",& value);
				}
				if(books>value){
					books-=value;
					printf("You have successfully borrowed %d books. The library now has %d left.\n",value,books);		
				}
				else{
					printf("The library currently does not have enough books to meet your request.\n");
				} 
				break;
			case 2:
			 printf("How many books would you like to return?\n");
				scanf("%d", & value);
				while(value<1){
					printf("Invalid amount entered. Please enter again:\n");
					scanf("%d",& value);
				}
				books+=value;
				printf("You have successfully returned %d books. The library now has %d.\n",value,books);	
				break;
			case 3:
		     printf("The library currently has %d books in store.\n",books);	
		     break;
			default:
			printf("Invalid option entered.\n");				
		}
		printf("Enter your next choice:\n");
		scanf("%d", & choice);
	}
	
	return 0;
}
