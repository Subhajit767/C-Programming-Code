#include<stdio.h>
int main(){
	int i,j,row;
	printf("Enter the row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			j=j+1;
			printf("%d",j);
		}
		printf("\n");
	}
}
