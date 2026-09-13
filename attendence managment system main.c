#include <stdio.h>
#include <string.h>

int main() {
	
int x;

 struct attendence{
 	char name[30];
 	int id, present;
 };
 
 struct attendence students[5];
 
 for(x=0;x<5;x++){
 	printf("Enter the name for student %d:\n",x+1);
 	scanf("%s",&students[x].name);
 	printf("Enter the id for student %d:\n",x+1);
 	scanf("%d",& students[x].id);
 	printf("Were they present? Enter 1 for yes.\n");
 	scanf("%d",& students[x].present);
 }
 
 for(x=0;x<5;x++){
 	printf("%s\n",students[x].name);
 	printf("%d\n",students[x].id);
 	if(students[x].present==1){
 		printf("Present.\n");
	 }
	else{
	 	printf("Absent.\n");
	 }
 }

	return 0;
}
