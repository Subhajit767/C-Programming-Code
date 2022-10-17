#include<stdio.h>
int main(){
	int i,j,c;
	printf("Enter the number of rows:");
	scanf("%d",&c);
	for(i=c;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
