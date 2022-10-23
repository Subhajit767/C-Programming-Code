#include<stdio.h>
int main(){
	int i,j,array[10][10],c,d;
	printf("Enter the no of rows and columns:");
	scanf("%d%d",&i,&j);
	printf("Enter the elements of matrix:");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	//printf("\n Hello");
}
