#include<stdio.h>
int main(){
	int array[30][30],i,j;
	for(i=0;i<3;i++)//for taking inputs
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a [%d][%d]:",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<3;i++)//for printing 
	{
		for(j=0;j<3;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	
	//printf("mm");
}
