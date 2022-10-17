#include<stdio.h>
int main(){
	int n;
	int i,array[n];
	printf("Enter the no of integers which you want to reverse:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&array[i]);
	}
	printf("\nBefore reversing the numbers are:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\nAfter reversing the numbers are:\n");
	for(i=n;i>=1;i--)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
