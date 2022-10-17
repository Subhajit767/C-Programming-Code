#include<stdio.h>
int main(){
	int i,j,n,k,l=1;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%3d",k);
		printf("\n");
	}
	return 0;
}
