#include<stdio.h>
int main(){
	int i,j,k;
	for(i=4;i>=1;i--)
	{
		for(j=4-i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
