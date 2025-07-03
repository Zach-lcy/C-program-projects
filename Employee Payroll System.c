// C program to creat Employee Payroll System
#include<stdio.h>
int main(){
	char Employee_name[50];
	float Basic_salary,grossSalary,netSalary,taxDeduction,overtimePay = 0;
	int Hoursworked,overtimeHours;
	char choice;
	
	do{
	printf("\nEnter Employee_name:");
	scanf("%[^\n]",Employee_name);
	printf("Enter Basic_salary:");
	scanf("%f",&Basic_salary);
	printf("Enter Hours worked in a week:");
	scanf("%d",&Hoursworked);
	
	//Overtime calculatiion
	if(Hoursworked>40){
		overtimeHours=Hoursworked-40;
		overtimePay=overtimeHours*10.0;
	}else{
		overtimePay=0;
	}
	
	//Gross salary
	grossSalary=Basic_salary + overtimePay;
	
	//Tax calculation
	if(Basic_salary>2000){
		taxDeduction=grossSalary*0.15;
	}else if(Basic_salary<=2000){
		taxDeduction=grossSalary*0.05;
	}
	//Net salary
	netSalary=grossSalary-taxDeduction;
	
	//Displaying the payroll report
	printf("\n.........Payroll Report...........\n");
	printf("Basic_salary :Kshs %.2f\n",Basic_salary);
	printf("Hoursworked  : %d\n",Hoursworked);
	printf("ovetimePay   : Kshs %.2f\n",overtimePay);
	printf("grossSalary  : Kshs %.2f\n",grossSalary);
	printf("taxDeduction : Kshs %.2f\n",taxDeduction);
	printf("netSalary    : Kshs %.2f\n",netSalary);
	printf("......................................\n");
	
	//Ask if want to processanother employee
	printf("\nDo you want to process another employee?(Y/N):\n\n");
	scanf("%c",&choice);
	
	}while(choice == 'Y' || 'N');
	printf("\nExiting Payroll system. Thank you!\n");
	return 0;
}