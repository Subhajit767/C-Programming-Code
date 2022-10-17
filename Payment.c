#include<stdio.h>
#include<math.h>
int main(){
	float basic,pf,da,hra;
	char name[20];
	printf("Enter your name:");
	scanf("%f",&name);
	printf("\nEnter your Basic Pay:");
	scanf("%f",&basic);
	printf("\nYour PF is=%f",0.15*basic);
	printf("\nYour DA is=%f",0.35*basic);
	printf("\nYour HRA is=%f",0.05*basic);
	printf("Your total gross is=%f",basic+0.15*basic+0.35*basic+0.05*basic);
	return 0;
}
