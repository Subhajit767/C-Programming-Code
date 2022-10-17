#include<stdio.h>
int main(){
	int i,n,j,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=2*i-1;
		printf("%d\n",j);
		sum=sum+j;
		
	}
	printf("\nThe required sum is: %d",sum);
	return 0;
}
