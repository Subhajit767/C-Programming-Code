#include<stdio.h>
int main(){
	int i,j,a[4][4],b[4][4],sum=0;
	printf("Enter the first matrix:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter the second matrix:");
	for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	scanf("%d",&b[i][j]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
