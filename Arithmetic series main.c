#include <stdio.h>

int main() {
	
	int a,d,n,x,y;
	
//without array	
	printf("Enter the first term of the series:\n");
	scanf("%d",& a);
	printf("Enter the common difference of the series:\n");
	scanf("%d",& d);
	printf("Enter the total number of terms in the series:\n");
	scanf("%d",& y);
	
	for (x=0,n=1;x<y;x++,n++){
		printf("The %d term is: %d.\n",x+1, (a+((n-1)*d)));
	}
	
	printf("\n");
	
//with array
    int t[3]={a,d,1};
	
	for (x=0;x<y;x++,t[2]++){
		printf("The %d term is: %d.\n",x+1, (t[0]+((t[2]-1)*t[1])));
	}	
	
	return 0;
}
