#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter the row:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			printf("%3c",j+96);
		}
		printf("\n");
	}
}
