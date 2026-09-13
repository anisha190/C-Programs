#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y,z, rows;
	printf("How many rows should your pyramid have?");
	scanf("%d", & rows);

	for(x=1;x<=rows;x++){
		for(y=rows;y>=x;y--){
			printf(" ");
		}
		for (z=1;z<=x;z++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(x=1;x<=rows;x++){
		for (z=1;z<=x;z++){
			printf(" ");
		}
		for(y=rows;y>=x;y--){
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}
