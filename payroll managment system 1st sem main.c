#include <stdio.h>
#include <string.h>

int x;

struct employee{
	int id;
    char name[50];
    float basicSalary;
    float allowances;
    float deductions;
    float bonus;
	};

void input(struct employee employees[],int num_employees){
	
	for(x=0;x<num_employees;x++){
		printf("Enter the id for employee no.%d:\n",x+1);
		scanf("%d",&employees[x].id);
		printf("Enter the name for employee no.%d:\n",x+1);
		scanf("%s",&employees[x].name);
		printf("Enter the salary for employee no.%d:\n",x+1);
		scanf("%f",&employees[x].basicSalary);
		printf("Enter the allowances for employee no.%d:\n",x+1);
		scanf("%f",&employees[x].allowances);
		printf("Enter the deduction for employee no.%d:\n",x+1);
		scanf("%f",&employees[x].deductions);
		while(employees[x].deductions>employees[x].basicSalary){
			printf("Invalid amount entered. Please re-enter:\n");
			scanf("%f",&employees[x].deductions);
		}
		printf("Enter the bonus for employee no.%d:\n",x+1);
		scanf("%f",&employees[x].bonus);
	}
	
}

   float salaryCalculations(struct employee employees[]){
   	
   	float net_salary=0;
   	net_salary=employees[x].basicSalary+employees[x].allowances+employees[x].bonus-employees[x].deductions;
   	return net_salary;
   	
   }

  void display(struct employee employees[],int num_employees){
  	 printf("Employee ID | Name | Basic Salary | Allowances | Deductions | Bonus | Net Salary\n");
  	 
  	for(x=0;x<num_employees;x++){
  		printf("%d | %s | %.3f | %.3f | %.3f | %.3f | %.3f ",employees[x].id,employees[x].name,employees[x].basicSalary,employees[x].allowances,employees[x].deductions,employees[x].bonus,salaryCalculations(employees));
  		printf("\n");
	  }
  }



int main() {
	
	int num_employees;
	
	printf("Enter the number of employees you want to store information about:\n");
	scanf("%d",& num_employees);
	
	while(num_employees>50||num_employees<0){
		printf("Invalid number added. Please re-enter:\n");
		scanf("%d",&num_employees);
	}
	
	struct employee employees[num_employees];
	
	input(employees,num_employees);
	display(employees,num_employees);
	
	
	return 0;
}
