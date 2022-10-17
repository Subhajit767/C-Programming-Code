#include<stdio.h>
int main(){
	int i,j,c,d;
	printf("Enter the total number of rows:");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=c-i;j++)
		{
			printf(" ");
		}
		for(d=1;d<=i;d++)
		{
			if(j==c||j==i||i==c){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
