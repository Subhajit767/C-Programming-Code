#include<stdio.h>
int main(){
	int i,j,c;
	printf("Enter the no of rows:");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
