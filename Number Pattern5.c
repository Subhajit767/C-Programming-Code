#include<stdio.h>
int main(){
	int i,j,n,k,l=1,m;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*(n-i);j++)
		printf("  ");
		for(k=1;k<=2*i-1;k++,l++)
		printf("%d ",l);
		for(m=2*(i-1);m>=1;m--)
		printf("%d ",m);
		printf("\n");
		l=1;
	}
	return 0;
}
