#include<stdio.h>
int main(){
	int i,n,j,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			j=i;
			printf("%d\n",j);
				sum=sum+j;
		}
	
		
	}
	printf("\nThe required sum is %d",sum);
	return 0;
}
