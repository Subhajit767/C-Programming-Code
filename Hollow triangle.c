#include<stdio.h>
int main(){
	int i,j,rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
			if(j==i||j==1||i==rows)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
