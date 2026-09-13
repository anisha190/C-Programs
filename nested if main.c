#include <stdio.h>
#include <stdlib.h>

int main() {
	/*input three numbers and tell which is the greatest*/
	int num1,num2,num3;
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	// num1=10 num2=13 num3=17
	if(num1>num2){
		if(num1>num3){
			printf("num1 is the greatest");
		}
		else {
			printf("num3 is the greatest");
		}
	}
	else if(num2>num3){
		printf("num2 is the greatest");
	}
	else{
		printf("num3 is the greatest");
	}		
		
	return 0;
}
