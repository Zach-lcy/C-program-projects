#include<stdio.h>

int main(){
     char Name;
	int Electricity_units;
	float bill;
	char choice;
	
	do{
		printf("Enter your Name:");
		scanf("%s", &Name);
		printf("Enter Electricity_units used:");
		scanf("%d", &Electricity_units);
		
		//calculate bills using simple if-else
		if(Electricity_units<= 100){
			bill=Electricity_units*0.12;
		}
		if(Electricity_units<= 500){
			bill=(100*0.12)+(Electricity_units-100)*0.15;
		}
		else{
			bill=(500*0.12)+(400*0.15)+((Electricity_units-500)*0.20);
		}
		 if(Electricity_units <=500){
			 bill=Electricity_units*0.18;
		 }
		 else{
			 bill=(500*0.18)+((Electricity_units-500)*0.25);
		 }
		
		//switch to show category
		switch(Electricity_units/100){
			case 0:
				case 1:
					printf("Category:Residential User\n");
					break;
				case 2:
					printf("Category:Commercial User\n");
					break;
				default:
					printf("Category:Invalid\n");
					break;
		}
		
		
		printf("Your total bill is:%.2f.KWh\n",bill);
	 
	    // loop:Ask again
	    printf("Do you want to calculate again?(yes/no):\n\n");
	    
	} 
	while(choice == 'y' || 'n');
	
	return 0;
}