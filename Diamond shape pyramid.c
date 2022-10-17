#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int r,s,rows,a;
	printf("Enter the numbers of rows:");
	scanf("%d",&rows);
	for(r=1;r<=rows;r++)
	{
		for(s=1;s<=(rows-r);s++)
		{
			printf(" ");
		}
		for(a=1;a<=(2*r-1);a++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(r=rows-1;r>=1;r--)
	{
		for(s=1;s<=(rows-r);s++)
		{
			printf(" ");
		}
		for(a=1;a<=(2*r-1);a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
