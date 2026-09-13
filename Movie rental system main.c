#include <stdio.h>

int main() {
    int aladin=5,tangled=5,inception=5,flipped=5,meanGirls=5;
	int rent1=150, rent2=200, rent3=175, rent4=250, rent5=225;
	int choice,movie,amount,end,days=0;
	
	printf("Welcome! Please pick your choice from the menu below:\n");
		
	do{
	printf("1.Rent a movie\n 2.Return a movie\n 3.Check the availability of a movie\n");
	scanf("%d",& choice);
	printf("Movies:\n 1.Aladin\n 2.Tangled\n 3.Inception\n 4.Flipped\n 5.Mean Girls\n Rent is charged by the day.\n");
	switch(choice){
		case 1:
			while(amount<=5 || end!=0){
				printf("Which movie would you like to rent?\n P.S. You can not rent more than 5 at a time.\n");
				scanf("%d", & movie);
				switch(movie){
					case 1:
					if (aladin>0){
						printf("You have rented Aladin for %d rs a day! Kindly return in a timely manner.\n",rent1);
						aladin--;
						amount++;
					} 
					else {
						printf("This movie is out of stock.\n");
					}
					break;
					case 2:
					if (tangled>0){
						printf("You have rented Tangled for %d rs a day! Kindly return in a timely manner.\n",rent2);
						tangled--;
						amount++;
					} 
					else {
						printf("This movie is out of stock.\n");
					}
					break;
					case 3:
					if (inception>0){
						printf("You have rented Inception for %d rs a day! Kindly return in a timely manner.\n",rent3);
						inception--;
						amount++;
					} 
					else {
						printf("This movie is out of stock.\n");
					}
					break;
				    case 4:
					if (flipped>0){
						printf("You have rented Flipped for %d rs a day! Kindly return in a timely manner.\n",rent4);
						flipped--;
						amount++;
					} 
					else {
						printf("This movie is out of stock.\n");
					}
					break;
					case 5:
					if (meanGirls>0){
						printf("You have rented Mean Girls for %d rs a day! Kindly return in a timely manner.\n",rent5);
						meanGirls--;
						amount++;
					} 
					else {
						printf("This movie is out of stock.\n");
					}
					break;
					default:
						printf("Invalid option entered.\n");		
			}
			printf("Enter 0 if you no longer wish to rent more. Enter 1 if you do wish to return more.\n");
			scanf("%d", & end);
			}
			break;
		case 2:
			while (end!=0){
		     printf("Which movie would you like to return?\n");
			 scanf("%d", & movie);
			 printf("How many days did you rent this for?\n");
			 scanf("%d", & days);
			 while(days<0){
			 	printf("Invalid number of days entered. Please enter again.\n");
			 	scanf("%d", & days);
			 }
				switch(movie){
					case 1:
				     printf("You have returned Aladin. Your total rent will be: %d rs\n",rent1*days);
					 aladin++;
					 break;	
					case 2:
					 printf("You have returned Tangled. Your total rent will be: %d rs\n",rent2*days);
					 tangled++;
					 break;
					case 3:
				 	 printf("You have returned Inception. Your total rent will be: %d rs\n",rent3*days);
					 inception++;
					 break;
				    case 4:
					 printf("You have returned Flipped. Your total rent will be: %d rs\n",rent4*days);
					 flipped++;
					 break;
					case 5:
					 printf("You have returned Mean Girls. Your total rent will be: %d rs\n",rent5*days);
					 meanGirls++;
					 break;
					default:
						printf("Invalid option entered.\n");		
			}
			printf("Enter 0 if you no longer wish to return more. Enter 1 if you do wish to return more.\n");
			scanf("%d", & end);
	    	}
		 break;
		case 3:
			while (end!=0){
		     printf("Which movie would you like to check for availability?\n");
			 scanf("%d", & movie);
				switch(movie){
					case 1:
				     printf("Aladin left in stock: %d\n",aladin);
					 break;	
					case 2:
					 printf("Tangled left in stock: %d\n",tangled);
					 break;
					case 3:
				 	 printf("Inception left in stock: %d\n",inception);
					 break;
				    case 4:
					 printf("Flipped left in stock: %d\n",flipped);
					 break;
					case 5:
					 printf("Mean Girls left in stock: %d\n",meanGirls);
					 break;
					default:
						printf("Invalid option entered.\n");		
			}
			printf("Enter 0 if you no longer wish to check more. Enter 1 if you do wish to check more.\n");
			scanf("%d", & end);
	    	}
		 break;
		 default:
		  printf("Invalid option entered.\n");			
	}
	printf("Enter 1 to choose next option or enter 0 to exit program.\n");
	scanf("%d",& end);
	}while (end!=0);
		
	return 0;
}
