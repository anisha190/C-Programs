#include <stdio.h>

int main() {
	float marks,avg=0;
	int x=0;
	char end;
	
	do {
		x++;
		printf("Enter your marks for subject %d from a 100:\n",x);
		scanf("%f", & marks);
		while(marks<0 || marks>100){
			printf("Invalid marks entered. Please anter again.\n");
			scanf("%f", & marks);
		}
		avg+=marks;	
		printf("Do you wish to enter more marks? Enter 'y' if yes or 'n' if no.\n");
		scanf(" %c", & end);	
	}while(end!='n');
	
	avg/=x;
	
	if (avg>=90){
		printf("Your grade is A*.\n");
		printf("Your average is: %.3f\n",avg);
	}
	else if (avg>=80){
		printf("Your grade is A.\n");
		printf("Your average is: %.3f\n",avg);
	}
	else if (avg>=70){
		printf("Your grade is B.\n");
		printf("Your average is: %.3f\n",avg);
	}
	else if (avg>=60){
		printf("Your grade is C.\n");
		printf("Your average is: %.3f\n",avg);
	}
	else if (avg>=50){
		printf("Your grade is D.\n");
		printf("Your average is: %.3f\n",avg);
	}
	else if (avg>=40){
		printf("Your grade is E.\n");
		printf("Your average is: %.3f\n",avg);
	}
	else if (avg<40){
		printf("Your grade is F.\n");
		printf("Your average is: %.3f\n",avg);
	}
	
	printf("Your grading has been judged by the following criteria:\n");
	printf("100-90= A*\n 89-80= A\n 79-70= B\n 69-60= C\n 59-50= D\n 49-40=E\n 39-0=F\n");
	
	return 0;
}
