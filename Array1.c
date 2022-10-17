#include<stdio.h>
 main(){
	int avg,sum=0;
	int i;
	int marks[30];
	for(i=0;i<=29;i++)
	{
		printf("\n Enter Marks:");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=29;i++)
	{
		sum=sum+marks[i];
		avg=sum/30;
	}
	printf("\nAverage marks is %d",avg);
	return 0;
}
