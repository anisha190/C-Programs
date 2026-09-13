#include <stdio.h>

int main() {

    int list=0,choice,value;
    
    printf("Welcome to your to-do list. Please choose your plan of action from the menu below:\n");
    printf("1.Add tasks.\n 2.Delete tasks.\n 3.View current amount of tasks.\n 0.Exit program.\n");
    scanf("%d", & choice);
    
    while(choice!=0){
    	switch(choice){
    		case 1:
    			printf("How many tasks would you like to add?\n");
    			scanf("%d", & value);
    			while(value<1){
    				printf("Invalid number entered. Please enter again.\n");
    				scanf("%d", & value);
				}
    			if (list+value>=100 || list>=100){   //keeping 100 as the max limit to the list.
    			printf("Your list is full! Please complete and delete some tasks before entering new ones.");	
				}
				else {
					list+=value;
					if(list==100){
					printf("You have an full to-do list (100 tasks in store). Work harder!\n");	
					}
					else{
					printf("You now have %d tasks in your list.\n", list);
				    }
				  }
				break;
			case 2:
			    printf("How many tasks would you like to delete?\n");
    			scanf("%d", & value);
    			while(value<1){
    				printf("Invalid number entered. Please enter again.\n");
    				scanf("%d", & value);
				}
				if(list<value){
					printf("You do not have these many tasks in your list.\n");
				}
				else if(list==0){
					printf("You have an empty to-do list. Cannot delete anything from it.\n");
				}
				else{
					list-=value;
					if (list==0){
						printf("You have an empty to-do list. Good job!\n");
					}
					else{
						printf("You now have %d tasks in your list.\n",list);
					}
				}
			   break;
			case 3:
			  if(list==0){
			 	printf("You have an empty to-do list. Your to-do list has %d tasks. Good job!\n",list);
			  }   
			  else if (list==100){
			 	printf("You have an full to-do list. Your to-do list has a %d tasks. Work harder!\n",list);
			  }
			  else {
			 	printf("Your to-do list has %d tasks in it.\n",list);
			  }
			  break;
			default:
			 printf("Invalid option entered.\n"); 		
		}
		printf("Enter your next choice or enter 0 to exit the program.\n");
		scanf("%d",& choice);
	}
	
	return 0;
}
