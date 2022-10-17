#include<stdio.h>
int main()
{
	int i, n;
	float sum=0;
	
	printf("Enter limit : ");
	scanf("%d",&n);
	
	printf("%d",1);
	for(i=2;i<=n;i++)
	{
		printf("+%d/%d", 1,i);
	}
	
	for(i=1;i<=n;i++)
	{
		sum = sum + 1/(float)i;
	}	
	printf(" =  %f\n",sum);
	return 0;
} 
