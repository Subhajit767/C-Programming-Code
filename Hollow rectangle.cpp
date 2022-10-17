#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the no of rows:");
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		for(b=1;b<=c;b++)
		{
			if(a==1||a==c||b==1||b==c)
			{
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
