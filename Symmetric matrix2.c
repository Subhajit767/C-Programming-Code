#include<stdio.h>
int main()
{
	int a[4][4],i,j,count=0;
	printf("Enter the elements of matrix:");
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);
	printf("The elements are:\n");
	for(i=0;i<4;i++)
	{
	for(j=0;j<4;j++)
	printf("%d ",a[i][j]);
	printf("\n");
    }
    printf("\n\n");
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		if(a[i][j]==a[j][i])
    		count++;
		}
	}
	if(count==10)
	printf("The matrix is symmetric.");
	else
	printf("The matrix is not symmetric.");
	return 0;
}
