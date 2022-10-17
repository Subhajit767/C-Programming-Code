#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i,j,s;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(s=1;s<=i;s++)
		{
			printf("%d ",i);
			
		}
		printf("\n");
	}
	return 0;
}
