#include<stdio.h>
int main(){
	int x,y,c,k;
	printf("Enter the numbers of rows:");
	scanf("%d",&c);
	for(x=1;x<=c;x++)
	{
		for(y=1;y<=c-x;y++)
		{
			printf(" ");
		}
		for(k=1;k<=x;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
