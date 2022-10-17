#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d",i+k-1);
		printf("\n");
	}
	return 0;
}
