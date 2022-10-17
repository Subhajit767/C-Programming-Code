#include<stdio.h>
int main()
{
	int i,j,k,n,a;
	printf("Enter the no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf("\n");
		a=1;
	    for(k=1;k<=i;k++)
	    {
	    	printf(" %d",a);
	    	a=a*(i-j)/(j+1);
		}
		printf("\n");
	}
}
