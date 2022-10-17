#include<stdio.h>
int main(){
	int i,j,row,k;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	k=1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			printf("%3d",k);
		}
		printf("\n");
	}
return 0;	
}
