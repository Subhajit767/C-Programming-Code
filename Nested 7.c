#include<stdio.h>
int main(){
	int i,j,c,k;
	printf("Enter the number of rows:");
	scanf("%d",&c);
	for(i=c;i>=1;i--)
	{
		for(j=1;j>=3;j--)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
