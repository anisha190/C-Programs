#include <stdio.h>

int main() {
	
	int t1,ratio,n,x,tempN,tempR,tn;
	
	printf("Enter the first term of the series:\n");
	scanf("%d",& t1);
	printf("Enter the common ratio of the series:\n");
	scanf("%d",& ratio);
	printf("Enter the number of terms in the series:\n");
	scanf("%d",& n);
	
	tn=n;

	for (x=0,n=1;x<tn;x++,n++){
		tempR=1;	
		tempN=n-1;
		while(tempN>=1){
			tempR*=ratio;
			tempN--;
		}
		printf("The %d term is: %d.\n",x+1,(t1*tempR));
	}
	
	return 0;
}
