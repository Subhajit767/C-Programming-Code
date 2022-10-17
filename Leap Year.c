#include<stdio.h>
int main(){
	int startyear,endyear,i;
	printf("Enter the start year:");
	scanf("%d",&startyear);
	printf("\nEnter the end year:");
	scanf("%d",&endyear);
	printf("\nLeap Years are:\n");
	for(i=startyear;i<=endyear;i++)
	{
		if((i%4==0)&&(i%100!=0)||(i%400==0))
		printf("%d ",i);
	}
	return 0;
}
