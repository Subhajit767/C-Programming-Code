#include<stdio.h>
int main()
{
	int arr[3][3],i,j,count=0;
	printf("\n Enter the elements of matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("\n The matrix formed is....\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("%d  ",arr[i][j]);
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=i;j<=2;j++)
		{
		if(arr[i][j]==arr[j][i])
		count++;
	    }
	}
	if(count==6)
	printf("\n\n The matrix is symmetric");
	else
	printf("\n\n The matrix is not symmetric");
	printf("\n\n\n\n Press any key to continue...");
	return 0;
}
