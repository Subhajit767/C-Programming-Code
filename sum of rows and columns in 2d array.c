#include<stdio.h>
int main(){
	int i,j,sum=0,a[4][4];
	printf("Enter the elements of matrix:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		sum=sum+a[i][j];
		printf("\nThe sum of %d row of the 4*4 matrix is %d",i+1,sum);
		sum=0;
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		sum=sum+a[i][j];
		printf("\nThe sum of %d column of the 4*4 matrix is %d",j+1,sum);
		sum=0;
	}
}
