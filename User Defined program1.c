#include<stdio.h>
#include<math.h>
int main()
{
	printline();
	values();
	printline();
}
printline(){
	char c;

	int i;
	for(i=1;i<=100;i++)
	{
		printf("-");
	}
	printf("\n");
	return 0;
}
values(){
	printf("Enter your basic pay:");
	float basic;
	scanf("%f",&basic);
	float da,hra,ta,gross;
	da=0.1*basic;
	hra=0.055*basic;
	ta=0.05*basic;
	gross=basic+da+hra+ta;
	printf("Your da,hra,ta,gross are respectively %f %f %f %f\n",da,hra,ta,gross);
}
